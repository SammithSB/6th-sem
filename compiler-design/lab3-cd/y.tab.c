/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

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


#line 85 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_INT = 258,
    T_CHAR = 259,
    T_DOUBLE = 260,
    T_WHILE = 261,
    T_INC = 262,
    T_DEC = 263,
    T_OROR = 264,
    T_ANDAND = 265,
    T_EQCOMP = 266,
    T_NOTEQUAL = 267,
    T_GREATEREQ = 268,
    T_LESSEREQ = 269,
    T_LEFTSHIFT = 270,
    T_RIGHTSHIFT = 271,
    T_PRINTLN = 272,
    T_STRING = 273,
    T_FLOAT = 274,
    T_BOOLEAN = 275,
    T_IF = 276,
    T_ELSE = 277,
    T_STRLITERAL = 278,
    T_DO = 279,
    T_INCLUDE = 280,
    T_HEADER = 281,
    T_MAIN = 282,
    T_ID = 283,
    T_NUM = 284,
    T_IFX = 285
  };
#endif
/* Tokens.  */
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_WHILE 261
#define T_INC 262
#define T_DEC 263
#define T_OROR 264
#define T_ANDAND 265
#define T_EQCOMP 266
#define T_NOTEQUAL 267
#define T_GREATEREQ 268
#define T_LESSEREQ 269
#define T_LEFTSHIFT 270
#define T_RIGHTSHIFT 271
#define T_PRINTLN 272
#define T_STRING 273
#define T_FLOAT 274
#define T_BOOLEAN 275
#define T_IF 276
#define T_ELSE 277
#define T_STRLITERAL 278
#define T_DO 279
#define T_INCLUDE 280
#define T_HEADER 281
#define T_MAIN 282
#define T_ID 283
#define T_NUM 284
#define T_IFX 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   87

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      37,    38,    35,    33,    31,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      39,    32,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    29,    30,    31,    32,    36,    40,    41,
      44,    59,    76,    77,    78,    79,    83,   125,   126,   129,
     205,   281,   285,   360,   435,   438,   439,   440,   441,   444,
     445,   446,   447,   448,   449,   454,   454,   456,   457,   460,
     461,   462,   466,   467,   468,   469,   472,   472,   474,   475
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_CHAR", "T_DOUBLE", "T_WHILE",
  "T_INC", "T_DEC", "T_OROR", "T_ANDAND", "T_EQCOMP", "T_NOTEQUAL",
  "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_PRINTLN",
  "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF", "T_ELSE", "T_STRLITERAL",
  "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID", "T_NUM", "';'", "','",
  "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'<'", "'>'", "'{'",
  "'}'", "T_IFX", "$accept", "START", "PROG", "DECLR", "LISTVAR", "VAR",
  "TYPE", "ASSGN", "EXPR", "E", "T", "F", "REL_OP", "MAIN", "$@1",
  "EMPTY_LISTVAR", "STMT", "STMT_NO_BLOCK", "BLOCK", "$@2", "COND", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      59,    44,    61,    43,    45,    42,    47,    40,    41,    60,
      62,   123,   125,   285
};
# endif

#define YYPACT_NINF -28

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-28)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      32,   -28,   -28,   -28,   -28,     2,     9,   -28,    12,   -22,
      13,    32,    41,   -28,    32,     8,    14,    22,   -28,    32,
     -28,   -28,   -28,   -28,    41,    17,   -21,   -19,   -28,   -28,
      31,    41,    31,   -28,    10,   -28,   -28,   -28,   -28,   -28,
     -28,    41,    41,    41,    41,    41,    22,    24,    17,   -28,
     -28,   -21,   -19,   -19,   -28,   -28,    33,   -28,    -1,    26,
     -28,    42,    31,    45,    37,    -1,    -1,    48,    -1,   -28,
     -28,   -28,   -28,   -28,     2,   -28,    17,    43,    38,    -1,
     -28,    60,    -1,   -28
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    12,    15,    14,    13,     0,     0,     2,     0,     0,
       0,     6,     0,     1,     6,     0,    11,     7,     9,     6,
       3,    28,    26,    27,     0,    16,    18,    21,    24,     4,
      38,     0,     0,     5,     0,    33,    34,    30,    29,    31,
      32,     0,     0,     0,     0,     0,    37,     0,    10,     8,
      25,    17,    19,    20,    22,    23,     0,    35,    41,     0,
      46,     0,     0,     0,     0,    41,    41,     0,    41,    42,
      43,    36,    39,    40,    26,    49,    48,     0,     0,    41,
      47,    44,    41,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,    -4,    47,    53,    52,    54,     0,   -23,    46,
     -17,   -12,   -28,   -28,   -28,   -28,   -27,   -28,   -28,   -28,
     -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,    61,    17,    18,    62,    63,    25,    26,
      27,    28,    41,    11,    58,    47,    64,    65,    66,    68,
      77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    34,     1,     2,     3,    15,    16,    20,    48,    13,
      29,    10,    42,    43,    10,    33,    44,    45,     4,    10,
      59,    35,    36,    37,    38,    52,    53,     5,    35,    36,
      37,    38,    54,    55,    12,     1,     2,     3,    72,    73,
      60,    78,    14,    19,    76,    30,    31,     8,    50,    39,
      40,     4,    81,    32,     9,    83,    39,    40,     8,    16,
       5,     8,    56,    67,    21,     9,     8,    75,     9,    22,
      23,    21,    69,     9,    57,    70,    74,    23,    24,    71,
      80,    79,    82,    46,    49,    24,     0,    51
};

static const yytype_int8 yycheck[] =
{
       0,    24,     3,     4,     5,    27,    28,    11,    31,     0,
      14,    11,    33,    34,    14,    19,    35,    36,    19,    19,
      21,    11,    12,    13,    14,    42,    43,    28,    11,    12,
      13,    14,    44,    45,    32,     3,     4,     5,    65,    66,
      41,    68,    30,    30,    67,    37,    32,     0,    38,    39,
      40,    19,    79,    31,     0,    82,    39,    40,    11,    28,
      28,    14,    38,    37,    23,    11,    19,    67,    14,    28,
      29,    23,    30,    19,    41,    30,    28,    29,    37,    42,
      42,    38,    22,    30,    32,    37,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    19,    28,    45,    46,    47,    50,
      51,    57,    32,     0,    30,    27,    28,    48,    49,    30,
      46,    23,    28,    29,    37,    52,    53,    54,    55,    46,
      37,    32,    31,    46,    52,    11,    12,    13,    14,    39,
      40,    56,    33,    34,    35,    36,    48,    59,    52,    49,
      38,    53,    54,    54,    55,    55,    38,    41,    58,    21,
      41,    47,    50,    51,    60,    61,    62,    37,    63,    30,
      30,    42,    60,    60,    28,    51,    52,    64,    60,    38,
      42,    60,    22,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    47,    48,    48,
      49,    49,    50,    50,    50,    50,    51,    52,    52,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    56,    58,    57,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    63,    62,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     0,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     9,     1,     0,     2,
       2,     0,     2,     2,     5,     7,     0,     4,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 26 "parser.y" /* yacc.c:1646  */
    { printf("Valid syntax\n"); YYACCEPT; }
#line 1331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "parser.y" /* yacc.c:1646  */
    {
				/*
					to be done in lab 3
				*/
				
				if(check_sym_tab((yyvsp[-2]))) {
                    			char *errorm = malloc(sizeof(char)*30);
                    			sprintf(errorm, "Variable %s was redeclared",(yyvsp[-2]));
                    			yyerror(errorm);
                    		}
                    		else {
                    			insert_symbol((yyvsp[-2]), size, type,yylineno,scope);
                    			if((yyvsp[0]) != NULL) insert_val((yyvsp[-2]), (yyvsp[0]), yylineno);
                    		}
			}
#line 1351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "parser.y" /* yacc.c:1646  */
    {
				/*
                   			check if symbol is in table
                    			if it is then print error for redeclared variable
                    			else make an entry and insert into the table
                    			revert variables to default values:type
                    		*/
                    		
                    		if(check_sym_tab((yyvsp[0]))) {
                    			char *errorm = malloc(sizeof(char)*30);
                    			sprintf(errorm, "Variable %s was redeclared",(yyvsp[0]));
                    			yyerror(errorm);
                    		}
                    		else insert_symbol((yyvsp[0]), size, type,yylineno,scope);
			}
#line 1371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 76 "parser.y" /* yacc.c:1646  */
    {type = 0; size = 4;}
#line 1377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "parser.y" /* yacc.c:1646  */
    {type = 1; size = 4;}
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 78 "parser.y" /* yacc.c:1646  */
    {type = 2; size = 8;}
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 79 "parser.y" /* yacc.c:1646  */
    {type = 3; size = 1;}
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "parser.y" /* yacc.c:1646  */
    {
				/*
					to be done in lab 3
				*/
				
				// get type of T_ID for type checking
				
				if(!check_sym_tab((yyvsp[-2]))) {
                    			char *errorm = malloc(sizeof(char)*50);
                    			sprintf(errorm, "Variable %s was not declared in this scope",(yyvsp[-2]));
                    			yyerror(errorm);
                    		}
                    		
                    		else{
                    			
                    			int lvalue = retrieve_type((yyvsp[-2]));
                    			int rvalue = retrieve_type((yyvsp[0]));
                    		
                    			if(rvalue == -1) rvalue = type_check((yyvsp[0]));
                    		
                    		
                    			if((lvalue == 1 || lvalue == 2) && (rvalue == 0 || rvalue == 3)) {
                    				char *errorm = malloc(sizeof(char)*50);
                    				sprintf(errorm, "Invalid assignment to variable %s of type %s",(yyvsp[-2]), (lvalue == 1) ? "FLOAT" : "DOUBLE");
                    				yyerror(errorm);
                    			}
                    		
                    			else if(lvalue != rvalue) {
                    				char *errorm = malloc(sizeof(char)*50);
                    				sprintf(errorm, "Invalid assignment to variable %s of type %s",(yyvsp[-2]), (lvalue == 0) ? "INT" : "CHAR");
                    				yyerror(errorm);
                    			}
                    		
                    			else{
                    			insert_val((yyvsp[-2]), (yyvsp[0]), yylineno);
					}
                    		
                    		}
                    		
			}
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "parser.y" /* yacc.c:1646  */
    { 
		int t1 = retrieve_type((yyvsp[-2]));
		int t2 = retrieve_type((yyvsp[0]));
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check((yyvsp[-2]));
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[-2]));
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check((yyvsp[0]));
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[0]));
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
                    	(yyval) = NULL;
		}
		
		else{
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi((yyvsp[-2]));
				
				else sum += atoi(retrieve_val((yyvsp[-2])));
				
			}
			
			else{
				if(v1) sum += atof((yyvsp[-2]));
				
				else sum += atof(retrieve_val((yyvsp[-2])));		
				
				
			}
			
			if(t2 == 0){
				if(v2) sum += atoi((yyvsp[0]));
				
				else sum += atoi(retrieve_val((yyvsp[0])));
				
				
			}
			
			else{
			
				if(v2) sum += atof((yyvsp[0]));
				
				else sum += atof(retrieve_val((yyvsp[0])));
				
			}
			
			if(t1 || t2){
				sprintf((yyval), "%lf", sum);
			}
			
			else sprintf((yyval), "%d", (int)sum);
		}
	}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 205 "parser.y" /* yacc.c:1646  */
    {
    
		int t1 = retrieve_type((yyvsp[-2]));
		int t2 = retrieve_type((yyvsp[0]));
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check((yyvsp[-2]));
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[-2]));
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check((yyvsp[0]));
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[0]));
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
                    	(yyval) = NULL;
		}
		
		else{
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi((yyvsp[-2]));
				
				else sum += atoi(retrieve_val((yyvsp[-2])));
				
			}
			
			else{
				if(v1) sum += atof((yyvsp[-2]));
				
				else sum += atof(retrieve_val((yyvsp[-2])));		
				
			}
			
			if(t2 == 0){
				if(v2) sum -= atoi((yyvsp[0]));
				
				else sum -= atoi(retrieve_val((yyvsp[0])));
				
				
			}
			
			else{
			
				if(v2) sum -= atof((yyvsp[0]));
				
				else sum -= atof(retrieve_val((yyvsp[0])));
				
			}
			
			if(t1 || t2){
				sprintf((yyval), "%lf", sum);
			}
			
			else sprintf((yyval), "%d", (int)sum);
		}
	
    }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 285 "parser.y" /* yacc.c:1646  */
    { 
		int t1 = retrieve_type((yyvsp[-2]));
		int t2 = retrieve_type((yyvsp[0]));
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check((yyvsp[-2]));
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[-2]));
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check((yyvsp[0]));
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[0]));
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
			(yyval) = NULL;
		}
		
		else{
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi((yyvsp[-2]));
				
				else sum += atoi(retrieve_val((yyvsp[-2])));
				
			}
			
			else{
				if(v1) sum += atof((yyvsp[-2]));
				
				else sum += atof(retrieve_val((yyvsp[-2])));		
				
				
			}
			
			if(t2 == 0){
				if(v2) sum *= atoi((yyvsp[0]));
				
				else sum *= atoi(retrieve_val((yyvsp[0])));
				
				
			}
			
			else{
			
				if(v2) sum *= atof((yyvsp[0]));
				
				else sum *= atof(retrieve_val((yyvsp[0])));
				
			}
			
			if(t1 || t2){
				sprintf((yyval), "%lf", sum);
			}
			
			else sprintf((yyval), "%d", (int)sum);
		}
	}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 360 "parser.y" /* yacc.c:1646  */
    { 
		int t1 = retrieve_type((yyvsp[-2]));
		int t2 = retrieve_type((yyvsp[0]));
		int v1 = 0, v2 = 0;
		
		if(t1 == -1){
			t1 = type_check((yyvsp[-2]));
			if(t1 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[-2]));
                    		yyerror(errorm);
			}
			
			v1 = 1;
		}
		
		if(t2 == -1){
			t2 = type_check((yyvsp[0]));
			if(t2 == -1){
				char *errorm = malloc(sizeof(char)*30);
                    		sprintf(errorm, "Variable %s is neither a variable nor a literal",(yyvsp[0]));
                    		yyerror(errorm);
			}
			v2 = 1;

		}
		
		if(t1 == 3 || t2 == 3){
			char *errorm = malloc(sizeof(char)*30);
                    	sprintf(errorm, "Invalid operation on variable of type CHAR");
                    	yyerror(errorm);
			(yyval) = NULL;
		}
		
		else{
			
			double sum = 0;
		
			if(t1 == 0){
				if(v1) sum += atoi((yyvsp[-2]));
				else sum += atoi(retrieve_val((yyvsp[-2])));
			}
			
			else{
				if(v1) sum += atof((yyvsp[-2]));
				
				else sum += atof(retrieve_val((yyvsp[-2])));		
				
				
			}
			
			if(t2 == 0){
				if(v2) sum /= atoi((yyvsp[0]));
				
				else sum /= atoi(retrieve_val((yyvsp[0])));
				
				
			}
			
			else{
			
				if(v2) sum /= atof((yyvsp[0]));
				
				else sum /= atof(retrieve_val((yyvsp[0])));
				
			}
			
			if(t1 || t2){
				sprintf((yyval), "%lf", sum);
			}
			
			else sprintf((yyval), "%d", (int)sum);
		
		}
	}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 454 "parser.y" /* yacc.c:1646  */
    {scope++;}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 454 "parser.y" /* yacc.c:1646  */
    {scope--;}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 472 "parser.y" /* yacc.c:1646  */
    {scope++;}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 472 "parser.y" /* yacc.c:1646  */
    {scope--;}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1789 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 479 "parser.y" /* yacc.c:1906  */



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
