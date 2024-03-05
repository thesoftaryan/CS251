/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SLCOMMENT = 258,               /* SLCOMMENT  */
    MLCOMMENT = 259,               /* MLCOMMENT  */
    START = 260,                   /* START  */
    END = 261,                     /* END  */
    INCLUDE = 262,                 /* INCLUDE  */
    REQUIRE = 263,                 /* REQUIRE  */
    ECHO = 264,                    /* ECHO  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    ELSEIF = 267,                  /* ELSEIF  */
    FOR = 268,                     /* FOR  */
    WHILE = 269,                   /* WHILE  */
    DO = 270,                      /* DO  */
    SWITCH = 271,                  /* SWITCH  */
    CASE = 272,                    /* CASE  */
    CONTINUE = 273,                /* CONTINUE  */
    BREAK = 274,                   /* BREAK  */
    FUNCTION = 275,                /* FUNCTION  */
    FCALL = 276,                   /* FCALL  */
    CINT = 277,                    /* CINT  */
    CFLOAT = 278,                  /* CFLOAT  */
    CSTRING = 279,                 /* CSTRING  */
    CCHAR = 280,                   /* CCHAR  */
    CBOOL = 281,                   /* CBOOL  */
    EXPO = 282,                    /* EXPO  */
    LE = 283,                      /* LE  */
    GE = 284,                      /* GE  */
    EEQ = 285,                     /* EEQ  */
    NEQ = 286,                     /* NEQ  */
    IDENTIFIER = 287               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SLCOMMENT 258
#define MLCOMMENT 259
#define START 260
#define END 261
#define INCLUDE 262
#define REQUIRE 263
#define ECHO 264
#define IF 265
#define ELSE 266
#define ELSEIF 267
#define FOR 268
#define WHILE 269
#define DO 270
#define SWITCH 271
#define CASE 272
#define CONTINUE 273
#define BREAK 274
#define FUNCTION 275
#define FCALL 276
#define CINT 277
#define CFLOAT 278
#define CSTRING 279
#define CCHAR 280
#define CBOOL 281
#define EXPO 282
#define LE 283
#define GE 284
#define EEQ 285
#define NEQ 286
#define IDENTIFIER 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
