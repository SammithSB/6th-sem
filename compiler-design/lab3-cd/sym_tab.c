#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sym_tab.h"

void init_table()	
{
	/*
        allocate space for table pointer structure eg (t_name)* t
        initialise head variable eg t->head
        return structure
    	*/
    t = (table*)malloc(sizeof(table));
    t->head = NULL;
}

symbol* init_symbol(char* name, int size, int type, int lineno, int scope) //allocates space for items in the list
{
	/*
        allocate space for entry pointer structure eg (s_name)* s
        initialise all struct variables(name, value, type, scope, length, line number)
        return structure
    	*/
    symbol* s = (symbol*)malloc(sizeof(symbol));
    s->name = strdup(name);
    s->val = NULL;
    s->type = type;
    s->scope = scope;
    s->len = size;
    s->line = lineno;
    s->next = NULL;

    return s;
}

void insert_symbol(char* name, int len, int type, int lineno,int scope)/* 
 arguments can be the structure s_name already allocated before this function call
 or the variables to be sent to allocate_space_for_table_entry for initialisation        
*/
{
    /*
        check if table is empty or not using the struct table pointer
        else traverse to the end of the table and insert the entry
    */
    symbol* s = init_symbol(name, len, type, lineno, scope);
    if(t->head == NULL)
        t->head = s;
    else {
        symbol* temp = t->head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = s;
    }
}

int check_sym_tab(char* name) //return a value like integer for checking
{
    /*
        check if table is empty and return a value like 0
        else traverse the table
        if entry is found return a value like 1
        if not return a value like 0
    */
    if(t->head == NULL)
        return 0;
    else {
        symbol* temp = t->head;
        while(temp != NULL) {
            if(strcmp(temp->name, name) == 0)
                return 1;
            temp = temp->next;
        }
        return 0;
    }
}

void insert_val(char* name, char* v, int line)
{
    /*
        if value is default value return back
        check if table is empty
        else traverse the table and find the name
        insert value into the entry structure
    */
    if(!t->head)
        return;
    symbol* temp = t->head;
    while(temp->next != NULL) {
        if(strcmp(temp->name, name) == 0) {
            temp->val = v;
            temp->line = line;
            return;
        }
        temp = temp->next;
    }
    return;
}

void display_sym_tab()
{
    /*
        traverse through table and print every entry
        with its struct variables
    */
    symbol *temp = t->head;
    printf("| Name\t");
    printf("| Val\t");
    printf("| Type\t");
    printf("| Scope\t");
    printf("| Size\t");
    printf("| Line\n");
    printf("------------------------------------------------\n");

    while(temp) {
        printf("| %s\t", temp->name);
        if(temp->val)
            printf("| %s\t", temp->val);
        else
            printf("| NULL\t");
        if(temp->type == 0)
            printf("| INT\t");
        if(temp->type == 1)
            printf("| FLOAT\t");
        if(temp->type == 2)
            printf("| DOUBLE");
        if(temp->type == 3)
            printf("| CHAR\t");
        printf("| %d\t", temp->scope);
        printf("| %d\t", temp->len);
        printf("| %d\n", temp->line);
        temp = temp->next;        
    }
    printf("------------------------------------------------\n");
    return;
}

char* retrieve_val(char* name) {
    /*
        check if table is empty
        else traverse the table and find the name
        return the value of the entry
    */
    if(!t->head)
        return NULL;
    symbol* temp = t->head;
    while(temp->next != NULL) {
        if(strcmp(temp->name, name) == 0)
            return temp->val;
        temp = temp->next;
    }
    return NULL;
}

int retrieve_type(char* name) {
    /*
        check if table is empty
        else traverse the table and find the name
        return the type of the entry
    */
    if(name== NULL) return -1;
   
   	symbol *ptr = t->head;
   
   	while(ptr){
   		if((strcmp(ptr->name, name) == 0)){
   			return ptr->type;
   		}
   		ptr = ptr->next;
   	}
   	
   	return -1;
}

int type_check(char* value) {
    /*
        check if value is integer
        else check if value is float
        else check if value is double
        else check if value is char
    */
    if(value == NULL) return -1;
	for(int i = 0; value[i]; i++){
		if((value[i]>='a' && value[i] <= 'z') || (value[i] >='A' && value[i] <='Z')) return 3; // char type
		
		else if(value[i] == '.') return 1; //float or double type
		
		else if (value[i] < '0' || value[i] > '9') return -1; //invalid type
	}
	
	return 0; // int type
}
