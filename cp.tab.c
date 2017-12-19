/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "cp.y"

#include <stdio.h>
#include <string.h>
#include "inc.h"
void yyerror(const char *s);

int linect(FILE *fopen);
void nextline(void);

locnode *init = NULL; 

void push(locnode **top, locnode *inf, char *tok);
void pop(locnode **top, char *type);
void insert(unsigned long i, char *type, int loc);
void intpush(simplenode **top, int val);

enum {F = 1, ST, E, ST_ID};


/* Line 371 of yacc.c  */
#line 88 "cp.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "cp.tab.h".  */
#ifndef YY_YY_CP_TAB_H_INCLUDED
# define YY_YY_CP_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     TRUEVAL = 264,
     FALSEVAL = 265,
     PTR_OP = 266,
     INC_OP = 267,
     DEC_OP = 268,
     LEFT_OP = 269,
     RIGHT_OP = 270,
     LE_OP = 271,
     GE_OP = 272,
     EQ_OP = 273,
     NE_OP = 274,
     AND_OP = 275,
     OR_OP = 276,
     MUL_ASSIGN = 277,
     DIV_ASSIGN = 278,
     MOD_ASSIGN = 279,
     ADD_ASSIGN = 280,
     SUB_ASSIGN = 281,
     LEFT_ASSIGN = 282,
     RIGHT_ASSIGN = 283,
     AND_ASSIGN = 284,
     XOR_ASSIGN = 285,
     OR_ASSIGN = 286,
     TYPEDEF_NAME = 287,
     ENUMERATION_CONSTANT = 288,
     INCLUDE = 289,
     STD_LIBRARY = 290,
     TYPEDEF = 291,
     EXTERN = 292,
     STATIC = 293,
     AUTO = 294,
     REGISTER = 295,
     INLINE = 296,
     CONST = 297,
     RESTRICT = 298,
     VOLATILE = 299,
     BOOL = 300,
     CHAR = 301,
     SHORT = 302,
     INT = 303,
     LONG = 304,
     SIGNED = 305,
     UNSIGNED = 306,
     FLOAT = 307,
     DOUBLE = 308,
     VOID = 309,
     COMPLEX = 310,
     IMAGINARY = 311,
     STRUCT = 312,
     UNION = 313,
     ENUM = 314,
     ELLIPSIS = 315,
     CASE = 316,
     DEFAULT = 317,
     IF = 318,
     ELSE = 319,
     SWITCH = 320,
     WHILE = 321,
     DO = 322,
     FOR = 323,
     GOTO = 324,
     CONTINUE = 325,
     BREAK = 326,
     RETURN = 327,
     ALIGNAS = 328,
     ALIGNOF = 329,
     ATOMIC = 330,
     GENERIC = 331,
     NORETURN = 332,
     STATIC_ASSERT = 333,
     THREAD_LOCAL = 334
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 233 "cp.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2468

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  281
/* YYNRULES -- Number of states.  */
#define YYNSTATES  487

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,     2,     2,     2,    96,    89,     2,
      80,    81,    90,    91,    82,    92,    86,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,   103,
      97,   102,    98,   101,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   100,    88,    93,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    38,    40,    44,    48,
      52,    54,    59,    63,    68,    72,    76,    79,    82,    89,
      97,    99,   103,   105,   108,   111,   114,   117,   122,   127,
     129,   131,   133,   135,   137,   139,   141,   146,   148,   152,
     156,   160,   162,   166,   170,   172,   176,   180,   182,   186,
     190,   194,   198,   200,   204,   208,   210,   214,   216,   220,
     222,   226,   228,   232,   234,   238,   240,   246,   248,   252,
     254,   256,   258,   260,   262,   264,   266,   268,   270,   272,
     274,   276,   280,   282,   285,   289,   291,   294,   296,   299,
     301,   304,   306,   309,   311,   314,   316,   318,   322,   326,
     328,   330,   332,   334,   336,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   377,   383,   386,   388,   390,   392,   395,
     398,   402,   404,   407,   409,   412,   414,   416,   420,   423,
     427,   429,   434,   440,   446,   453,   456,   458,   462,   466,
     468,   473,   475,   477,   479,   481,   483,   485,   490,   495,
     498,   500,   502,   506,   510,   515,   522,   528,   534,   541,
     547,   552,   557,   562,   566,   571,   575,   578,   581,   583,
     585,   588,   592,   594,   596,   600,   603,   606,   608,   610,
     614,   617,   619,   622,   624,   626,   630,   633,   637,   643,
     648,   654,   659,   663,   667,   671,   676,   683,   689,   695,
     702,   707,   712,   715,   719,   723,   728,   732,   737,   739,
     742,   744,   749,   753,   756,   758,   761,   765,   768,   776,
     778,   780,   782,   784,   786,   788,   792,   797,   801,   804,
     808,   810,   813,   815,   817,   819,   822,   830,   836,   842,
     848,   856,   863,   871,   878,   886,   890,   893,   896,   899,
     903,   906,   908,   910,   912,   915,   917,   919,   921,   926,
     930,   932
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     180,     0,    -1,     3,    -1,   106,    -1,   108,    -1,    80,
     130,    81,    -1,   109,    -1,     4,    -1,     5,    -1,    33,
      -1,     9,    -1,    10,    -1,     3,    -1,     6,    -1,     7,
      -1,    76,    80,   128,    82,   110,    81,    -1,   111,    -1,
     110,    82,   111,    -1,   160,    83,   128,    -1,    62,    83,
     128,    -1,   105,    -1,   112,    84,   130,    85,    -1,   112,
      80,    81,    -1,   112,    80,   113,    81,    -1,   112,    86,
       3,    -1,   112,    11,     3,    -1,   112,    12,    -1,   112,
      13,    -1,    80,   160,    81,    87,   164,    88,    -1,    80,
     160,    81,    87,   164,    82,    88,    -1,   128,    -1,   113,
      82,   128,    -1,   112,    -1,    12,   114,    -1,    13,   114,
      -1,   115,   116,    -1,     8,   114,    -1,     8,    80,   160,
      81,    -1,    74,    80,   160,    81,    -1,    89,    -1,    90,
      -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,   114,
      -1,    80,   160,    81,   116,    -1,   116,    -1,   117,    90,
     116,    -1,   117,    95,   116,    -1,   117,    96,   116,    -1,
     117,    -1,   118,    91,   117,    -1,   118,    92,   117,    -1,
     118,    -1,   119,    14,   118,    -1,   119,    15,   118,    -1,
     119,    -1,   120,    97,   119,    -1,   120,    98,   119,    -1,
     120,    16,   119,    -1,   120,    17,   119,    -1,   120,    -1,
     121,    18,   120,    -1,   121,    19,   120,    -1,   121,    -1,
     122,    89,   121,    -1,   122,    -1,   123,    99,   122,    -1,
     123,    -1,   124,   100,   123,    -1,   124,    -1,   125,    20,
     124,    -1,   125,    -1,   126,    21,   125,    -1,   126,    -1,
     126,   101,   130,    83,   127,    -1,   127,    -1,   114,   129,
     128,    -1,   102,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,   128,    -1,   130,    82,   128,    -1,
     127,    -1,   133,   103,    -1,   133,   134,   103,    -1,   168,
      -1,   136,   133,    -1,   136,    -1,   137,   133,    -1,   137,
      -1,   149,   133,    -1,   149,    -1,   150,   133,    -1,   150,
      -1,   151,   133,    -1,   151,    -1,   135,    -1,   134,    82,
     135,    -1,   152,   102,   163,    -1,   152,    -1,    36,    -1,
      37,    -1,    38,    -1,    79,    -1,    39,    -1,    40,    -1,
      54,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      52,    -1,    53,    -1,    50,    -1,    51,    -1,    45,    -1,
      55,    -1,    56,    -1,   148,    -1,   138,    -1,   145,    -1,
      32,    -1,   139,    87,   140,    88,    -1,   139,     3,    87,
     140,    88,    -1,   139,     3,    -1,    57,    -1,    58,    -1,
     141,    -1,   140,   141,    -1,   142,   103,    -1,   142,   143,
     103,    -1,   168,    -1,   137,   142,    -1,   137,    -1,   149,
     142,    -1,   149,    -1,   144,    -1,   143,    82,   144,    -1,
      83,   131,    -1,   152,    83,   131,    -1,   152,    -1,    59,
      87,   146,    88,    -1,    59,    87,   146,    82,    88,    -1,
      59,     3,    87,   146,    88,    -1,    59,     3,    87,   146,
      82,    88,    -1,    59,     3,    -1,   147,    -1,   146,    82,
     147,    -1,   107,   102,   131,    -1,   107,    -1,    75,    80,
     160,    81,    -1,    42,    -1,    43,    -1,    44,    -1,    75,
      -1,    41,    -1,    77,    -1,    73,    80,   160,    81,    -1,
      73,    80,   131,    81,    -1,   154,   153,    -1,   153,    -1,
       3,    -1,    80,   152,    81,    -1,   153,    84,    85,    -1,
     153,    84,    90,    85,    -1,   153,    84,    38,   155,   128,
      85,    -1,   153,    84,    38,   128,    85,    -1,   153,    84,
     155,    90,    85,    -1,   153,    84,   155,    38,   128,    85,
      -1,   153,    84,   155,   128,    85,    -1,   153,    84,   155,
      85,    -1,   153,    84,   128,    85,    -1,   153,    80,   156,
      81,    -1,   153,    80,    81,    -1,   153,    80,   159,    81,
      -1,    90,   155,   154,    -1,    90,   155,    -1,    90,   154,
      -1,    90,    -1,   149,    -1,   155,   149,    -1,   157,    82,
      60,    -1,   157,    -1,   158,    -1,   157,    82,   158,    -1,
     133,   152,    -1,   133,   161,    -1,   133,    -1,     3,    -1,
     159,    82,     3,    -1,   142,   161,    -1,   142,    -1,   154,
     162,    -1,   154,    -1,   162,    -1,    80,   161,    81,    -1,
      84,    85,    -1,    84,    90,    85,    -1,    84,    38,   155,
     128,    85,    -1,    84,    38,   128,    85,    -1,    84,   155,
      38,   128,    85,    -1,    84,   155,   128,    85,    -1,    84,
     155,    85,    -1,    84,   128,    85,    -1,   162,    84,    85,
      -1,   162,    84,    90,    85,    -1,   162,    84,    38,   155,
     128,    85,    -1,   162,    84,    38,   128,    85,    -1,   162,
      84,   155,   128,    85,    -1,   162,    84,   155,    38,   128,
      85,    -1,   162,    84,   155,    85,    -1,   162,    84,   128,
      85,    -1,    80,    81,    -1,    80,   156,    81,    -1,   162,
      80,    81,    -1,   162,    80,   156,    81,    -1,    87,   164,
      88,    -1,    87,   164,    82,    88,    -1,   128,    -1,   165,
     163,    -1,   163,    -1,   164,    82,   165,   163,    -1,   164,
      82,   163,    -1,   166,   102,    -1,   167,    -1,   166,   167,
      -1,    84,   131,    85,    -1,    86,     3,    -1,    78,    80,
     131,    82,     6,    81,   103,    -1,   170,    -1,   171,    -1,
     174,    -1,   175,    -1,   176,    -1,   177,    -1,     3,    83,
     169,    -1,    61,   131,    83,   169,    -1,    62,    83,   169,
      -1,    87,    88,    -1,    87,   172,    88,    -1,   173,    -1,
     172,   173,    -1,   132,    -1,   169,    -1,   103,    -1,   130,
     103,    -1,    63,    80,   130,    81,   169,    64,   169,    -1,
      63,    80,   130,    81,   169,    -1,    65,    80,   130,    81,
     169,    -1,    66,    80,   130,    81,   169,    -1,    67,   169,
      66,    80,   130,    81,   103,    -1,    68,    80,   174,   174,
      81,   169,    -1,    68,    80,   174,   174,   130,    81,   169,
      -1,    68,    80,   132,   174,    81,   169,    -1,    68,    80,
     132,   174,   130,    81,   169,    -1,    69,     3,   103,    -1,
      70,   103,    -1,    71,   103,    -1,    72,   103,    -1,    72,
     130,   103,    -1,    34,   179,    -1,     6,    -1,    35,    -1,
     181,    -1,   180,   181,    -1,   182,    -1,   132,    -1,   178,
      -1,   133,   152,   183,   171,    -1,   133,   152,   171,    -1,
     132,    -1,   183,   132,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    44,    45,    46,    47,    51,    52,    53,
      54,    55,    59,    63,    64,    68,    72,    73,    77,    78,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      95,    96,   100,   101,   102,   103,   104,   105,   106,   110,
     111,   112,   113,   114,   115,   119,   120,   124,   125,   126,
     127,   131,   132,   133,   137,   138,   139,   143,   144,   145,
     146,   147,   151,   152,   153,   157,   158,   162,   163,   167,
     168,   172,   173,   177,   178,   182,   183,   187,   188,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     206,   207,   211,   215,   216,   217,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   234,   235,   239,   240,
     244,   245,   246,   247,   248,   249,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   272,   273,   274,   278,   279,   283,   284,   288,
     289,   290,   294,   295,   296,   297,   301,   302,   306,   307,
     308,   312,   313,   314,   315,   316,   320,   321,   325,   326,
     330,   334,   335,   336,   337,   341,   342,   346,   347,   351,
     352,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   373,   374,   375,   376,   380,
     381,   386,   387,   391,   392,   396,   397,   398,   402,   403,
     407,   408,   412,   413,   414,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   442,   443,   444,   448,
     449,   450,   451,   455,   459,   460,   464,   465,   469,   473,
     474,   475,   476,   477,   478,   482,   483,   484,   488,   489,
     493,   494,   498,   499,   503,   504,   508,   509,   510,   514,
     515,   516,   517,   518,   519,   523,   524,   525,   526,   527,
     531,   535,   536,   539,   540,   544,   545,   546,   550,   551,
     555,   556
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "TRUEVAL", "FALSEVAL", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
  "INCLUDE", "STD_LIBRARY", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'",
  "$accept", "primary_expression", "constant", "enumeration_constant",
  "string", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "include_prep", "include_follower", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      40,    41,    44,    58,    91,    93,    46,   123,   125,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   105,   105,   105,   106,   106,   106,
     106,   106,   107,   108,   108,   109,   110,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   115,   115,   115,   115,   116,   116,   117,   117,   117,
     117,   118,   118,   118,   119,   119,   119,   120,   120,   120,
     120,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   136,   136,   136,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   141,
     141,   141,   142,   142,   142,   142,   143,   143,   144,   144,
     144,   145,   145,   145,   145,   145,   146,   146,   147,   147,
     148,   149,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   158,   159,   159,
     160,   160,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   164,
     164,   164,   164,   165,   166,   166,   167,   167,   168,   169,
     169,   169,   169,   169,   169,   170,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   175,   176,
     176,   176,   176,   176,   176,   177,   177,   177,   177,   177,
     178,   179,   179,   180,   180,   181,   181,   181,   182,   182,
     183,   183
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     1,     3,     3,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     2,     1,     1,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     1,     3,     2,     3,
       1,     4,     5,     5,     6,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     2,     2,     1,     1,
       2,     3,     1,     1,     3,     2,     2,     1,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     7,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     1,     1,     1,     2,     7,     5,     5,     5,
       7,     6,     7,     6,     7,     3,     2,     2,     2,     3,
       2,     1,     1,     1,     2,     1,     1,     1,     4,     3,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   131,     0,   110,   111,   112,   114,   115,   165,   161,
     162,   163,   125,   117,   118,   119,   120,   123,   124,   121,
     122,   116,   126,   127,   135,   136,     0,     0,   164,   166,
       0,   113,   276,     0,    97,    99,   129,     0,   130,   128,
     101,   103,   105,    95,   277,     0,   273,   275,   271,   272,
     270,   155,     0,     0,     0,     0,   171,     0,   188,    93,
       0,   106,   109,   170,     0,    96,    98,   134,     0,   100,
     102,   104,     1,   274,     0,    12,   159,     0,   156,     2,
       7,     8,    13,    14,     0,    10,    11,     0,     0,     9,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    20,
       3,     4,     6,    32,    45,     0,    47,    51,    54,    57,
      62,    65,    67,    69,    71,    73,    75,    92,     0,   143,
     201,   145,     0,     0,     0,     0,   164,   189,   187,   186,
       0,    94,     0,     0,   280,     0,   279,     0,     0,     0,
     169,     0,     0,   137,     0,   141,     0,     0,     0,   151,
       0,    36,     0,    33,    34,     0,     0,    45,    77,    90,
       0,     0,     0,    26,    27,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   142,
       0,     0,   203,   200,   204,   144,   167,   160,     0,   172,
     190,   185,   107,   109,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,   254,     0,   252,
     253,   239,   240,     0,   250,   241,   242,   243,   244,     0,
     228,   108,   281,   278,   198,   183,   197,     0,   192,   193,
       0,     0,   173,    40,     0,     0,     0,   132,   138,     0,
     139,     0,   146,   150,     0,   153,   158,   152,   157,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    79,     0,     5,     0,     0,    25,    22,
       0,    30,     0,    24,    48,    49,    50,    52,    53,    55,
      56,    60,    61,    58,    59,    63,    64,    66,    68,    70,
      72,    74,     0,   222,     0,     0,     0,   206,    40,     0,
       0,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   266,   267,   268,     0,   255,   249,
     251,     0,     0,   230,     0,     0,     0,   234,     0,   195,
     203,   196,   182,     0,   184,     0,     0,     0,   174,   181,
       0,   180,    40,     0,   133,   148,     0,   140,     0,   154,
      37,     0,    38,     0,    78,    91,     0,    46,    23,     0,
      21,     0,   223,   205,     0,     0,   207,   213,     0,   212,
       0,   224,     0,     0,   214,    40,     0,     0,     0,   245,
       0,   247,     0,     0,     0,     0,     0,     0,   265,   269,
       0,   237,     0,   226,   229,   233,   235,   191,   194,   199,
     176,     0,     0,   177,   179,   147,   149,     0,     0,    16,
       0,     0,    31,    76,   209,     0,     0,   211,   225,     0,
       0,   215,   221,     0,   220,     0,   238,   246,     0,     0,
       0,     0,     0,     0,   236,   227,   232,     0,   175,   178,
       0,    15,     0,     0,     0,    28,   208,   210,   217,     0,
       0,   218,   257,   258,   259,     0,     0,     0,     0,     0,
     231,    19,    17,    18,    29,   216,   219,     0,     0,   263,
       0,   261,     0,   256,   260,   264,   262
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,   100,    76,   101,   102,   418,   419,   103,   280,
     157,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   158,   159,   274,   218,   118,    32,   135,
      60,    61,    34,    35,    36,    37,   142,   143,   120,   251,
     252,    38,    77,    78,    39,    40,    41,    42,   125,    63,
      64,   129,   304,   238,   239,   240,   420,   305,   194,   333,
     334,   335,   336,   337,    43,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    44,    50,    45,    46,    47,   137
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -375
static const yytype_int16 yypact[] =
{
    2196,  -375,    48,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,    31,   -22,   -20,  -375,
     -11,  -375,  -375,    34,  2284,  2284,  -375,    35,  -375,  -375,
    2284,  2284,  2284,  -375,  -375,   434,  -375,  -375,  -375,  -375,
    -375,     6,    93,   899,  2393,  1671,  -375,    59,   133,  -375,
     -46,  -375,  1881,   -40,    52,  -375,  -375,    58,  2322,  -375,
    -375,  -375,  -375,  -375,    93,  -375,    80,   -41,  -375,  -375,
    -375,  -375,  -375,  -375,  1693,  -375,  -375,  1715,  1715,  -375,
      74,   116,   899,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,   161,  -375,  1671,  -375,   -66,    77,   189,
     124,   198,    90,   121,   135,   213,    60,  -375,   159,  2393,
     125,  2393,   165,   175,   184,   190,  -375,  -375,  -375,   133,
      59,  -375,   492,  1421,  -375,    34,  -375,  2098,  1835,   991,
     -40,  2322,  1998,  -375,    30,  -375,    70,  1671,    23,  -375,
     899,  -375,   899,  -375,  -375,  2393,  1671,   359,  -375,  -375,
     156,   197,   277,  -375,  -375,  1443,  1671,   280,  -375,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  -375,  -375,
    1948,  1013,   -13,  -375,   111,  -375,  -375,  -375,   281,  -375,
    -375,  -375,  -375,   191,   214,  1671,   216,   211,   225,   228,
     785,   234,   314,   218,   222,   362,  -375,  -375,    78,  -375,
    -375,  -375,  -375,   601,  -375,  -375,  -375,  -375,  -375,  1399,
    -375,  -375,  -375,  -375,  -375,  -375,    67,   254,   244,  -375,
     167,  1263,  -375,   252,   253,  1035,  2045,  -375,  -375,  1671,
    -375,    81,  -375,   256,    28,  -375,  -375,  -375,  -375,   259,
     260,   261,   262,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  1671,  -375,  1671,  1535,  -375,  -375,
     170,  -375,   -50,  -375,  -375,  -375,  -375,   -66,   -66,    77,
      77,   189,   189,   189,   189,   124,   124,   198,    90,   121,
     135,   213,   172,  -375,   264,   266,  1263,  -375,   258,   263,
    1127,   111,  2150,  1149,   268,   785,   272,   785,  1671,  1671,
    1671,   291,   693,   255,  -375,  -375,  -375,    83,  -375,  -375,
    -375,  1671,   357,  -375,   131,  1421,    99,  -375,  1778,  -375,
      43,  -375,  -375,  2240,  -375,   358,   278,  1263,  -375,  -375,
    1671,  -375,   279,   293,  -375,  -375,    76,  -375,  1671,  -375,
     275,   275,  -375,  2359,  -375,  -375,  1399,  -375,  -375,  1671,
    -375,  1671,  -375,  -375,   306,  1263,  -375,  -375,  1671,  -375,
     308,  -375,   313,  1263,  -375,   311,   312,  1171,   295,  -375,
     785,  -375,   177,   181,   183,   320,   807,   807,  -375,  -375,
     316,  -375,  1285,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,   317,   318,  -375,  -375,  -375,  -375,   321,   187,  -375,
     323,   136,  -375,  -375,  -375,   322,   324,  -375,  -375,   325,
    1263,  -375,  -375,  1671,  -375,   326,  -375,  -375,   785,   785,
     785,  1671,  1557,  1579,  -375,  -375,  -375,  1421,  -375,  -375,
    1671,  -375,  2359,  1671,  1307,  -375,  -375,  -375,  -375,   327,
     328,  -375,   344,  -375,  -375,   193,   785,   208,   785,   221,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,   785,   329,  -375,
     785,  -375,   785,  -375,  -375,  -375,  -375
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -375,  -375,  -375,  -375,  -375,  -375,  -375,   -19,  -375,  -375,
     245,  -375,   -27,   134,   137,    49,   138,   257,   265,   251,
     273,   271,  -375,   -35,   -74,  -375,   -89,   -43,   -45,     8,
    -375,   307,  -375,   -47,  -375,  -375,   299,  -115,   -12,  -375,
      85,  -375,   369,  -126,  -375,   -53,  -375,  -375,   -29,   -55,
     -56,  -116,  -125,  -375,   101,  -375,    -2,  -101,  -176,  -123,
      79,  -374,  -375,   110,   -57,  -196,  -375,   -37,  -375,   224,
    -186,  -375,  -375,  -375,  -375,  -375,  -375,   404,  -375,  -375
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     121,   121,   128,   160,    62,   127,   119,   119,    33,   140,
     231,   145,   124,   237,   321,   121,   311,   134,   117,   193,
     117,   119,   258,   245,   169,   136,    75,   248,   447,   170,
     171,    75,   276,    56,    51,   370,   130,    56,    67,   121,
     138,   148,    65,    66,   139,   119,    56,   149,    69,    70,
      71,   122,   123,    33,    48,    56,   144,   131,    53,   230,
      54,   160,    56,   160,   192,   244,   121,   190,   121,    55,
      56,   191,   119,   201,   119,   310,   200,   282,   168,    56,
     447,   186,   262,    49,   145,   145,   127,   219,   121,   121,
     161,   281,   232,    74,   119,   119,    75,   121,   302,   121,
     233,   203,   121,   119,   256,   119,   203,   189,   119,   195,
      57,   257,   117,   249,    57,   253,   359,   309,    52,   389,
      58,   391,    68,   338,    58,   347,   327,   191,   258,   144,
     144,   248,    57,   250,   192,   341,   397,    59,   127,    57,
     176,   177,   284,   285,   286,   141,   236,   338,   259,    58,
     260,   191,   254,   261,   155,   230,    57,    58,   255,   249,
     276,   187,   316,   356,   311,   276,    58,   346,   172,   173,
     117,   353,   162,   163,   164,     9,    10,    11,   219,   182,
     340,   328,   147,   331,   357,   332,   399,   382,   127,   145,
     375,   312,   200,   121,   437,   313,   156,   387,   236,   119,
     364,   405,   365,   174,   175,   190,   355,   339,   126,   191,
     442,   443,   404,   402,   117,    58,   180,   181,   454,   403,
     183,   178,   179,    58,   455,   291,   292,   293,   294,   392,
     393,   394,   374,   185,   144,   184,   380,   275,   276,   386,
     188,   165,   462,   463,   464,   166,   196,   167,   344,   345,
     367,   368,   369,   127,   276,   371,   197,   200,   438,   276,
     127,   230,   439,   276,   440,   276,   198,   430,   451,   452,
     479,   199,   481,   411,   478,   276,   412,   396,   277,   446,
     278,   483,   340,   283,   485,   140,   486,   314,   400,   480,
     276,   318,   230,   133,   200,   422,   117,   315,   104,   317,
     104,   425,   482,   276,   426,   319,   287,   288,   320,   429,
     121,   289,   290,   435,   322,   416,   119,   323,   295,   296,
     236,   324,   200,   117,   470,   325,   343,   253,   230,   151,
     127,   446,   153,   154,   200,   342,   423,   348,   349,   358,
     360,   361,   362,   376,   363,   372,   236,   373,   377,   388,
     104,   236,   465,   467,   469,   390,   459,   395,   398,   460,
     401,   409,   366,   410,   413,    79,    80,    81,    82,    83,
      84,    85,    86,   230,    87,    88,   471,   200,   414,   473,
     230,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   424,   104,   427,   428,    89,   431,   432,   436,   121,
     441,   444,   448,   449,   450,   119,   453,   456,   477,   457,
     458,   461,   475,   476,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   484,   472,    72,   299,    90,   202,    91,   297,
     246,   415,    92,   146,   408,   421,   406,   330,   298,    73,
     104,    93,    94,    95,    96,    97,    98,   301,   300,     0,
       0,   273,     0,     0,     0,   326,     1,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   104,   204,    80,    81,    82,    83,
      84,    85,    86,     0,    87,    88,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     1,    89,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   205,   206,   207,     0,   208,   209,   210,
     211,   212,   213,   214,   215,    27,    90,    28,    91,    29,
      30,    31,    92,     0,     0,     0,   104,     0,     0,   132,
     216,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,     0,     0,
       0,     0,     0,   104,   204,    80,    81,    82,    83,    84,
      85,    86,     0,    87,    88,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    89,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   205,   206,   207,     0,   208,   209,   210,   211,
     212,   213,   214,   215,    27,    90,    28,    91,    29,    30,
      31,    92,     0,     0,     0,     0,     0,     0,   132,   329,
      93,    94,    95,    96,    97,    98,    79,    80,    81,    82,
      83,    84,    85,    86,   217,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    89,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    90,    28,    91,
      29,    30,    31,    92,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,   204,    80,
      81,    82,    83,    84,    85,    86,   217,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,   205,   206,   207,     0,
     208,   209,   210,   211,   212,   213,   214,   215,     0,    90,
       0,    91,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,   132,     0,    93,    94,    95,    96,    97,    98,
       0,    90,     0,    91,     0,     0,     0,    92,   217,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,    79,    80,    81,    82,    83,    84,    85,    86,
     217,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    28,    91,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    79,    80,    81,    82,    83,    84,
      85,    86,     0,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    85,    86,    89,    87,    88,     0,     0,   241,
       0,     0,     0,     9,    10,    11,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    89,    87,    88,     0,
       0,   306,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    90,   126,    91,    89,     0,
       0,    92,     0,   350,     0,     0,   242,     9,    10,    11,
      93,   243,    95,    96,    97,    98,     0,    90,   126,    91,
       0,     0,     0,    92,     0,     0,     0,     0,   307,     0,
       0,     0,    93,   308,    95,    96,    97,    98,     0,    90,
     126,    91,     0,     0,     0,    92,     0,     0,     0,     0,
     351,     0,     0,     0,    93,   352,    95,    96,    97,    98,
      79,    80,    81,    82,    83,    84,    85,    86,     0,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    87,    88,     0,     0,   378,     0,     0,     0,     9,
      10,    11,     0,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    89,    87,    88,     0,     0,   383,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,    90,   126,    91,    89,     0,     0,    92,     0,   433,
       0,     0,   379,     9,    10,    11,    93,    94,    95,    96,
      97,    98,     0,    90,   126,    91,     0,     0,     0,    92,
       0,     0,     0,     0,   384,     0,     0,     0,    93,   385,
      95,    96,    97,    98,     0,    90,   126,    91,     0,     0,
       0,    92,     0,     0,     0,     0,   434,     0,     0,     0,
      93,    94,    95,    96,    97,    98,    79,    80,    81,    82,
      83,    84,    85,    86,     0,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    89,    87,    88,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,   126,    91,
      89,     0,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,     0,    90,
       0,    91,     0,     0,     0,    92,     0,     0,     0,   331,
       0,   332,   229,   445,    93,    94,    95,    96,    97,    98,
       0,    90,     0,    91,     0,     0,     0,    92,     0,     0,
       0,   331,     0,   332,   229,   474,    93,    94,    95,    96,
      97,    98,    79,    80,    81,    82,    83,    84,    85,    86,
       0,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    89,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    85,    86,    89,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,    91,    89,     0,     0,    92,
       0,     0,     0,   331,     0,   332,   229,     0,    93,    94,
      95,    96,    97,    98,     0,    90,     0,    91,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,   229,     0,
      93,    94,    95,    96,    97,    98,     0,    90,     0,    91,
       0,     0,     0,    92,   279,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    79,    80,
      81,    82,    83,    84,    85,    86,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    91,    89,     0,     0,    92,     0,     0,     0,     0,
       0,     0,   366,     0,    93,    94,    95,    96,    97,    98,
       0,    90,     0,    91,     0,     0,     0,    92,   466,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,     0,    90,     0,    91,     0,     0,     0,    92,
     468,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    79,    80,    81,    82,    83,    84,
      85,    86,     0,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    85,    86,    89,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    89,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,    91,    89,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,    98,     0,    90,     0,    91,
       0,     0,     0,   150,     0,     0,     0,     0,     0,     0,
       0,    56,    93,    94,    95,    96,    97,    98,     0,    90,
       0,    91,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,    98,
       1,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,   338,   303,
       0,     0,   191,     0,     0,     0,     0,     1,    58,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     1,    31,     0,   235,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,   133,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,   190,   303,
       1,     0,   191,     0,     0,     0,     0,     0,    58,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    30,     1,     0,     0,
       0,     0,     0,     0,     0,     0,   247,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       1,     0,     0,   354,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     1,     0,     0,   132,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     1,    31,
       2,   381,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     1,    29,    30,    31,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     407,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     1,    29,     0,    31,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   417,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-375)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      53,    54,    58,    92,    33,    58,    53,    54,     0,    64,
     133,    68,    55,   138,   210,    68,   192,    62,    53,   120,
      55,    68,   148,   139,    90,    62,     3,   142,   402,    95,
      96,     3,    82,     3,     3,    85,    82,     3,     3,    92,
      80,    82,    34,    35,    84,    92,     3,    88,    40,    41,
      42,    53,    54,    45,     6,     3,    68,   103,    80,   133,
      80,   150,     3,   152,   120,   139,   119,    80,   121,    80,
       3,    84,   119,   129,   121,   191,   129,   166,   105,     3,
     454,    21,   156,    35,   141,   142,   139,   132,   141,   142,
      92,   165,   137,    87,   141,   142,     3,   150,   187,   152,
     137,   130,   155,   150,   147,   152,   135,   119,   155,   121,
      80,    88,   147,    83,    80,   144,    88,   191,    87,   315,
      90,   317,    87,    80,    90,   241,   215,    84,   254,   141,
     142,   246,    80,   103,   190,   236,   322,   103,   191,    80,
      16,    17,   169,   170,   171,    87,   138,    80,   150,    90,
     152,    84,    82,   155,    80,   229,    80,    90,    88,    83,
      82,   101,   205,    82,   340,    82,    90,   241,    91,    92,
     205,   245,    11,    12,    13,    42,    43,    44,   223,    89,
     236,   103,   102,    84,   103,    86,   103,   312,   241,   246,
     306,    80,   245,   246,   390,    84,    80,   313,   190,   246,
     274,   102,   276,    14,    15,    80,   249,   236,    75,    84,
     396,   397,   335,    82,   249,    90,    18,    19,    82,    88,
      99,    97,    98,    90,    88,   176,   177,   178,   179,   318,
     319,   320,   306,    20,   246,   100,   310,    81,    82,   313,
      81,    80,   438,   439,   440,    84,    81,    86,    81,    82,
     277,    81,    82,   306,    82,    83,    81,   310,    81,    82,
     313,   335,    81,    82,    81,    82,    82,   383,    81,    82,
     466,    81,   468,   347,    81,    82,   350,   322,    81,   402,
       3,   477,   338,     3,   480,   340,   482,     6,   331,    81,
      82,    80,   366,   102,   347,   369,   331,    83,    53,    83,
      55,   375,    81,    82,   378,    80,   172,   173,    80,   383,
     363,   174,   175,   387,    80,   358,   363,     3,   180,   181,
     312,   103,   375,   358,   447,   103,    82,   356,   402,    84,
     383,   454,    87,    88,   387,    81,   371,    85,    85,    83,
      81,    81,    81,    85,    82,    81,   338,    81,    85,    81,
     105,   343,   441,   442,   443,    83,   430,    66,   103,   433,
       3,     3,    87,    85,    85,     3,     4,     5,     6,     7,
       8,     9,    10,   447,    12,    13,   450,   430,    85,   453,
     454,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    85,   147,    85,    81,    33,    85,    85,   103,   452,
      80,    85,    85,    85,    83,   452,    83,    85,    64,    85,
      85,    85,    85,    85,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   103,   452,     0,   184,    74,   130,    76,   182,
     141,   356,    80,    74,   343,   366,   336,   223,   183,    45,
     205,    89,    90,    91,    92,    93,    94,   186,   185,    -1,
      -1,   102,    -1,    -1,    -1,   103,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,   249,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    73,    -1,    75,
      -1,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,   331,    -1,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   358,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,     3,     4,     5,     6,
       7,     8,     9,    10,   103,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,     3,     4,
       5,     6,     7,     8,     9,    10,   103,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    91,    92,    93,    94,
      -1,    74,    -1,    76,    -1,    -1,    -1,    80,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,     3,     4,     5,     6,     7,     8,     9,    10,
     103,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    33,    12,    13,    -1,    -1,    38,
      -1,    -1,    -1,    42,    43,    44,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    12,    13,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    76,    33,    -1,
      -1,    80,    -1,    38,    -1,    -1,    85,    42,    43,    44,
      89,    90,    91,    92,    93,    94,    -1,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    -1,    74,
      75,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    12,    13,    -1,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    33,    12,    13,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    33,    -1,    -1,    80,    -1,    38,
      -1,    -1,    85,    42,    43,    44,    89,    90,    91,    92,
      93,    94,    -1,    74,    75,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,    -1,    74,    75,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      89,    90,    91,    92,    93,    94,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      33,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    -1,    74,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      -1,    74,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    33,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    33,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    33,    -1,    -1,    80,
      -1,    -1,    -1,    84,    -1,    86,    87,    -1,    89,    90,
      91,    92,    93,    94,    -1,    74,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      89,    90,    91,    92,    93,    94,    -1,    74,    -1,    76,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    33,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    89,    90,    91,    92,    93,    94,
      -1,    74,    -1,    76,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    -1,    74,    -1,    76,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    33,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    33,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    92,    93,    94,    -1,    74,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    89,    90,    91,    92,    93,    94,    -1,    74,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    32,    90,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    77,    32,    79,    -1,    81,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,   102,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    79,    80,    81,
      32,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    88,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    78,    79,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    87,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    32,    79,
      34,    81,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    32,    77,    78,    79,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    32,    77,    -1,    79,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    34,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    73,    75,    77,
      78,    79,   132,   133,   136,   137,   138,   139,   145,   148,
     149,   150,   151,   168,   178,   180,   181,   182,     6,    35,
     179,     3,    87,    80,    80,    80,     3,    80,    90,   103,
     134,   135,   152,   153,   154,   133,   133,     3,    87,   133,
     133,   133,     0,   181,    87,     3,   107,   146,   147,     3,
       4,     5,     6,     7,     8,     9,    10,    12,    13,    33,
      74,    76,    80,    89,    90,    91,    92,    93,    94,   105,
     106,   108,   109,   112,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   131,   137,
     142,   149,   160,   160,   131,   152,    75,   149,   154,   155,
      82,   103,    87,   102,   132,   133,   171,   183,    80,    84,
     153,    87,   140,   141,   142,   168,   146,   102,    82,    88,
      80,   114,    80,   114,   114,    80,    80,   114,   127,   128,
     130,   160,    11,    12,    13,    80,    84,    86,   116,    90,
      95,    96,    91,    92,    14,    15,    16,    17,    97,    98,
      18,    19,    89,    99,   100,    20,    21,   101,    81,   142,
      80,    84,   154,   161,   162,   142,    81,    81,    82,    81,
     149,   154,   135,   152,     3,    61,    62,    63,    65,    66,
      67,    68,    69,    70,    71,    72,    88,   103,   130,   132,
     169,   170,   171,   172,   173,   174,   175,   176,   177,    87,
     128,   163,   132,   171,     3,    81,   133,   156,   157,   158,
     159,    38,    85,    90,   128,   155,   140,    88,   141,    83,
     103,   143,   144,   152,    82,    88,   131,    88,   147,   160,
     160,   160,   128,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   102,   129,    81,    82,    81,     3,    81,
     113,   128,   130,     3,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   119,   119,   120,   120,   121,   122,   123,
     124,   125,   130,    81,   156,   161,    38,    85,    90,   128,
     155,   162,    80,    84,     6,    83,   131,    83,    80,    80,
      80,   169,    80,     3,   103,   103,   103,   130,   103,    88,
     173,    84,    86,   163,   164,   165,   166,   167,    80,   152,
     154,   161,    81,    82,    81,    82,   128,   155,    85,    85,
      38,    85,    90,   128,    88,   131,    82,   103,    83,    88,
      81,    81,    81,    82,   128,   128,    87,   116,    81,    82,
      85,    83,    81,    81,   128,   155,    85,    85,    38,    85,
     128,    81,   156,    38,    85,    90,   128,   155,    81,   169,
      83,   169,   130,   130,   130,    66,   132,   174,   103,   103,
     131,     3,    82,    88,   163,   102,   167,    60,   158,     3,
      85,   128,   128,    85,    85,   144,   131,    62,   110,   111,
     160,   164,   128,   127,    85,   128,   128,    85,    81,   128,
     155,    85,    85,    38,    85,   128,   103,   169,    81,    81,
      81,    80,   174,   174,    85,    88,   163,   165,    85,    85,
      83,    81,    82,    83,    82,    88,    85,    85,    85,   128,
     128,    85,   169,   169,   169,   130,    81,   130,    81,   130,
     163,   128,   111,   128,    88,    85,    85,    64,    81,   169,
      81,   169,    81,   169,   103,   169,   169
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 43 "cp.y"
    {pop(&init, "expression var");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 59 "cp.y"
    { pop(&init, "enum declaration");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 86 "cp.y"
    { pop(&init, "struct part");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 87 "cp.y"
    { pop(&init, "struct part");}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 273 "cp.y"
    { pop(&init, "struct type");}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 274 "cp.y"
    { pop(&init, "struct type");}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 314 "cp.y"
    { pop(&init, "enum type");}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 315 "cp.y"
    { pop(&init, "enum type");}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 316 "cp.y"
    { pop(&init, "enum type");}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 356 "cp.y"
    { pop(&init, "declarator var");}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 402 "cp.y"
    { ;;}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 403 "cp.y"
    { }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 465 "cp.y"
    {  pop(&init, "designator");}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 482 "cp.y"
    {  pop(&init, "label");}
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 523 "cp.y"
    { pop(&init, "goto label");}
    break;


/* Line 1792 of yacc.c  */
#line 2410 "cp.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 559 "cp.y"


// main function
int main(int argc, char *argv[])
{
	// checks if file given
	if (argc == 1)
	{
		printf("no file given\n");
		return 1;
	}
	
	// opening file
	yyin = fopen(argv[1], "r");
	ln = linect(yyin);
	
	int i;
	
	// initialising hashtable
	for (i = 0; i<1009; i++)
	{
		infarr[i] = NULL; 
	}
	
	// initialising main structure 
	linearr = malloc(sizeof(line)*ln);
	for (i = 1; i <= ln; i++)
	{
		(*(linearr+i)).n = 0;
		(*(linearr+i)).start = NULL;
	}
	
	// parsing the given file
	while (!feof(yyin))
	{
		yyparse();
	}
	
	if (first != NULL)
		nextline();
	
	// all information of important guys is now in rec, storing it in hashtable and updating structure
	locnode *store = rec;
	while (store)
	{
		addinfo(store);
		store = store->next;
	}
	
	printf("$$$$$$$$$$$\n");
	disp(0,ln, 0);
	printf("$$$$$$$$$$$\n");
	
	printf("\n");
	dispstk(init);
	dispstk(rec);
	disphsh();
	
	printf("press j to jump to first def, b to go back, w to go up, s to go down, a to go left, b to go right and x to exit\n");
	disp(0,1,0);
	int displinecurr = 0, dispwordcurr = 0; 
	char c;
	node *jump;
	scanf(" %c",&c);
	while (c != 'x')
	{
		switch(c){
				case 'w': if (displinecurr)
					displinecurr--;
				break;
				case 's' : if (displinecurr < ln-1) 
					displinecurr++;
				break;
				case 'd' : if (dispwordcurr < (*(linearr+displinecurr)).n - 1)
					dispwordcurr++;
				break;
				case 'a' : if (dispwordcurr > 0)
					dispwordcurr--;
				break;
				case 'j' :
					jump = nav(displinecurr*100 + dispwordcurr);
					int jumploc = searchhsh(jump->tok);
					if (jumploc == -1)
						printf("No definition found\n\n");
					else if (jumploc == displinecurr)
						printf("First definition in current line\n\n");
					else {
						intpush(&moves, displinecurr*100 + dispwordcurr);
						displinecurr = jumploc;
						dispwordcurr = 0;
					}
				break;
				case 'b':
					if (moves == NULL){
						printf("Reached original position\n");
						break;
					}
					printf("back move: %d\n",moves->n);
					displinecurr = (moves->n)/100;
					dispwordcurr = (moves->n)%100;
					moves = moves->next;
				break;
			}
			disp(displinecurr,displinecurr+1, dispwordcurr);
		
		printf("press j to jump to first def, b to go back, w to go up, s to go down, a to go left, b to go right and x to exit\n");
		scanf(" %c",&c);
		
	}
	
	fclose(yyin);
}

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}