%{
	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	/*
		declare variables to help you keep track or store properties
		scope can be default value for this lab(implementation in the next lab)
	*/
	int size = 4;
	int type = 0;
	int scope = 0;
	void yyerror(char* s); // error handling function
	int yylex(); // declare the function performing lexical analysis
	extern int yylineno; // track the line number

%}

%token T_INT T_CHAR T_DOUBLE T_WHILE  T_INC T_DEC   T_OROR T_ANDAND T_EQCOMP T_NOTEQUAL T_GREATEREQ T_LESSEREQ T_LEFTSHIFT T_RIGHTSHIFT T_PRINTLN T_STRING  T_FLOAT T_BOOLEAN T_IF T_ELSE T_STRLITERAL T_DO T_INCLUDE T_HEADER T_MAIN T_ID T_NUM

%start START


%%
START : PROG { printf("Valid syntax\n"); YYACCEPT; }	
        ;	
	  
PROG :  MAIN PROG				
	|DECLR ';' PROG 				
	| ASSGN ';' PROG 			
	| 					
	;
	 

DECLR : TYPE LISTVAR 
	;	


LISTVAR : LISTVAR ',' VAR 
	  | VAR
	  ;

VAR: T_ID '=' EXPR 	{
				/*
					to be done in lab 3
				*/
				
				if(check_sym_tab($1)) {
                    			char *errorm = malloc(sizeof(char)*30);
                    			sprintf(errorm, "Variable %s was redeclared",$1);
                    			yyerror(errorm);
                    		}
                    		else {
                    			insert_symbol($1, size, type,yylineno,scope);
                    			if($3 != NULL) insert_val($1, $3, yylineno);
                    		}
			}
     | T_ID 		{
				/*
                   			check if symbol is in table
                    			if it is then print error for redeclared variable
                    			else make an entry and insert into the table
                    			revert variables to default values:type
                    		*/
                    		
                    		if(check_sym_tab($1)) {
                    			char *errorm = malloc(sizeof(char)*30);
                    			sprintf(errorm, "Variable %s was redeclared",$1);
                    			yyerror(errorm);
                    		}
                    		else insert_symbol($1, size, type,yylineno,scope);
			}	 

//assign type here to be returned to the declaration grammar
TYPE : T_INT {type = 0; size = 4;}
       | T_FLOAT {type = 1; size = 4;}
       | T_DOUBLE {type = 2; size = 8;}
       | T_CHAR {type = 3; size = 1;}
       ;
    
/* Grammar for assignment */   
ASSGN : T_ID '=' EXPR 	{
				/*
					to be done in lab 3
				*/
				
				// get type of T_ID for type checking
				
				if(!check_sym_tab($1)) {
                    			char *errorm = malloc(sizeof(char)*50);
                    			sprintf(errorm, "Variable %s was not declared in this scope",$1);
                    			yyerror(errorm);
                    		}
                    		
                    		else{
                    			
                    			int lvalue = retrieve_type($1);
                    			int rvalue = retrieve_type($3);
                    		
                    			if(rvalue == -1) rvalue = type_check($3);
                    		
                    		
                    			if((lvalue == 1 || lvalue == 2) && (rvalue == 0 || rvalue == 3)) {
                    				char *errorm = malloc(sizeof(char)*50);
                    				sprintf(errorm, "Invalid assignment to variable %s of type %s",$1, (lvalue == 1) ? "FLOAT" : "DOUBLE");
                    				yyerror(errorm);
                    			}
                    		
                    			else if(lvalue != rvalue) {
                    				char *errorm = malloc(sizeof(char)*50);
                    				sprintf(errorm, "Invalid assignment to variable %s of type %s",$1, (lvalue == 0) ? "INT" : "CHAR");
                    				yyerror(errorm);
                    			}
                    		
                    			else{
                    			insert_val($1, $3, yylineno);
					}
                    		
                    		}
                    		
			}
	;

EXPR : EXPR REL_OP E
       | E 
       ;
	   
E : E '+' T { 
		int t1 = retrieve_type($1);
		int t2 = retrieve_type($3);
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check($1);
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$1);
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check($3);
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$3);
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
                    	$$ = NULL;
		}
		
		else{
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi($1);
				
				else sum += atoi(retrieve_val($1));
				
			}
			
			else{
				if(v1) sum += atof($1);
				
				else sum += atof(retrieve_val($1));		
				
				
			}
			
			if(t2 == 0){
				if(v2) sum += atoi($3);
				
				else sum += atoi(retrieve_val($3));
				
				
			}
			
			else{
			
				if(v2) sum += atof($3);
				
				else sum += atof(retrieve_val($3));
				
			}
			
			if(t1 || t2){
				sprintf($$, "%lf", sum);
			}
			
			else sprintf($$, "%d", (int)sum);
		}
	}
	
    | E '-' T{
    
		int t1 = retrieve_type($1);
		int t2 = retrieve_type($3);
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check($1);
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$1);
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check($3);
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$3);
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
                    	$$ = NULL;
		}
		
		else{
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi($1);
				
				else sum += atoi(retrieve_val($1));
				
			}
			
			else{
				if(v1) sum += atof($1);
				
				else sum += atof(retrieve_val($1));		
				
			}
			
			if(t2 == 0){
				if(v2) sum -= atoi($3);
				
				else sum -= atoi(retrieve_val($3));
				
				
			}
			
			else{
			
				if(v2) sum -= atof($3);
				
				else sum -= atof(retrieve_val($3));
				
			}
			
			if(t1 || t2){
				sprintf($$, "%lf", sum);
			}
			
			else sprintf($$, "%d", (int)sum);
		}
	
    }
    | T 
    ;
	
	
T : T '*' F { 
		int t1 = retrieve_type($1);
		int t2 = retrieve_type($3);
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check($1);
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$1);
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check($3);
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$3);
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
			$$ = NULL;
		}
		
		else{
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi($1);
				
				else sum += atoi(retrieve_val($1));
				
			}
			
			else{
				if(v1) sum += atof($1);
				
				else sum += atof(retrieve_val($1));		
				
				
			}
			
			if(t2 == 0){
				if(v2) sum *= atoi($3);
				
				else sum *= atoi(retrieve_val($3));
				
				
			}
			
			else{
			
				if(v2) sum *= atof($3);
				
				else sum *= atof(retrieve_val($3));
				
			}
			
			if(t1 || t2){
				sprintf($$, "%lf", sum);
			}
			
			else sprintf($$, "%d", (int)sum);
		}
	}
    | T '/' F{ 
		int t1 = retrieve_type($1);
		int t2 = retrieve_type($3);
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check($1);
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$1);
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check($3);
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",$3);
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
			$$ = NULL;
		}
		
		else{
			
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi($1);
				else sum += atoi(retrieve_val($1));
			}
			
			else{
				if(v1) sum += atof($1);
				
				else sum += atof(retrieve_val($1));		
				
				
			}
			
			if(t2 == 0){
				if(v2) sum /= atoi($3);
				
				else sum /= atoi(retrieve_val($3));
				
				
			}
			
			else{
			
				if(v2) sum /= atof($3);
				
				else sum /= atof(retrieve_val($3));
				
			}
			
			if(t1 || t2){
				sprintf($$, "%lf", sum);
			}
			
			else sprintf($$, "%d", (int)sum);
		
		}
	}
    | F
    ;

F : '(' EXPR ')'
    | T_ID
    | T_NUM 
    | T_STRLITERAL 
    ;

REL_OP :   T_LESSEREQ
	   | T_GREATEREQ
	   | '<' 
	   | '>' 
	   | T_EQCOMP
	   | T_NOTEQUAL
	   ;	


/* Grammar for main function */
MAIN : TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{'{scope++;} STMT '}'{scope--;};

EMPTY_LISTVAR : LISTVAR
		|	
		;

STMT : STMT_NO_BLOCK STMT
       | BLOCK STMT
       |
       ;


STMT_NO_BLOCK : DECLR ';'
       | ASSGN ';' 
       | T_IF '(' COND ')' STMT %prec T_IFX	/* if loop*/
       | T_IF '(' COND ')' STMT T_ELSE STMT	/* if else loop */ 
       ;

BLOCK : '{' {scope++;} STMT '}' {scope--;}; 

COND : EXPR 
       | ASSGN
       ;


%%


/* error handling function */
void yyerror(char* s)
{
	printf("Error : %s at line number : %d \n",s,yylineno);
	//exit(1);
}


int main(int argc, char* argv[])
{
	/* initialise table here */
	init_table();
	yyparse();
	/* display final symbol table*/
	display_sym_tab();
	return 0;

}