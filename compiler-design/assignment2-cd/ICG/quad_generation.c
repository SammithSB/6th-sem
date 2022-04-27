#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quad_generation.h"

void quad_code_gen(char* a, char* b, char* op, char* c)
{
	//use fprintf to output the quadruple code to icg_quad_file
	fprintf(icg_quad_file,"%s\t%s\t%s\t%s\n",op,a,b,c);
}

char* new_temp()
{
		//returns a pointer to a new temporary
		char *temp=(char*)malloc(sizeof(char)*4);
		sprintf(temp,"t%d",temp_no);
		temp_no++;
		return(temp);
}

char* new_label()
{
		//returns a pointer to a new label
		char *label=(char*)malloc(sizeof(char)*4);
		sprintf(label,"L%d",label_no);
		label_no++;
		return(label);
}