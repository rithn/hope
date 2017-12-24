/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_CP_TAB_H_INCLUDED
# define YY_YY_CP_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CP_TAB_H_INCLUDED  */
