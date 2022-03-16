%{
    #include<stdio.h>
%}
%%
abb    printf("1");
aba    printf("2");
a      printf("3");
.                 ;
%%
int yywrap(){
    return(1);
}
int main(int argc, char **argv){
    yyin = fopen("sample1.txt","r");
    yylex();
    fclose(yyin);
    return(0);
}