%{
#include<stdio.h>
#include "y.tab.h"
void yyerror(char *s);
int yylineno;
%}

letter [a-zA-Z_]
digit [0-9]
sign [+-]?
fraction  (\.{digit}+)?
exp ([Ee][+-]{digit}+)?
number {sign}{digit}*{fraction}{exp}
id {letter}({letter}|{digit})*

%x state

%%
"//".*  ;
\/\* {yymore(); BEGIN state;}
<state>[' '|\t] {yymore(); BEGIN state;}
<state>[\n] {yymore(); ++yylineno; BEGIN state;}
<state>[^\*] {yymore(); BEGIN state;}
<state>"*"[^/] {yymore(); BEGIN state;}
<state>"*"\/ BEGIN 0 ;

main return MAIN; 
int return INT; 
char return CHAR; 
float return FLOAT; 
double return DOUBLE; 
for return FOR; 
do return DO;
while return WHILE; 
if return IF; 
else return ELSE; 
#include return INCLUDE; 
{id} return ID; 
"+" return *yytext; 
"-" return *yytext; 
{number} return NUMBER; 
{id}\.h return HEADER; 

"++" return INC; 
"--" return DEC; 

">=" return GREATEREQ; 
"<=" return LESSEREQ; 

"==" return EQCOMP; 
"!=" return NOTEQ; 

"&&" return ANDAND; 
"||" return OROR; 

\r ;
\t ;
[' '] ;
\n { ++yylineno; }; 
. return *yytext;
%%

int yywrap()
{
return(1);
}