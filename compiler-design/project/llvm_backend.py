from typing import Dict, List, Optional

from llvmlite import binding, ir
from llvmlite.ir.instructions import CallInstr, ICMPInstr, LoadInstr, PhiInstr

from .astnodes import (
    AssignStmt,
    BinaryExpr,
    BooleanLiteral,
    CallExpr,
    ClassType,
    ExprStmt,
    FuncDef,
    Identifier,
    IfExpr,
    IfStmt,
    IntegerLiteral,
    Node,
    NoneLiteral,
    Program,
    ReturnStmt,
    StringLiteral,
    TypedVar,
    UnaryExpr,
    VarDef,
    WhileStmt,
)
from .backend import Backend


class LLVMBackendError(Exception):
    def __init__(self, message, node: Node = None):
        if node is not None:
            if hasattr(node, "lineno"):
                super().__init__(
                    message
                    + ". Line {:d} Col {:d}".format(node.lineno, node.col_offset)
                )
                return
        super().__init__(message + ".")


class LLVMBackend(Backend):
    def __init__(self, int_bits=32, bool_bits=1, char_bits=8):
        # Create module to hold IR code
        self.module = ir.Module()
        self.module.triple = binding.get_process_triple()

        # Set parameters
        self.int_bits = int_bits
        self.bool_bits = bool_bits
        self.char_bits = char_bits

        # Create main func to hold toplevel declarations and statements
        self.main_func = ir.Function(
            self.module, ir.FunctionType(ir.IntType(self.int_bits), []), "main"
        )
        self.builder: Optional[ir.IRBuilder] = ir.IRBuilder(
            self.main_func.append_basic_block("entry")
        )

        # Declare global functions
        voidptr_ty = ir.PointerType(ir.IntType(self.char_bits))
        printf_ty = ir.FunctionType(
            ir.IntType(self.int_bits), [voidptr_ty], var_arg=True
        )
        ir.Function(self.module, printf_ty, "printf")

        # Create symbol table to store variables in scope
        self.func_symtab: List[Dict[str, ir.Value]] = [{}]

    def visit(self, node: Node):
        return node.visit(self)

    # Performs memory allocation for a new variable
    def _create_alloca(self, name, typ):
        if self.builder is None:
            raise Exception("No builder is active")

        with self.builder.goto_entry_block():
            alloca = self.builder.alloca(typ, size=None, name=name)
        return alloca

    # Returns the address of a variable from the symbol table
    def _get_var_addr(self, name):
        try:
            return self.func_symtab[-1][name]
        except KeyError:
            raise Exception("Undefined variable: " + name)

    # Returns the LLVM type object corresponding to the type name
    def _get_llvm_type(self, typename: str):
        if typename == "int":
            return ir.IntType(self.int_bits)
        elif typename == "str":
            return ir.PointerType(ir.IntType(self.char_bits))
        elif typename == "bool":
            return ir.IntType(self.bool_bits)
        elif typename == "<None>":
            return ir.VoidType()
        else:
            raise Exception(f"Invalid type: {typename}")

    ##################################
    #        TO BE IMPLEMENTED       #
    ##################################

    def VarDef(self, node: VarDef):
        if self.builder is None:
            raise Exception("[VAR DEF] No builder is active")

        var = self.visit(node.var)
        alloca = self._create_alloca(var['name'], var['type'])
        val = self.visit(node.value)
        self.builder.store(val, alloca)
        self.func_symtab[-1][var['name']] = alloca


    def AssignStmt(self, node: AssignStmt):
        if self.builder is None:
            raise Exception("[ASSIGN STMT] No builder is active")

        val = self.visit(node.value)
        targets = node.targets[::-1]
        for target in targets:
            self.builder.store(val, self.func_symtab[-1][target.name])

    def IfStmt(self, node: IfStmt):
        if self.builder is None:
            raise Exception("[IF STMT] No builder is active")

        bb_condition = self.builder.append_basic_block(
                self.module.get_unique_name("ifstmt.condition")
                )

        bb_then = self.builder.append_basic_block(
                self.module.get_unique_name("ifstmt.bb_then")
                )

        bb_else = self.builder.append_basic_block(
                self.module.get_unique_name("ifstmt.bb_else")
                )

        bb_end = self.builder.append_basic_block(
                self.module.get_unique_name("ifstmt.end")
                )

        self.builder.branch(bb_condition)

        with self.builder.goto_block(bb_condition):
            condition = self.visit(node.condition)
            self.builder.cbranch(condition, bb_then, bb_else)

        with self.builder.goto_block(bb_then):
            for stmt in node.thenBody:
                self.visit(stmt)
            self.builder.branch(bb_end)


        with self.builder.goto_block(bb_else):
            for stmt in node.elseBody:
                self.visit(stmt)
            self.builder.branch(bb_end)

        self.builder.position_at_end(bb_end)


    def WhileStmt(self, node: WhileStmt):
        if self.builder is None:
            raise Exception("[WHILE STMT] No builder is active")

        bb_condition = self.builder.append_basic_block(
                self.module.get_unique_name("while.condition")
                )

        bb_body = self.builder.append_basic_block(
                self.module.get_unique_name("while.body")
                )

        bb_end = self.builder.append_basic_block(
                self.module.get_unique_name("while.end")
                )

        self.builder.branch(bb_condition)

        with self.builder.goto_block(bb_condition):
            condition = self.visit(node.condition)
            self.builder.cbranch(condition, bb_body, bb_end)

        with self.builder.goto_block(bb_body):
            for stmt in node.body:
                self.visit(stmt)
            self.builder.branch(bb_condition)

        self.builder.position_at_end(bb_end)


    def BinaryExpr(self, node: BinaryExpr) -> Optional[ICMPInstr]:
        if self.builder is None:
            raise Exception("[BINARY EXPR]  No Builder is active")

        operator = node.operator
        lhs = self.visit(node.left)
        rhs = self.visit(node.right)

        if (operator == "+"):
            return self.builder.add(lhs, rhs)
        elif (operator == "-"):
            return self.builder.sub(lhs, rhs)
        elif (operator == "*"):
            return self.builder.sub(lhs, rhs)
        elif (operator == "%"):
            return self.builder.srem(lhs, rhs)
        elif (operator == "and"):
            return self.builder.and_(lhs, rhs)
        elif (operator == "or"):
            return self.builder.or_(lhs, rhs)
        elif (operator in ["<", ">", "<=", ">=", "!=", "=="]):
            return self.builder.icmp_signed(operator, lhs, rhs)


    def Identifier(self, node: Identifier) -> LoadInstr:
        if self.builder is None:
            raise Exception("[IDENTIFIER] No Builder is active")

        return self.builder.load(self.func_symtab[-1][node.name])

    def IfExpr(self, node: IfExpr) -> PhiInstr:
        if self.builder is None:
            raise Exception("[IF EXPR] No builder is active")

        bb_condition = self.builder.append_basic_block(
                self.module.get_unique_name("ifexpr.condition")
                )

        bb_then = self.builder.append_basic_block(
                self.module.get_unique_name("ifexpr.bb_then")
                )

        bb_else = self.builder.append_basic_block(
                self.module.get_unique_name("ifexpr.bb_else")
                )

        bb_end = self.builder.append_basic_block(
                self.module.get_unique_name("ifexpr.end")
                )

        self.builder.branch(bb_condition)

        with self.builder.goto_block(bb_condition):
            condition = self.visit(node.condition)
            self.builder.cbranch(condition, bb_then, bb_else)


        with self.builder.goto_block(bb_then):
            thenExpr = self.visit(node.thenExpr)
            self.branch(bb_end)

        with self.builder.goto_block(bb_else):
            elseExpr = self.visit(node.elseExpr)
            self.branch(bb_end)

        with self.builder.goto_block(bb_end):
            type_name = str(node.thenExpr.inferredType)
            phi = self.builder.phi(self._get_llvm_type(type_name))
            phi.add_incoming(thenExpr, bb_then)
            phi.add_incoming(elseExpr, bb_else)


        self.builder.position_at_end(bb_end)
        return phi





    ##################################
    #      END OF IMPLEMENTATION     #
    ##################################

    # TOP LEVEL & DECLARATIONS
    def Program(self, node: Program):
        for d in node.declarations:
            self.visit(d)
        for s in node.statements:
            self.visit(s)

        # Find the exit basic block and terminate it
        for bb in self.main_func.basic_blocks:
            if not bb.is_terminated:
                self.builder = ir.IRBuilder(bb)
                self.builder.position_at_end(bb)
                self.builder.ret(self._get_llvm_type("int")(0))
        return self

    def FuncDef(self, node: FuncDef):
        # Create new symbol table
        self.func_symtab.append({})

        funcname = node.name.name
        returnType = self._get_llvm_type(node.returnType.className)
        paramTypes = [self.visit(i)["type"] for i in node.params]
        functype = ir.FunctionType(returnType, paramTypes)

        if funcname in self.module.globals:  # Definition for already declared function
            func = existing_func = self.module.globals[funcname]
            if not isinstance(existing_func, ir.Function):
                raise LLVMBackendError(f"Name collision: {funcname}", node)
            if not existing_func.is_declaration:
                raise LLVMBackendError(f"Redefinition of {funcname}", node)
            if len(existing_func.function_type.args) != len(functype.args):
                raise LLVMBackendError(
                    f"Declaration and definition of {funcname} have different signatures",
                    node,
                )
        else:  # New function
            func = ir.Function(self.module, functype, funcname)
            for (name, arg) in zip(
                [self.visit(i)["name"] for i in node.params], func.args
            ):
                arg.name = name

        bb_entry = func.append_basic_block("entry")
        old_builder = self.builder
        self.builder = ir.IRBuilder(bb_entry)

        # Add all arguments to the symbol table and create their allocas
        for arg in func.args:
            alloca = self._create_alloca(arg.name, arg.type)
            self.builder.store(arg, alloca)
            self.func_symtab[-1][arg.name] = alloca

        # Generate code for the body and then return the result
        for d in node.declarations:
            self.visit(d)
        for s in node.statements:
            self.visit(s)
        if not bb_entry.is_terminated:
            self.builder.ret_void()

        # End the function scope
        self.func_symtab.pop()
        self.builder = old_builder

    # STATEMENTS
    def ExprStmt(self, node: ExprStmt):
        self.visit(node.expr)

    def ReturnStmt(self, node: ReturnStmt):
        if self.builder is None:
            raise Exception("No builder is active")

        retval = self.visit(node.value)
        self.builder.ret(retval)

    # Expressions
    def UnaryExpr(self, node: UnaryExpr):
        if self.builder is None:
            raise Exception("No builder is active")

        operand = self.visit(node.operand)
        if node.operator == "-":
            return self.builder.neg(operand, "negtmp")
        elif node.operator == "not":
            return self.builder.sub(self._get_llvm_type("bool")(1), operand)
        else:
            raise LLVMBackendError(f"Unsupported unary operator: {node.operator}", node)

    def CallExpr(self, node: CallExpr) -> CallInstr:
        if self.builder is None:
            raise Exception("No builder is active")

        callee_func = self.module.globals.get(node.function.name, None)
        if callee_func is None or not isinstance(callee_func, ir.Function):
            raise LLVMBackendError(
                f"Call to unknown function {node.function.name}", node
            )

        call_args = [self.visit(arg) for arg in node.args]
        return self.builder.call(callee_func, call_args, "calltmp")

    # LITERALS

    def BooleanLiteral(self, node: BooleanLiteral) -> ir.Constant:
        return self._get_llvm_type("bool")(int(node.value))

    def IntegerLiteral(self, node: IntegerLiteral) -> ir.Constant:
        return self._get_llvm_type("int")(node.value)

    def NoneLiteral(self, node: NoneLiteral) -> ir.Constant:
        return ir.Constant(ir.PointerType(node.value), node.value)

    def StringLiteral(self, node: StringLiteral) -> ir.Constant:
        global_lit = ir.ArrayType(ir.IntType(self.char_bits), len(node.value) + 1)(
            bytearray(node.value.encode("utf8")) + bytearray("\0".encode("utf8"))
        )
        global_name = self.module.get_unique_name("str")
        g = ir.GlobalVariable(self.module, global_lit.type, global_name)
        g.global_constant = True
        g.linkage = "internal"
        g.initializer = global_lit
        return g.gep((ir.IntType(32)(0), ir.IntType(32)(0)))

    # TYPES

    def TypedVar(self, node: TypedVar) -> dict:
        return {
            "name": node.identifier.name,
            "type": self._get_llvm_type(node.type.className),
        }

    def ClassType(self, _: ClassType):
        pass
