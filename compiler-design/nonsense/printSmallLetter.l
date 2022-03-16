%{
    #include<stdio.h>
%}
%%
[a-z] printf("small letters");
%%
int yywrap(){
    return(1);
}
int main(){
    yylex();
    return 0;
}