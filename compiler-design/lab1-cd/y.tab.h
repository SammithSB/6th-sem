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
     CHAR = 260,
     ID = 261,
     DOUBLE = 262,
     WHILE = 263,
     FOR = 264,
     DO = 265,
     IF = 266,
     ELSE = 267,
     INCLUDE = 268,
     MAIN = 269,
     NUM = 270,
     HEADER = 271,
     DEC = 272,
     EQCOMP = 273,
     GREATEREQ = 274,
     LESSEREQ = 275,
     NOTEQ = 276,
     INC = 277,
     OROR = 278,
     ANDAND = 279,
     STRLITERAL = 280
   };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define CHAR 260
#define ID 261
#define DOUBLE 262
#define WHILE 263
#define FOR 264
#define DO 265
#define IF 266
#define ELSE 267
#define INCLUDE 268
#define MAIN 269
#define NUM 270
#define HEADER 271
#define DEC 272
#define EQCOMP 273
#define GREATEREQ 274
#define LESSEREQ 275
#define NOTEQ 276
#define INC 277
#define OROR 278
#define ANDAND 279
#define STRLITERAL 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

