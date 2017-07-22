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

void push(infonode **top, infonode *inf, char *tok);
void pop(infonode **top, char *type);
void insert(unsigned long i, char *type, int loc);

infonode *init = NULL, *rec = NULL;

enum {F = 1, ST, E, ST_ID};


/* Line 371 of yacc.c  */
#line 87 "cp.tab.c"

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
     TYPEDEF = 289,
     EXTERN = 290,
     STATIC = 291,
     AUTO = 292,
     REGISTER = 293,
     INLINE = 294,
     CONST = 295,
     RESTRICT = 296,
     VOLATILE = 297,
     BOOL = 298,
     CHAR = 299,
     SHORT = 300,
     INT = 301,
     LONG = 302,
     SIGNED = 303,
     UNSIGNED = 304,
     FLOAT = 305,
     DOUBLE = 306,
     VOID = 307,
     COMPLEX = 308,
     IMAGINARY = 309,
     STRUCT = 310,
     UNION = 311,
     ENUM = 312,
     ELLIPSIS = 313,
     CASE = 314,
     DEFAULT = 315,
     IF = 316,
     ELSE = 317,
     SWITCH = 318,
     WHILE = 319,
     DO = 320,
     FOR = 321,
     GOTO = 322,
     CONTINUE = 323,
     BREAK = 324,
     RETURN = 325,
     ALIGNAS = 326,
     ALIGNOF = 327,
     ATOMIC = 328,
     GENERIC = 329,
     NORETURN = 330,
     STATIC_ASSERT = 331,
     THREAD_LOCAL = 332
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
#line 230 "cp.tab.c"

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNRULES -- Number of states.  */
#define YYNSTATES  482

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,     2,     2,     2,    94,    87,     2,
      78,    79,    88,    89,    80,    90,    84,    93,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,   101,
      95,   100,    96,    99,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    98,    86,    91,     2,     2,     2,
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
      75,    76,    77
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
     903,   905,   908,   910,   912,   917,   921,   923
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     176,     0,    -1,     3,    -1,   104,    -1,   106,    -1,    78,
     128,    79,    -1,   107,    -1,     4,    -1,     5,    -1,    33,
      -1,     9,    -1,    10,    -1,     3,    -1,     6,    -1,     7,
      -1,    74,    78,   126,    80,   108,    79,    -1,   109,    -1,
     108,    80,   109,    -1,   158,    81,   126,    -1,    60,    81,
     126,    -1,   103,    -1,   110,    82,   128,    83,    -1,   110,
      78,    79,    -1,   110,    78,   111,    79,    -1,   110,    84,
       3,    -1,   110,    11,     3,    -1,   110,    12,    -1,   110,
      13,    -1,    78,   158,    79,    85,   162,    86,    -1,    78,
     158,    79,    85,   162,    80,    86,    -1,   126,    -1,   111,
      80,   126,    -1,   110,    -1,    12,   112,    -1,    13,   112,
      -1,   113,   114,    -1,     8,   112,    -1,     8,    78,   158,
      79,    -1,    72,    78,   158,    79,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,   112,
      -1,    78,   158,    79,   114,    -1,   114,    -1,   115,    88,
     114,    -1,   115,    93,   114,    -1,   115,    94,   114,    -1,
     115,    -1,   116,    89,   115,    -1,   116,    90,   115,    -1,
     116,    -1,   117,    14,   116,    -1,   117,    15,   116,    -1,
     117,    -1,   118,    95,   117,    -1,   118,    96,   117,    -1,
     118,    16,   117,    -1,   118,    17,   117,    -1,   118,    -1,
     119,    18,   118,    -1,   119,    19,   118,    -1,   119,    -1,
     120,    87,   119,    -1,   120,    -1,   121,    97,   120,    -1,
     121,    -1,   122,    98,   121,    -1,   122,    -1,   123,    20,
     122,    -1,   123,    -1,   124,    21,   123,    -1,   124,    -1,
     124,    99,   128,    81,   125,    -1,   125,    -1,   112,   127,
     126,    -1,   100,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,   126,    -1,   128,    80,   126,    -1,
     125,    -1,   131,   101,    -1,   131,   132,   101,    -1,   166,
      -1,   134,   131,    -1,   134,    -1,   135,   131,    -1,   135,
      -1,   147,   131,    -1,   147,    -1,   148,   131,    -1,   148,
      -1,   149,   131,    -1,   149,    -1,   133,    -1,   132,    80,
     133,    -1,   150,   100,   161,    -1,   150,    -1,    34,    -1,
      35,    -1,    36,    -1,    77,    -1,    37,    -1,    38,    -1,
      52,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      50,    -1,    51,    -1,    48,    -1,    49,    -1,    43,    -1,
      53,    -1,    54,    -1,   146,    -1,   136,    -1,   143,    -1,
      32,    -1,   137,    85,   138,    86,    -1,   137,     3,    85,
     138,    86,    -1,   137,     3,    -1,    55,    -1,    56,    -1,
     139,    -1,   138,   139,    -1,   140,   101,    -1,   140,   141,
     101,    -1,   166,    -1,   135,   140,    -1,   135,    -1,   147,
     140,    -1,   147,    -1,   142,    -1,   141,    80,   142,    -1,
      81,   129,    -1,   150,    81,   129,    -1,   150,    -1,    57,
      85,   144,    86,    -1,    57,    85,   144,    80,    86,    -1,
      57,     3,    85,   144,    86,    -1,    57,     3,    85,   144,
      80,    86,    -1,    57,     3,    -1,   145,    -1,   144,    80,
     145,    -1,   105,   100,   129,    -1,   105,    -1,    73,    78,
     158,    79,    -1,    40,    -1,    41,    -1,    42,    -1,    73,
      -1,    39,    -1,    75,    -1,    71,    78,   158,    79,    -1,
      71,    78,   129,    79,    -1,   152,   151,    -1,   151,    -1,
       3,    -1,    78,   150,    79,    -1,   151,    82,    83,    -1,
     151,    82,    88,    83,    -1,   151,    82,    36,   153,   126,
      83,    -1,   151,    82,    36,   126,    83,    -1,   151,    82,
     153,    88,    83,    -1,   151,    82,   153,    36,   126,    83,
      -1,   151,    82,   153,   126,    83,    -1,   151,    82,   153,
      83,    -1,   151,    82,   126,    83,    -1,   151,    78,   154,
      79,    -1,   151,    78,    79,    -1,   151,    78,   157,    79,
      -1,    88,   153,   152,    -1,    88,   153,    -1,    88,   152,
      -1,    88,    -1,   147,    -1,   153,   147,    -1,   155,    80,
      58,    -1,   155,    -1,   156,    -1,   155,    80,   156,    -1,
     131,   150,    -1,   131,   159,    -1,   131,    -1,     3,    -1,
     157,    80,     3,    -1,   140,   159,    -1,   140,    -1,   152,
     160,    -1,   152,    -1,   160,    -1,    78,   159,    79,    -1,
      82,    83,    -1,    82,    88,    83,    -1,    82,    36,   153,
     126,    83,    -1,    82,    36,   126,    83,    -1,    82,   153,
      36,   126,    83,    -1,    82,   153,   126,    83,    -1,    82,
     153,    83,    -1,    82,   126,    83,    -1,   160,    82,    83,
      -1,   160,    82,    88,    83,    -1,   160,    82,    36,   153,
     126,    83,    -1,   160,    82,    36,   126,    83,    -1,   160,
      82,   153,   126,    83,    -1,   160,    82,   153,    36,   126,
      83,    -1,   160,    82,   153,    83,    -1,   160,    82,   126,
      83,    -1,    78,    79,    -1,    78,   154,    79,    -1,   160,
      78,    79,    -1,   160,    78,   154,    79,    -1,    85,   162,
      86,    -1,    85,   162,    80,    86,    -1,   126,    -1,   163,
     161,    -1,   161,    -1,   162,    80,   163,   161,    -1,   162,
      80,   161,    -1,   164,   100,    -1,   165,    -1,   164,   165,
      -1,    82,   129,    83,    -1,    84,     3,    -1,    76,    78,
     129,    80,     6,    79,   101,    -1,   168,    -1,   169,    -1,
     172,    -1,   173,    -1,   174,    -1,   175,    -1,     3,    81,
     167,    -1,    59,   129,    81,   167,    -1,    60,    81,   167,
      -1,    85,    86,    -1,    85,   170,    86,    -1,   171,    -1,
     170,   171,    -1,   130,    -1,   167,    -1,   101,    -1,   128,
     101,    -1,    61,    78,   128,    79,   167,    62,   167,    -1,
      61,    78,   128,    79,   167,    -1,    63,    78,   128,    79,
     167,    -1,    64,    78,   128,    79,   167,    -1,    65,   167,
      64,    78,   128,    79,   101,    -1,    66,    78,   172,   172,
      79,   167,    -1,    66,    78,   172,   172,   128,    79,   167,
      -1,    66,    78,   130,   172,    79,   167,    -1,    66,    78,
     130,   172,   128,    79,   167,    -1,    67,     3,   101,    -1,
      68,   101,    -1,    69,   101,    -1,    70,   101,    -1,    70,
     128,   101,    -1,   177,    -1,   176,   177,    -1,   178,    -1,
     130,    -1,   131,   150,   179,   169,    -1,   131,   150,   169,
      -1,   130,    -1,   179,   130,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    43,    44,    45,    49,    50,    51,
      52,    53,    57,    61,    62,    66,    70,    71,    75,    76,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      93,    94,    98,    99,   100,   101,   102,   103,   104,   108,
     109,   110,   111,   112,   113,   117,   118,   122,   123,   124,
     125,   129,   130,   131,   135,   136,   137,   141,   142,   143,
     144,   145,   149,   150,   151,   155,   156,   160,   161,   165,
     166,   170,   171,   175,   176,   180,   181,   185,   186,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     204,   205,   209,   213,   214,   215,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   232,   233,   237,   238,
     242,   243,   244,   245,   246,   247,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   270,   271,   272,   276,   277,   281,   282,   286,
     287,   288,   292,   293,   294,   295,   299,   300,   304,   305,
     306,   310,   311,   312,   313,   314,   318,   319,   323,   324,
     328,   332,   333,   334,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   371,   372,   373,   374,   378,
     379,   384,   385,   389,   390,   394,   395,   396,   400,   401,
     405,   406,   410,   411,   412,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   440,   441,   442,   446,
     447,   448,   449,   453,   457,   458,   462,   463,   467,   471,
     472,   473,   474,   475,   476,   480,   481,   482,   486,   487,
     491,   492,   496,   497,   501,   502,   506,   507,   508,   512,
     513,   514,   515,   516,   517,   521,   522,   523,   524,   525,
     529,   530,   534,   535,   539,   540,   544,   545
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
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE", "CONST",
  "RESTRICT", "VOLATILE", "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT",
  "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH",
  "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS",
  "ALIGNOF", "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT",
  "THREAD_LOCAL", "'('", "')'", "','", "':'", "'['", "']'", "'.'", "'{'",
  "'}'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "'='", "';'", "$accept",
  "primary_expression", "constant", "enumeration_constant", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
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
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULL
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
     325,   326,   327,   328,   329,   330,   331,   332,    40,    41,
      44,    58,    91,    93,    46,   123,   125,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   105,   106,   106,   107,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     118,   118,   119,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   130,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   136,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   140,   140,   140,   140,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   162,   163,   164,   164,   165,   165,   166,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   173,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179
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
       1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   131,   110,   111,   112,   114,   115,   165,   161,   162,
     163,   125,   117,   118,   119,   120,   123,   124,   121,   122,
     116,   126,   127,   135,   136,     0,     0,   164,   166,     0,
     113,   273,     0,    97,    99,   129,     0,   130,   128,   101,
     103,   105,    95,     0,   270,   272,   155,     0,     0,     0,
       0,   171,     0,   188,    93,     0,   106,   109,   170,     0,
      96,    98,   134,     0,   100,   102,   104,     1,   271,     0,
      12,   159,     0,   156,     2,     7,     8,    13,    14,     0,
      10,    11,     0,     0,     9,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    20,     3,     4,     6,    32,    45,
       0,    47,    51,    54,    57,    62,    65,    67,    69,    71,
      73,    75,    92,     0,   143,   201,   145,     0,     0,     0,
       0,   164,   189,   187,   186,     0,    94,     0,     0,   276,
       0,   275,     0,     0,     0,   169,     0,     0,   137,     0,
     141,     0,     0,     0,   151,     0,    36,     0,    33,    34,
       0,     0,    45,    77,    90,     0,     0,     0,    26,    27,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   142,     0,     0,   203,   200,   204,
     144,   167,   160,     0,   172,   190,   185,   107,   109,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   248,   254,     0,   252,   253,   239,   240,     0,   250,
     241,   242,   243,   244,     0,   228,   108,   277,   274,   198,
     183,   197,     0,   192,   193,     0,     0,   173,    40,     0,
       0,     0,   132,   138,     0,   139,     0,   146,   150,     0,
     153,   158,   152,   157,     0,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    79,     0,
       5,     0,     0,    25,    22,     0,    30,     0,    24,    48,
      49,    50,    52,    53,    55,    56,    60,    61,    58,    59,
      63,    64,    66,    68,    70,    72,    74,     0,   222,     0,
       0,     0,   206,    40,     0,     0,   202,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   266,
     267,   268,     0,   255,   249,   251,     0,     0,   230,     0,
       0,     0,   234,     0,   195,   203,   196,   182,     0,   184,
       0,     0,     0,   174,   181,     0,   180,    40,     0,   133,
     148,     0,   140,     0,   154,    37,     0,    38,     0,    78,
      91,     0,    46,    23,     0,    21,     0,   223,   205,     0,
       0,   207,   213,     0,   212,     0,   224,     0,     0,   214,
      40,     0,     0,     0,   245,     0,   247,     0,     0,     0,
       0,     0,     0,   265,   269,     0,   237,     0,   226,   229,
     233,   235,   191,   194,   199,   176,     0,     0,   177,   179,
     147,   149,     0,     0,    16,     0,     0,    31,    76,   209,
       0,     0,   211,   225,     0,     0,   215,   221,     0,   220,
       0,   238,   246,     0,     0,     0,     0,     0,     0,   236,
     227,   232,     0,   175,   178,     0,    15,     0,     0,     0,
      28,   208,   210,   217,     0,     0,   218,   257,   258,   259,
       0,     0,     0,     0,     0,   231,    19,    17,    18,    29,
     216,   219,     0,     0,   263,     0,   261,     0,   256,   260,
     264,   262
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,    95,    71,    96,    97,   413,   414,    98,   275,
     152,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   153,   154,   269,   213,   113,    31,   130,
      55,    56,    33,    34,    35,    36,   137,   138,   115,   246,
     247,    37,    72,    73,    38,    39,    40,    41,   120,    58,
      59,   124,   299,   233,   234,   235,   415,   300,   189,   328,
     329,   330,   331,   332,    42,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    43,    44,    45,   132
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -278
static const yytype_int16 yypact[] =
{
    2223,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,    39,   -49,   -16,  -278,    15,
    -278,  -278,    57,  2313,  2313,  -278,    55,  -278,  -278,  2313,
    2313,  2313,  -278,  1808,  -278,  -278,   -59,    93,   885,  2422,
    1645,  -278,    75,   168,  -278,   -55,  -278,  1909,    95,    44,
    -278,  -278,    56,  2351,  -278,  -278,  -278,  -278,  -278,    93,
    -278,    50,    71,  -278,  -278,  -278,  -278,  -278,  -278,  1667,
    -278,  -278,  1689,  1689,  -278,    83,    86,   885,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   170,  -278,
    1645,  -278,    91,   127,   232,    64,   240,    79,    89,    78,
     169,    34,  -278,   117,  2422,   -54,  2422,   122,   124,   158,
     156,  -278,  -278,  -278,   168,    75,  -278,   472,  1399,  -278,
      57,  -278,  2125,  1863,   975,    95,  2351,  2025,  -278,    35,
    -278,   118,  1645,    28,  -278,   885,  -278,   885,  -278,  -278,
    2422,  1645,   197,  -278,  -278,   171,   161,   252,  -278,  -278,
    1421,  1645,   268,  -278,  1645,  1645,  1645,  1645,  1645,  1645,
    1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,  1645,
    1645,  1645,  1645,  -278,  -278,  1976,   997,   155,  -278,   167,
    -278,  -278,  -278,   256,  -278,  -278,  -278,  -278,   183,   206,
    1645,   212,   213,   222,   227,   382,   229,   311,   225,   228,
     773,  -278,  -278,   -47,  -278,  -278,  -278,  -278,   593,  -278,
    -278,  -278,  -278,  -278,  1377,  -278,  -278,  -278,  -278,  -278,
    -278,    66,   245,   251,  -278,   189,  1243,  -278,   250,   272,
    1019,  2072,  -278,  -278,  1645,  -278,   -44,  -278,   254,    32,
    -278,  -278,  -278,  -278,   263,   278,   281,   271,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  1645,
    -278,  1645,  1511,  -278,  -278,   195,  -278,   -13,  -278,  -278,
    -278,  -278,    91,    91,   127,   127,   232,   232,   232,   232,
      64,    64,   240,    79,    89,    78,   169,   198,  -278,   282,
     283,  1243,  -278,   280,   284,  1109,   167,  2177,  1131,   285,
     382,   287,   382,  1645,  1645,  1645,   301,   683,   269,  -278,
    -278,  -278,    67,  -278,  -278,  -278,  1645,   363,  -278,   125,
    1399,   -52,  -278,  1750,  -278,    87,  -278,  -278,  2269,  -278,
     366,   288,  1243,  -278,  -278,  1645,  -278,   289,   291,  -278,
    -278,    68,  -278,  1645,  -278,   290,   290,  -278,  2388,  -278,
    -278,  1377,  -278,  -278,  1645,  -278,  1645,  -278,  -278,   295,
    1243,  -278,  -278,  1645,  -278,   298,  -278,   303,  1243,  -278,
     300,   310,  1153,   296,  -278,   382,  -278,   210,   219,   223,
     306,   795,   795,  -278,  -278,   313,  -278,  1265,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,   315,   318,  -278,  -278,
    -278,  -278,   321,   239,  -278,   322,   132,  -278,  -278,  -278,
     323,   324,  -278,  -278,   325,  1243,  -278,  -278,  1645,  -278,
     326,  -278,  -278,   382,   382,   382,  1645,  1533,  1555,  -278,
    -278,  -278,  1399,  -278,  -278,  1645,  -278,  2388,  1645,  1287,
    -278,  -278,  -278,  -278,   327,   328,  -278,   342,  -278,  -278,
     241,   382,   259,   382,   265,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,   382,   312,  -278,   382,  -278,   382,  -278,  -278,
    -278,  -278
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,  -278,  -278,  -278,  -278,  -278,   -35,  -278,  -278,
     258,  -278,   -81,   144,   177,    92,   174,   237,   238,   242,
     260,   236,  -278,   -30,   -69,  -278,   -84,   -38,   -40,    10,
    -278,   293,  -278,   -42,  -278,  -278,   308,  -110,    -7,  -278,
      69,  -278,   350,  -121,  -278,   -48,  -278,  -278,   -24,   -50,
     -51,  -111,  -120,  -278,   115,  -278,    -8,   -99,  -183,  -117,
      94,  -277,  -278,   126,   -26,  -191,  -278,    -5,  -278,   243,
    -217,  -278,  -278,  -278,  -278,   416,  -278,  -278
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     116,   116,   123,   155,   306,   122,   114,   114,    57,   135,
      32,   226,   119,   232,   316,   116,   188,   129,   112,   163,
     112,   114,   253,   240,   185,   125,    69,   243,   186,    48,
     326,    70,   327,   271,    53,    70,   351,   140,    51,   116,
     117,   118,    46,    60,    61,   114,   126,    51,   400,    64,
      65,    66,   131,    32,   323,   181,   139,   352,    62,   225,
      51,   155,    49,   155,   187,   239,   116,   271,   116,    51,
     365,    51,   114,   196,   114,   305,   195,   277,    51,   156,
     171,   172,   257,   279,   280,   281,   122,   214,   116,   116,
      51,   276,   227,    50,   114,   114,    70,   116,   297,   116,
     392,   198,   116,   114,   251,   114,   198,   184,   114,   190,
     140,   140,   112,    52,   252,   248,   244,   304,   354,   384,
     442,   386,    52,    53,    47,   342,   322,   228,   253,   139,
     139,   243,   336,   182,   187,    52,   245,   254,   122,   255,
      63,   136,   256,   231,   333,    53,    52,   271,   186,   244,
     142,   143,   306,    52,    53,   225,    53,   144,    54,   173,
     174,   150,   311,    53,   151,   333,   177,   341,   394,   186,
     112,   348,   442,   133,   437,   438,   179,   134,   214,   164,
     335,   157,   158,   159,   165,   166,   178,   377,   122,   180,
     370,   362,   195,   116,   432,   231,   183,   382,   249,   114,
     359,   191,   360,   192,   250,   397,   350,   334,     8,     9,
      10,   398,   449,   399,   112,   140,   167,   168,   450,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   387,
     388,   389,   369,   185,   139,   194,   375,   186,   193,   381,
     272,   121,   457,   458,   459,   307,   169,   170,   160,   308,
     270,   271,   161,   122,   162,   273,    53,   195,   175,   176,
     122,   225,   309,   286,   287,   288,   289,   425,   339,   340,
     474,   278,   476,   406,   363,   364,   407,   391,   271,   366,
     441,   478,   335,   128,   480,   135,   481,   310,   395,   433,
     271,   313,   225,   312,   195,   417,   112,   268,   434,   271,
     314,   420,   435,   271,   421,   315,    99,   317,    99,   424,
     116,   282,   283,   430,   318,   411,   114,   231,   446,   447,
     473,   271,   195,   112,   337,   465,   319,   248,   225,   320,
     122,   338,   441,   343,   195,   353,   418,   146,   475,   271,
     148,   149,   355,   231,   477,   271,   284,   285,   231,   290,
     291,   358,   460,   462,   464,   344,   454,   356,    99,   455,
     357,   367,   368,   371,   383,   390,   396,   372,   385,   404,
     393,   405,   408,   225,   409,   361,   466,   195,   419,   468,
     225,   422,   423,   426,   436,   199,    75,    76,    77,    78,
      79,    80,    81,   427,    82,    83,   439,   431,   443,   116,
      99,   444,   445,   448,   472,   114,   451,   452,   453,   456,
     470,   471,   467,   479,   292,    84,   293,   296,   197,   141,
     410,   294,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     295,   200,   201,   202,   241,   203,   204,   205,   206,   207,
     208,   209,   210,   403,    85,   416,    86,   401,    99,    68,
      87,   325,     0,     0,     0,     0,     0,   127,     0,    88,
      89,    90,    91,    92,    93,   199,    75,    76,    77,    78,
      79,    80,    81,   212,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     1,    84,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      99,   200,   201,   202,     0,   203,   204,   205,   206,   207,
     208,   209,   210,    26,    85,    27,    86,    28,    29,    30,
      87,     0,     0,     0,     0,     0,     0,   127,   211,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,     0,     0,     0,
       0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     1,    84,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,   200,   201,   202,     0,   203,   204,   205,   206,
     207,   208,   209,   210,    26,    85,    27,    86,    28,    29,
      30,    87,     0,     0,     0,     0,     0,     0,   127,   324,
      88,    89,    90,    91,    92,    93,    74,    75,    76,    77,
      78,    79,    80,    81,   212,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    84,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    85,    27,    86,    28,    29,
      30,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    74,    75,    76,    77,
      78,    79,    80,    81,   212,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,     0,    85,     0,    86,
       0,     0,     0,    87,   321,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    74,    75,
      76,    77,    78,    79,    80,    81,   212,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    84,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    27,    86,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    84,    82,
      83,   236,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      84,    82,    83,   301,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    85,   121,    86,
       0,     0,    84,    87,     0,   345,     0,     0,   237,     8,
       9,    10,    88,   238,    90,    91,    92,    93,     0,    85,
     121,    86,     0,     0,     0,    87,     0,     0,     0,     0,
     302,     0,     0,     0,    88,   303,    90,    91,    92,    93,
       0,    85,   121,    86,     0,     0,     0,    87,     0,     0,
       0,     0,   346,     0,     0,     0,    88,   347,    90,    91,
      92,    93,    74,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    84,    82,    83,   373,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    84,    82,    83,   378,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    85,   121,    86,     0,     0,    84,    87,     0,   428,
       0,     0,   374,     8,     9,    10,    88,    89,    90,    91,
      92,    93,     0,    85,   121,    86,     0,     0,     0,    87,
       0,     0,     0,     0,   379,     0,     0,     0,    88,   380,
      90,    91,    92,    93,     0,    85,   121,    86,     0,     0,
       0,    87,     0,     0,     0,     0,   429,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    74,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    82,    83,     0,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    84,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,   121,    86,     0,     0,
      84,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,     0,    85,     0,    86,
       0,     0,     0,    87,     0,     0,     0,   326,     0,   327,
     224,   440,    88,    89,    90,    91,    92,    93,     0,    85,
       0,    86,     0,     0,     0,    87,     0,     0,     0,   326,
       0,   327,   224,   469,    88,    89,    90,    91,    92,    93,
      74,    75,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      84,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      80,    81,    84,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    86,     0,     0,    84,    87,     0,     0,     0,   326,
       0,   327,   224,     0,    88,    89,    90,    91,    92,    93,
       0,    85,     0,    86,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,   224,     0,    88,    89,    90,    91,
      92,    93,     0,    85,     0,    86,     0,     0,     0,    87,
     274,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    74,    75,    76,    77,    78,    79,
      80,    81,     0,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    84,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,    86,     0,     0,    84,    87,
       0,     0,     0,     0,     0,     0,   361,     0,    88,    89,
      90,    91,    92,    93,     0,    85,     0,    86,     0,     0,
       0,    87,   461,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,     0,    85,     0,    86,
       0,     0,     0,    87,   463,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    80,    81,    84,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      84,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
       0,     0,    84,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,     0,    85,
       0,    86,     0,     0,     0,   145,     0,     0,     0,     0,
       0,     0,     0,    51,    88,    89,    90,    91,    92,    93,
       0,    85,     0,    86,     0,     0,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,   333,   298,
       0,     0,   186,     0,     0,     0,     0,     0,    53,     0,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     1,   230,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   128,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,   185,   298,     0,     1,   186,     0,
       0,     0,     0,     0,    53,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    29,     0,     0,     1,     0,     0,     0,     0,     0,
       0,   242,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   349,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     0,     0,     0,     0,     0,     0,     1,
     127,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     1,   376,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     1,    30,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    26,     0,    27,     0,    28,     0,
      30,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,    27,     0,     0,    29,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,   412,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,    27,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-278)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      48,    49,    53,    87,   187,    53,    48,    49,    32,    59,
       0,   128,    50,   133,   205,    63,   115,    57,    48,   100,
      50,    63,   143,   134,    78,    80,    85,   137,    82,    78,
      82,     3,    84,    80,    88,     3,    80,    63,     3,    87,
      48,    49,     3,    33,    34,    87,   101,     3,   100,    39,
      40,    41,    57,    43,   101,    21,    63,   101,     3,   128,
       3,   145,    78,   147,   115,   134,   114,    80,   116,     3,
      83,     3,   114,   124,   116,   186,   124,   161,     3,    87,
      16,    17,   151,   164,   165,   166,   134,   127,   136,   137,
       3,   160,   132,    78,   136,   137,     3,   145,   182,   147,
     317,   125,   150,   145,   142,   147,   130,   114,   150,   116,
     136,   137,   142,    78,    86,   139,    81,   186,    86,   310,
     397,   312,    78,    88,    85,   236,   210,   132,   249,   136,
     137,   241,   231,    99,   185,    78,   101,   145,   186,   147,
      85,    85,   150,   133,    78,    88,    78,    80,    82,    81,
     100,    80,   335,    78,    88,   224,    88,    86,   101,    95,
      96,    78,   200,    88,    78,    78,    87,   236,   101,    82,
     200,   240,   449,    78,   391,   392,    98,    82,   218,    88,
     231,    11,    12,    13,    93,    94,    97,   307,   236,    20,
     301,   272,   240,   241,   385,   185,    79,   308,    80,   241,
     269,    79,   271,    79,    86,    80,   244,   231,    40,    41,
      42,    86,    80,   330,   244,   241,    89,    90,    86,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   313,
     314,   315,   301,    78,   241,    79,   305,    82,    80,   308,
      79,    73,   433,   434,   435,    78,    14,    15,    78,    82,
      79,    80,    82,   301,    84,     3,    88,   305,    18,    19,
     308,   330,     6,   171,   172,   173,   174,   378,    79,    80,
     461,     3,   463,   342,    79,    80,   345,   317,    80,    81,
     397,   472,   333,   100,   475,   335,   477,    81,   326,    79,
      80,    78,   361,    81,   342,   364,   326,   100,    79,    80,
      78,   370,    79,    80,   373,    78,    48,    78,    50,   378,
     358,   167,   168,   382,     3,   353,   358,   307,    79,    80,
      79,    80,   370,   353,    79,   442,   101,   351,   397,   101,
     378,    80,   449,    83,   382,    81,   366,    79,    79,    80,
      82,    83,    79,   333,    79,    80,   169,   170,   338,   175,
     176,    80,   436,   437,   438,    83,   425,    79,   100,   428,
      79,    79,    79,    83,    79,    64,     3,    83,    81,     3,
     101,    83,    83,   442,    83,    85,   445,   425,    83,   448,
     449,    83,    79,    83,    78,     3,     4,     5,     6,     7,
       8,     9,    10,    83,    12,    13,    83,   101,    83,   447,
     142,    83,    81,    81,    62,   447,    83,    83,    83,    83,
      83,    83,   447,   101,   177,    33,   178,   181,   125,    69,
     351,   179,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     180,    59,    60,    61,   136,    63,    64,    65,    66,    67,
      68,    69,    70,   338,    72,   361,    74,   331,   200,    43,
      78,   218,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,     3,     4,     5,     6,     7,
       8,     9,    10,   101,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     272,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,     3,     4,     5,     6,
       7,     8,     9,    10,   101,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     3,     4,     5,     6,
       7,     8,     9,    10,   101,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,     3,     4,
       5,     6,     7,     8,     9,    10,   101,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    12,
      13,    36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    12,    13,    36,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    33,    78,    -1,    36,    -1,    -1,    83,    40,
      41,    42,    87,    88,    89,    90,    91,    92,    -1,    72,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    72,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    33,    12,    13,    36,    -1,    -1,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    33,    12,    13,    36,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    33,    78,    -1,    36,
      -1,    -1,    83,    40,    41,    42,    87,    88,    89,    90,
      91,    92,    -1,    72,    73,    74,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    -1,    72,    73,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    12,    13,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      33,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    82,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    33,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    33,    78,    -1,    -1,    -1,    82,
      -1,    84,    85,    -1,    87,    88,    89,    90,    91,    92,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    33,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    33,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    33,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      33,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    33,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    87,    88,    89,    90,    91,    92,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,    78,    79,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    32,    79,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,   100,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    78,    79,    -1,    32,    82,    -1,
      -1,    -1,    -1,    -1,    88,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    76,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    86,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      85,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    75,    -1,    77,    32,    79,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    -1,    75,    32,    77,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    71,    -1,    73,    -1,    75,    -1,
      77,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    73,    -1,    -1,    76,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    71,    73,    75,    76,
      77,   130,   131,   134,   135,   136,   137,   143,   146,   147,
     148,   149,   166,   176,   177,   178,     3,    85,    78,    78,
      78,     3,    78,    88,   101,   132,   133,   150,   151,   152,
     131,   131,     3,    85,   131,   131,   131,     0,   177,    85,
       3,   105,   144,   145,     3,     4,     5,     6,     7,     8,
       9,    10,    12,    13,    33,    72,    74,    78,    87,    88,
      89,    90,    91,    92,   103,   104,   106,   107,   110,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   129,   135,   140,   147,   158,   158,   129,
     150,    73,   147,   152,   153,    80,   101,    85,   100,   130,
     131,   169,   179,    78,    82,   151,    85,   138,   139,   140,
     166,   144,   100,    80,    86,    78,   112,    78,   112,   112,
      78,    78,   112,   125,   126,   128,   158,    11,    12,    13,
      78,    82,    84,   114,    88,    93,    94,    89,    90,    14,
      15,    16,    17,    95,    96,    18,    19,    87,    97,    98,
      20,    21,    99,    79,   140,    78,    82,   152,   159,   160,
     140,    79,    79,    80,    79,   147,   152,   133,   150,     3,
      59,    60,    61,    63,    64,    65,    66,    67,    68,    69,
      70,    86,   101,   128,   130,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    85,   126,   161,   130,   169,     3,
      79,   131,   154,   155,   156,   157,    36,    83,    88,   126,
     153,   138,    86,   139,    81,   101,   141,   142,   150,    80,
      86,   129,    86,   145,   158,   158,   158,   126,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   100,   127,
      79,    80,    79,     3,    79,   111,   126,   128,     3,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   117,   117,
     118,   118,   119,   120,   121,   122,   123,   128,    79,   154,
     159,    36,    83,    88,   126,   153,   160,    78,    82,     6,
      81,   129,    81,    78,    78,    78,   167,    78,     3,   101,
     101,   101,   128,   101,    86,   171,    82,    84,   161,   162,
     163,   164,   165,    78,   150,   152,   159,    79,    80,    79,
      80,   126,   153,    83,    83,    36,    83,    88,   126,    86,
     129,    80,   101,    81,    86,    79,    79,    79,    80,   126,
     126,    85,   114,    79,    80,    83,    81,    79,    79,   126,
     153,    83,    83,    36,    83,   126,    79,   154,    36,    83,
      88,   126,   153,    79,   167,    81,   167,   128,   128,   128,
      64,   130,   172,   101,   101,   129,     3,    80,    86,   161,
     100,   165,    58,   156,     3,    83,   126,   126,    83,    83,
     142,   129,    60,   108,   109,   158,   162,   126,   125,    83,
     126,   126,    83,    79,   126,   153,    83,    83,    36,    83,
     126,   101,   167,    79,    79,    79,    78,   172,   172,    83,
      86,   161,   163,    83,    83,    81,    79,    80,    81,    80,
      86,    83,    83,    83,   126,   126,    83,   167,   167,   167,
     128,    79,   128,    79,   128,   161,   126,   109,   126,    86,
      83,    83,    62,    79,   167,    79,   167,    79,   167,   101,
     167,   167
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
#line 41 "cp.y"
    {pop(&init, "expression var");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 57 "cp.y"
    { pop(&init, "enum declaration");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 84 "cp.y"
    { pop(&init, "struct part");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 85 "cp.y"
    { pop(&init, "struct part");}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 271 "cp.y"
    { pop(&init, "struct type");}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 272 "cp.y"
    { pop(&init, "struct type");}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 312 "cp.y"
    { pop(&init, "enum type");}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 313 "cp.y"
    { pop(&init, "enum type");}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 314 "cp.y"
    { pop(&init, "enum type");}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 354 "cp.y"
    { pop(&init, "declarator var");}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 400 "cp.y"
    { ;;}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 401 "cp.y"
    { }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 463 "cp.y"
    {  pop(&init, "designator");}
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 480 "cp.y"
    {  pop(&init, "label");}
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 521 "cp.y"
    { pop(&init, "goto label");}
    break;


/* Line 1792 of yacc.c  */
#line 2408 "cp.tab.c"
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
#line 548 "cp.y"


FILE *yyin;

node *first = NULL;
node *last = NULL;
node *prev = NULL;

int ln, currloc = 0, currline = 0;

line *linearr;
infonode *infarr[1009]; 

void dispstk(infonode *top);
unsigned long hash(unsigned char *str);
void disphsh(void);

node *nav(int loc)
{
	int line = loc/100, offset = (loc - line*100);
	node *going = (*(linearr+line)).start;
	for (int i = 0; i<offset; i++)
	{
		going = going->next;
	}
	return going;
}

void push(infonode **top, infonode *inf, char *tok)
{
	if (top != NULL)
    {
        infonode *newnode =(infonode *)malloc(sizeof(infonode));
		if (inf == NULL)
		{
			newnode->loc = currloc;
		}
		else
		{
			newnode->loc = inf->loc;
		}
		newnode->tok = malloc(strlen(tok)+1);
		strcpy(newnode->tok,tok);
		newnode->next = *top;
		*top = newnode;
    }

}

void addinfo(infonode *inf)
{
	node *nd = nav(inf->loc);
	free(nd->type);
	nd->type = malloc(strlen(inf->tok)+1);
	strcpy(nd->type,inf->tok);
	if (strcmp(nd->type, "declarator var") == 0)
	{
		unsigned long h = hash(nd->tok);
		insert(h, nd->tok, (inf->loc)/100);
	}
}

void record(infonode *inf, char *type)
{

	free(inf->tok);
	inf->tok = malloc(strlen(type)+1);
	strcpy(inf->tok,type);
	push(&rec, inf, type);
}

void insert(unsigned long i, char *tok, int loc)
{
	infonode *inf = infarr[i];
	infonode *newinf = (infonode *) malloc(sizeof(infonode));
	newinf->next = inf;
	newinf->tok = malloc(strlen(tok)+1);
	strcpy(newinf->tok, tok);
	newinf->loc = loc;
	infarr[i] = newinf;
}

void disphsh(void)
{
	printf("\ndisphsh: \n");
	infonode *inf;
	for (int i = 0; i<1009; i++)
	{
		inf = infarr[i];
		while (inf)
		{
			printf("hashline: %d, token: %s, line: %d\n", i, inf->tok, inf->loc);
			inf = inf->next;
		}
	}
}

int searchhsh(char *tok)
{
	unsigned long h = hash(tok);
	infonode *sch = infarr[h];
	while (sch)
	{
		if (strcmp(sch->tok,tok) == 0)
			return sch->loc;
		sch = sch->next;
	}
	return -1;
}

void pop(infonode **top, char *type)
{
	infonode *top1;
 
    if (top == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
	{
        top1 = *top;
		if (type)
			record(*top, type);
		*top = top1->next;
		free(top1);
	}
}

void dispstk(infonode *top)
{
	printf("\ndispstk:\n");
	infonode *top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("tok: %s, loc: %d\n", top1->tok, top1->loc);
        top1 = top1->next;
    }
}

unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; 

    return hash%1009;
}

void nextline(void)
{
	(*(linearr+currline)).start = first;
	(*(linearr+currline)).n = currline;
	first = NULL;
	last = NULL;
	prev = NULL;
	currline += 1;
	currloc = ((currloc/100)+1)*100;
}

void Node(char *tok, char type[])
{
	currloc++;
	node *currnode = (node *) malloc(sizeof(node));
	currnode->next = NULL;
	currnode->tok = malloc(strlen(tok)+1);
	currnode->type = malloc(strlen(type)+1);
	strcpy(currnode->tok, tok);
	strcpy(currnode->type, type);
	if (prev)
		currnode->prev = prev;
	else
		currnode->prev = NULL;
	prev = currnode;
	if (first == NULL && last == NULL)
	{
		first = last = currnode;
	}
	else
	{
		last->next = currnode;
		last = currnode;
	}
}

int main(int argc, char *argv[])
{
	
	if (argc == 1)
	{
		printf("no file given\n");
		return 1;
	}
	yyin = fopen(argv[1], "r");
	ln = linect(yyin);
	
	int i;
	
	linearr = malloc(sizeof(line)*ln);
	for (i = 0; i<1009; i++)
	{
		infarr[i] = NULL; 
	}
	
	for (i = 1; i <= ln; i++)
	{
		(*(linearr+i)).n = i;
		(*(linearr+i)).start = NULL;
	}
	
	for (i = 0; i < 109; i++)
	{
		infarr[i] = NULL;
	}
	
	while (!feof(yyin))
	{
		yyparse();
	}
	
	if (first != NULL)
		nextline();
		
	infonode *store = rec;
	while (store)
	{
		addinfo(store);
		store = store->next;
	}
	
	printf("$$$$$$$$$$$\n");
	disp(ln);
	printf("$$$$$$$$$$$\n");
	
	printf("\n");
	dispstk(init);
	dispstk(rec);
	disphsh();
	
	// printf("%d\n",searchhsh("main"));
	// printf("%d\n",searchhsh("j"));
	
	fclose(yyin);
}

void disp(int ln)
{
	int i;
	for (i = 0; i<ln; i++)
	{
		printf("%3d. %d tokens: \n",i,(*(linearr+i)).n);
		node *read = (*(linearr+i)).start;
		for (; read; read = read->next)
		{
			printf("%s - %s\n",read->tok, read->type);
		}
		printf("\n\n");
	}
}

int linect(FILE *fopen)
{
	if (fopen == NULL)
	{
		printf("Couldn't open file\n");
		return 0;
	}
	int count = 1;
	char c;
	for (c = getc(fopen); c != EOF; c = getc(fopen))
		if (c == '\n')
			count += 1;
	fseek(fopen, 0, SEEK_SET);
	return count;
}

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}