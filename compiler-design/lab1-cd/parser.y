%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
void yyerror(const char *s);
int yylex();
extern FILE *yyin;
void yerr(const char *);
extern int yylineno;
extern char* yytext;
int errorcnt=0;
%}
%token  INT FLOAT CHAR ID DOUBLE WHILE FOR DO IF ELSE INCLUDE MAIN NUM HEADER DEC EQCOMP GREATEREQ LESSEREQ NOTEQ INC OROR ANDAND STRLITERAL
%start S
%nonassoc ELSE
%left IF
%%

S     : P     {YYACCEPT;}
      ;
P    : INCLUDE '<'HEADER'>' P
     | MainF P
     | Declr ';' P
     | Assgn ';' P
     | error ';' {yyerrok; yyclearin;} P
	 |
     ; 
Declr : Type ListVar
        ;
  
Type : INT 
     | FLOAT 
     | CHAR
     | DOUBLE
     ;
     
ListVar : ListVar ',' ID 
     | ID  
     ;
     

Assgn : ID '=' Expr 
      ;
Expr : Expr Relop E | E 
     ;
Relop : '<' 
    | '>'
    | LESSEREQ
    | GREATEREQ
    | EQCOMP
    | NOTEQ 
    ;
    
E : E '+' T
    | E '-' T
    | T 
    ;
    
    
T : T '*' F
    | T'/'F
    | F 
    ;
    
F : '('Expr')'
    | ID
    | NUM 
    ;
MainF : Type MAIN '('Empty_ListVar')' '{'Statement'}' 
      ;
Empty_ListVar : ListVar 
        |  
        ;
Statement : SingleStmt  Statement
    | blkstmt Statement
    |  IF '('Cond ')' Statement else_prec 
    |  WhileL
    |error ';' {yyerrok;yyclearin;} Statement
    | 
    ; 
blkstmt : '{' Statement '}'
else_prec : ELSE Statement | 
          ;
SingleStmt : Declr ';'
         | Assgn ';'
         ;

WhileL: WHILE '(' Cond ')' While_2 
    ;
Cond : Expr 
    | Assgn 
    ;
While_2 :  Statement
      ;
      

%%
void yyerror(const char *s)
{
printf("Error: %s, Line number: %d, token: %s\n", s,yylineno,yytext);
errorcnt++;

}
int yywrap(){
    return 1;
}

int main()
{
yyparse();
if(errorcnt==0) printf("Valid Syntax\n");
else printf("Invalid Syntax\n");
return 0;
}
