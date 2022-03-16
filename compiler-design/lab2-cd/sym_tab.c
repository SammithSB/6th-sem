#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sym_tab.h"

table* allocate_space_for_table()	
{
	/*
        allocate space for table pointer structure eg (t_name)* t
        initialise head variable eg t->head
        return structure
    	*/
    table *t= malloc(sizeof(table));
    t->head = NULL;
    return t;
}

symbol* allocate_space_for_table_entry(char* name, int size, int type, int lineno, int scope) //allocates space for items in the list
{
	/*
        allocate space for entry pointer structure eg (s_name)* s
        initialise all struct variables(name, value, type, scope, length, line number)
        return structure
    	*/
    symbol *s= malloc(sizeof(symbol));
    s->name = name;
    s->val = "~";
    s->type = type;
    s->scope = scope;
    s->size = size;
    s->line = lineno;
    s->next = NULL;
    return s;
}

void insert_into_table(table * t,symbol* s)
/* 
 arguments can be the structure s_name already allocated before this function call
 or the variables to be sent to allocate_space_for_table_entry for initialisation        
*/
{
    /*
        check if table is empty or not using the struct table pointer
        else traverse to the end of the table and insert the entry
    */
    if(t->head == NULL)
    {
        t->head = s;
    }
    else
    {
        symbol *temp = t->head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = s;
    }
}

int check_symbol_table(char* name) //return a value like integer for checking
{
    /*
        check if table is empty and return a value like 0
        else traverse the table
        if entry is found return a value like 1
        if not return a value like 0
    */
    if(t->head == NULL)
    {
        return 0;
    }
    else
    {
        symbol *temp = t->head;
        while(temp != NULL)
        {
            if(strcmp(temp->name, name) == 0)
            {
                return 1;
            }
            temp = temp->next;
        }
        return 0;
    }
}

void insert_value_to_name(char* name,char *value)
{
    /*
        if value is default value return back
        check if table is empty
        else traverse the table and find the name
        insert value into the entry structure
    */
    if(strcmp(value,"~") == 0)
    {
        return;
    }
    if(t->head == NULL)
    {
        return;
    }
    else
    {
        symbol *temp = t->head;
        while(temp != NULL)
        {
            if(strcmp(temp->name, name) == 0)
            {
                temp->val = value;
                return;
            }
            temp = temp->next;
        }
    }
}

void display_symbol_table()
{
    /*
        traverse through table and print every entry
        with its struct variables
    */
    symbol *temp = t->head;
    printf("%*s %*s %*s %*s %*s\n",-10,"Name",-10,"Value",-10,"Type",-10,"Scope",-10,"Length");
    while(temp != NULL)
    {
        // printf("%s %s %d %d %d %d\n",temp->name,temp->val,temp->type,temp->scope,temp->size,temp->line);
        printf("%*s %*s %*d %*d %*d\n",-10,temp->name,-10,temp->val,-10,temp->type,-10,temp->scope,-10,temp->size);
        temp = temp->next;
    }
}
