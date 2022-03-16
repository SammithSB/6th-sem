/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     DOUBLE = 260,
     CHAR = 261,
     FOR = 262,
     WHILE = 263,
     DO = 264,
     IF = 265,
     ELSE = 266,
     INCLUDE = 267,
     MAIN = 268,
     ID = 269,
     NUMBER = 270,
     HEADER = 271,
     GREATEREQ = 272,
     LESSEREQ = 273,
     EQCOMP = 274,
     NOTEQ = 275,
     INC = 276,
     DEC = 277,
     ANDAND = 278,
     OROR = 279
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define DOUBLE 260
#define CHAR 261
#define FOR 262
#define WHILE 263
#define DO 264
#define IF 265
#define ELSE 266
#define INCLUDE 267
#define MAIN 268
#define ID 269
#define NUMBER 270
#define HEADER 271
#define GREATEREQ 272
#define LESSEREQ 273
#define EQCOMP 274
#define NOTEQ 275
#define INC 276
#define DEC 277
#define ANDAND 278
#define OROR 279




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

