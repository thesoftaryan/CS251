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
    EQ = 258,                      /* EQ  */
    NE = 259,                      /* NE  */
    START = 260,                   /* START  */
    END = 261,                     /* END  */
    ECHO = 262,                    /* ECHO  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    ELSEIF = 265,                  /* ELSEIF  */
    FOR = 266,                     /* FOR  */
    WHILE = 267,                   /* WHILE  */
    DO = 268,                      /* DO  */
    SWITCH = 269,                  /* SWITCH  */
    CASE = 270,                    /* CASE  */
    DEFAULT = 271,                 /* DEFAULT  */
    CONTINUE = 272,                /* CONTINUE  */
    BREAK = 273,                   /* BREAK  */
    RETURN = 274,                  /* RETURN  */
    FUNCTION = 275,                /* FUNCTION  */
    FNAME = 276,                   /* FNAME  */
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
    IDENTIFIER = 287,              /* IDENTIFIER  */
    ASSG = 288,                    /* ASSG  */
    COMMA = 289,                   /* COMMA  */
    SEMI = 290,                    /* SEMI  */
    COLON = 291,                   /* COLON  */
    MUL = 292,                     /* MUL  */
    DIV = 293,                     /* DIV  */
    MOD = 294,                     /* MOD  */
    ADD = 295,                     /* ADD  */
    SUB = 296,                     /* SUB  */
    DOT = 297,                     /* DOT  */
    LT = 298,                      /* LT  */
    GT = 299,                      /* GT  */
    LPARENTHESIS = 300,            /* LPARENTHESIS  */
    RPARENTHESIS = 301,            /* RPARENTHESIS  */
    LCURLY = 302,                  /* LCURLY  */
    RCURLY = 303,                  /* RCURLY  */
    LSQUARE = 304,                 /* LSQUARE  */
    RSQUARE = 305,                 /* RSQUARE  */
    UINCR = 306,                   /* UINCR  */
    UDECR = 307                    /* UDECR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define EQ 258
#define NE 259
#define START 260
#define END 261
#define ECHO 262
#define IF 263
#define ELSE 264
#define ELSEIF 265
#define FOR 266
#define WHILE 267
#define DO 268
#define SWITCH 269
#define CASE 270
#define DEFAULT 271
#define CONTINUE 272
#define BREAK 273
#define RETURN 274
#define FUNCTION 275
#define FNAME 276
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
#define ASSG 288
#define COMMA 289
#define SEMI 290
#define COLON 291
#define MUL 292
#define DIV 293
#define MOD 294
#define ADD 295
#define SUB 296
#define DOT 297
#define LT 298
#define GT 299
#define LPARENTHESIS 300
#define RPARENTHESIS 301
#define LCURLY 302
#define RCURLY 303
#define LSQUARE 304
#define RSQUARE 305
#define UINCR 306
#define UDECR 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
