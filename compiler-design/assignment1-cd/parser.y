%{
#include<stdio.h>
#include<stdlib.h>
int yylex();
void yyerror(char *s);
extern int yylineno;
extern char *yytext;
%}

%token INT FLOAT DOUBLE CHAR FOR WHILE DO IF ELSE INCLUDE MAIN ID NUMBER HEADER GREATEREQ LESSEREQ EQCOMP NOTEQ INC DEC ANDAND OROR
%left '+' '-'
%left '*' '/'

%%
Start : Prog { printf("Declarations are valid.\n"); YYACCEPT; }
      ;

Prog: INCLUDE '<' HEADER '>' Prog | MainF Prog | Declr ';' Prog | Assgn ';' Prog | ArrayDecl ';' Prog | error ';' {yyerrok;yyclearin;} Prog |
    ;

ArrayDecl: ID Bracket;

Bracket:   '[' NUMBER ']' Bracket
         | '[' ID ']' Bracket
         | ; 

Declr: Type ListVar
     ;

ListVar: ListVar ',' ID | InitDeclr | ArrayDecl | ID
       ;

InitDeclr: Assgn ',' InitDeclr | Assgn
         ;

Type: INT | FLOAT | DOUBLE | CHAR
    ;


Unary_operator: '&' | '*' | '+' | '-' | '~' | '!'
              ;

IncDec: INC | DEC ;

Assgn: ID '=' Expr | ID '=' Logical | ArrayDecl '=' Expr | ArrayDecl '=' Logical
     ;

Logical: ID ANDAND Logical | ID OROR Logical | ID
       ;

Expr: Expr Relop E | Unary_operator ID | ID IncDec | E
    ;

Relop: '<' | '>' | LESSEREQ | GREATEREQ | EQCOMP | NOTEQ
     ;

E: E '+' T | E '-' T | T
 ;

T: T '*' F | T '/' F | F
 ;

F: '(' Expr ')' | ID | NUMBER
 ;

MainF: Type MAIN '(' Empty_ListVar ')' '{' Stmt '}'
      ;

Empty_ListVar: ListVar | 
              ;

Stmt: SingleStmt Stmt | Block Stmt | 
     ;

SingleStmt: Declr ';' | Assgn ';' | Cond ';' | IF '(' Cond ')' Stmt | IF '(' Cond ')' Stmt ELSE Stmt | WhileL | ForL | DoWhileL | error ';' {yyerrok;yyclearin;}
           ;

Block: '{' Stmt '}'
      ;

WhileL: WHILE '(' Cond ')' Loop_body
       ;

Cond: Expr | Assgn | Logical
    ;

Loop_body: '{' Stmt '}' | 
      ;

multi_expression: Cond | Type Cond | multi_expression ',' Cond
                ;

expression_statement : ';' | multi_expression ';'
                    ;

ForL: FOR '(' expression_statement expression_statement multi_expression ')' Loop_body
    ;

DoWhileL: DO Loop_body WHILE '(' Cond ')' ';'
        ;
%%

void yyerror(char *s)
{
  printf("Error: %s, Line number: %d, Token: %s\n", s, yylineno, yytext);
}

int main()
{
  if(!yyparse()) {
    printf("Parsing Successful\n");
  } 
  else {
    printf("Unsuccessful\n");
  }
  return 0;
}