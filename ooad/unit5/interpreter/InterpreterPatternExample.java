import java.util.Stack;
 
public class InterpreterPatternExample {
    public static void main(String args[]) {
 Stack stack = new Stack();
 String postFix = "5 3 * 2 + 1 - 4 /"; // (5 * 3 + 2 - 1)/4
 
 String[] tokenList = postFix.split(" ");
 for (String s : tokenList) {
     if (isOperatorString(s)) {
  Expression rightOp = (Expression)stack.pop();
  Expression leftOp = (Expression)stack.pop();
  Expression operator = getOperatorHandler(s, leftOp,
   rightOp);
  int result = operator.evaluate();
  stack.push(new WholeNumber(result));
     } else {
  Expression num = new WholeNumber(s);
  stack.push(num);
     }
 }
 System.out.println(((Expression)stack.pop()).evaluate());
    }
 
    public static boolean isOperatorString(String str) {
 if (str.equals("+") || str.equals("-") || str.equals("*") || str.equals("/"))
     return true;
 else
            return false;
    }
 
    public static Expression getOperatorHandler(String str, Expression left,
     Expression right) {
 switch (str) {
     case "+":
  return new Addition(left, right);
     case "-":
  return new Subtraction(left, right);
     case "*":
  return new Multiply(left, right);
     case "/":
  return new Divide(left, right);
     default:
  return null;
 }
    }
}