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
    START = 258,                   /* START  */
    END = 259,                     /* END  */
    ECHO = 260,                    /* ECHO  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    ELSEIF = 263,                  /* ELSEIF  */
    FOR = 264,                     /* FOR  */
    WHILE = 265,                   /* WHILE  */
    DO = 266,                      /* DO  */
    SWITCH = 267,                  /* SWITCH  */
    CASE = 268,                    /* CASE  */
    DEFAULT = 269,                 /* DEFAULT  */
    CONTINUE = 270,                /* CONTINUE  */
    BREAK = 271,                   /* BREAK  */
    RETURN = 272,                  /* RETURN  */
    FUNCTION = 273,                /* FUNCTION  */
    FNAME = 274,                   /* FNAME  */
    CINT = 275,                    /* CINT  */
    CFLOAT = 276,                  /* CFLOAT  */
    CSTRING = 277,                 /* CSTRING  */
    CCHAR = 278,                   /* CCHAR  */
    CBOOL = 279,                   /* CBOOL  */
    EXPO = 280,                    /* EXPO  */
    LE = 281,                      /* LE  */
    GE = 282,                      /* GE  */
    EEQ = 283,                     /* EEQ  */
    NEQ = 284,                     /* NEQ  */
    IDENTIFIER = 285,              /* IDENTIFIER  */
    ASSG = 286,                    /* ASSG  */
    COMMA = 287,                   /* COMMA  */
    SEMI = 288,                    /* SEMI  */
    COLON = 289,                   /* COLON  */
    MUL = 290,                     /* MUL  */
    DIV = 291,                     /* DIV  */
    MOD = 292,                     /* MOD  */
    ADD = 293,                     /* ADD  */
    SUB = 294,                     /* SUB  */
    DOT = 295,                     /* DOT  */
    LT = 296,                      /* LT  */
    GT = 297,                      /* GT  */
    LPARENTHESIS = 298,            /* LPARENTHESIS  */
    RPARENTHESIS = 299,            /* RPARENTHESIS  */
    LCURLY = 300,                  /* LCURLY  */
    RCURLY = 301,                  /* RCURLY  */
    LSQUARE = 302,                 /* LSQUARE  */
    RSQUARE = 303,                 /* RSQUARE  */
    UINCR = 304,                   /* UINCR  */
    UDECR = 305                    /* UDECR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define START 258
#define END 259
#define ECHO 260
#define IF 261
#define ELSE 262
#define ELSEIF 263
#define FOR 264
#define WHILE 265
#define DO 266
#define SWITCH 267
#define CASE 268
#define DEFAULT 269
#define CONTINUE 270
#define BREAK 271
#define RETURN 272
#define FUNCTION 273
#define FNAME 274
#define CINT 275
#define CFLOAT 276
#define CSTRING 277
#define CCHAR 278
#define CBOOL 279
#define EXPO 280
#define LE 281
#define GE 282
#define EEQ 283
#define NEQ 284
#define IDENTIFIER 285
#define ASSG 286
#define COMMA 287
#define SEMI 288
#define COLON 289
#define MUL 290
#define DIV 291
#define MOD 292
#define ADD 293
#define SUB 294
#define DOT 295
#define LT 296
#define GT 297
#define LPARENTHESIS 298
#define RPARENTHESIS 299
#define LCURLY 300
#define RCURLY 301
#define LSQUARE 302
#define RSQUARE 303
#define UINCR 304
#define UDECR 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "php.y"
 	struct var_name { 
			char name[100]; 
		} nd_obj;
		
		struct conditional { 
			char name[100];
			char ifPart[5];
			char elsePart[5];
		} conditional_obj;		
	

#line 179 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
