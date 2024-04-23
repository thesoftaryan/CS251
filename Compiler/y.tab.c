/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "php.y"

	#include<stdio.h>
    	#include<string.h>
    	#include<stdlib.h>
    	#include<ctype.h>
    	
    	// For now only taking limit of variables to be 50
	struct vars {
		char name[100];
		char value[256];
		int scope;
	} symbolTable[50];
	
	
	int yylex(void);
    	void yyerror(char* s);
    	int searchSTable(char* varName, char* val);
    	void insertSTable(char* varName, char* val);
	int flag=0;
	
	int icIndex=0;
	int tempVar=0;
	int label=0;
	int isIf=0;
	int varCount=0;
	int currentScope=0;
	char intermediateCodes[50][100];


	
	

#line 104 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
	

#line 269 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_START = 3,                      /* START  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ECHO = 5,                       /* ECHO  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_ELSEIF = 8,                     /* ELSEIF  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_SWITCH = 12,                    /* SWITCH  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_CONTINUE = 15,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 16,                     /* BREAK  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_FUNCTION = 18,                  /* FUNCTION  */
  YYSYMBOL_FNAME = 19,                     /* FNAME  */
  YYSYMBOL_CINT = 20,                      /* CINT  */
  YYSYMBOL_CFLOAT = 21,                    /* CFLOAT  */
  YYSYMBOL_CSTRING = 22,                   /* CSTRING  */
  YYSYMBOL_CCHAR = 23,                     /* CCHAR  */
  YYSYMBOL_CBOOL = 24,                     /* CBOOL  */
  YYSYMBOL_EXPO = 25,                      /* EXPO  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_EEQ = 28,                       /* EEQ  */
  YYSYMBOL_NEQ = 29,                       /* NEQ  */
  YYSYMBOL_IDENTIFIER = 30,                /* IDENTIFIER  */
  YYSYMBOL_ASSG = 31,                      /* ASSG  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_SEMI = 33,                      /* SEMI  */
  YYSYMBOL_COLON = 34,                     /* COLON  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_ADD = 38,                       /* ADD  */
  YYSYMBOL_SUB = 39,                       /* SUB  */
  YYSYMBOL_DOT = 40,                       /* DOT  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_GT = 42,                        /* GT  */
  YYSYMBOL_LPARENTHESIS = 43,              /* LPARENTHESIS  */
  YYSYMBOL_RPARENTHESIS = 44,              /* RPARENTHESIS  */
  YYSYMBOL_LCURLY = 45,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 46,                    /* RCURLY  */
  YYSYMBOL_LSQUARE = 47,                   /* LSQUARE  */
  YYSYMBOL_RSQUARE = 48,                   /* RSQUARE  */
  YYSYMBOL_UINCR = 49,                     /* UINCR  */
  YYSYMBOL_UDECR = 50,                     /* UDECR  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_s = 52,                         /* s  */
  YYSYMBOL_statements = 53,                /* statements  */
  YYSYMBOL_statement = 54,                 /* statement  */
  YYSYMBOL_echostm = 55,                   /* echostm  */
  YYSYMBOL_declarestm = 56,                /* declarestm  */
  YYSYMBOL_value = 57,                     /* value  */
  YYSYMBOL_const = 58,                     /* const  */
  YYSYMBOL_loopstm = 59,                   /* loopstm  */
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_61_2 = 61,                      /* $@2  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_incrdecrstm = 64,               /* incrdecrstm  */
  YYSYMBOL_loopcontibreak = 65,            /* loopcontibreak  */
  YYSYMBOL_condistm = 66,                  /* condistm  */
  YYSYMBOL_ifstm = 67,                     /* ifstm  */
  YYSYMBOL_68_5 = 68,                      /* $@5  */
  YYSYMBOL_69_6 = 69,                      /* $@6  */
  YYSYMBOL_70_7 = 70,                      /* $@7  */
  YYSYMBOL_71_8 = 71,                      /* $@8  */
  YYSYMBOL_elseifstm = 72,                 /* elseifstm  */
  YYSYMBOL_73_9 = 73,                      /* $@9  */
  YYSYMBOL_74_10 = 74,                     /* $@10  */
  YYSYMBOL_elsestm = 75,                   /* elsestm  */
  YYSYMBOL_76_11 = 76,                     /* $@11  */
  YYSYMBOL_switch = 77,                    /* switch  */
  YYSYMBOL_switchdefault = 78,             /* switchdefault  */
  YYSYMBOL_switchcase = 79,                /* switchcase  */
  YYSYMBOL_funcstm = 80,                   /* funcstm  */
  YYSYMBOL_funcdef = 81,                   /* funcdef  */
  YYSYMBOL_82_12 = 82,                     /* $@12  */
  YYSYMBOL_oneparam = 83,                  /* oneparam  */
  YYSYMBOL_funcparams = 84,                /* funcparams  */
  YYSYMBOL_funcinvoc = 85,                 /* funcinvoc  */
  YYSYMBOL_oneargu = 86,                   /* oneargu  */
  YYSYMBOL_constfuncargu = 87,             /* constfuncargu  */
  YYSYMBOL_op = 88,                        /* op  */
  YYSYMBOL_relop = 89                      /* relop  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   269

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    66,    67,    77,    78,    79,    80,    81,
      85,    89,    99,   103,   104,   105,   106,   107,   108,   109,
     114,   114,   115,   115,   116,   116,   116,   117,   121,   122,
     123,   127,   128,   133,   134,   138,   138,   141,   141,   138,
     144,   144,   144,   145,   149,   149,   150,   154,   157,   158,
     162,   163,   167,   168,   169,   173,   173,   175,   176,   178,
     179,   185,   186,   187,   189,   190,   196,   197,   203,   208,
     217,   222,   227,   228,   229,   282,   286,   287,   288,   289,
     290,   291
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "START", "END", "ECHO",
  "IF", "ELSE", "ELSEIF", "FOR", "WHILE", "DO", "SWITCH", "CASE",
  "DEFAULT", "CONTINUE", "BREAK", "RETURN", "FUNCTION", "FNAME", "CINT",
  "CFLOAT", "CSTRING", "CCHAR", "CBOOL", "EXPO", "LE", "GE", "EEQ", "NEQ",
  "IDENTIFIER", "ASSG", "COMMA", "SEMI", "COLON", "MUL", "DIV", "MOD",
  "ADD", "SUB", "DOT", "LT", "GT", "LPARENTHESIS", "RPARENTHESIS",
  "LCURLY", "RCURLY", "LSQUARE", "RSQUARE", "UINCR", "UDECR", "$accept",
  "s", "statements", "statement", "echostm", "declarestm", "value",
  "const", "loopstm", "$@1", "$@2", "$@3", "$@4", "incrdecrstm",
  "loopcontibreak", "condistm", "ifstm", "$@5", "$@6", "$@7", "$@8",
  "elseifstm", "$@9", "$@10", "elsestm", "$@11", "switch", "switchdefault",
  "switchcase", "funcstm", "funcdef", "$@12", "oneparam", "funcparams",
  "funcinvoc", "oneargu", "constfuncargu", "op", "relop", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-46)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    43,     8,    -3,   -46,   -33,   -31,   -46,   -30,   -22,
     -19,    -3,     3,   -18,    -5,    20,    43,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     1,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,    -3,     2,   -46,   -46,   215,    -4,
      11,    -3,    -2,    14,   -46,   -46,    12,    13,   239,    -3,
     -46,   -46,   -46,    49,   -46,    -3,   -46,   -46,   -46,   -46,
      -3,    -3,    -3,    -3,    -3,    -3,   -46,   -46,    -3,    -3,
      -3,   113,    43,    21,   -46,    16,   -46,    15,    31,   -46,
     215,    26,    26,   215,    67,    67,   215,   215,   137,   197,
     -46,    23,    22,   -46,    38,   239,    28,   -46,   -46,   -44,
      34,   -46,    68,    50,    39,    15,   -46,   -46,   -46,   -46,
      52,    43,    84,   239,    81,    38,   -46,   -46,    54,   -44,
      51,    57,    71,    72,    55,   -46,    63,    43,    65,   -46,
      -3,    43,    43,   -46,    43,    69,   -46,   157,    68,   -46,
      75,   -46,    66,    80,   -46,   -46,   106,    43,   -46,    79,
     111,    77,    -3,   -46,   -46,   -46,   177,    82,   -46,    43,
      83,    78,    43,   -46,    88,   -46,   106,   -46
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,    35,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     9,     5,     6,
      27,     7,    33,    34,     8,    52,     0,     1,    13,    16,
      14,    17,    15,    18,     0,     0,    66,    19,    12,     0,
       0,     0,     0,     0,    32,    31,     0,     0,    63,     0,
       2,     3,    53,     0,    10,     0,    78,    79,    80,    81,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     4,     0,    54,    58,    62,    65,     0,    75,
      73,    70,    69,    71,    67,    68,    72,    74,     0,     0,
      20,     0,     0,    57,    60,     0,     0,    11,    36,    30,
       0,    25,    51,     0,     0,    65,    61,    37,    28,    29,
       0,     4,     0,     0,    49,    60,    55,    64,     0,    30,
       0,     0,     0,     0,     0,    59,     0,     4,     0,    21,
       0,     4,     4,    47,     4,     0,    22,     0,    51,    48,
       0,    38,     0,     0,    50,    56,    43,     4,    26,     0,
      46,     0,     0,    44,    39,    23,     0,     0,    40,     4,
       0,     0,     4,    45,     0,    41,    43,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -15,   -46,   -46,    85,    -7,   -45,   -46,   -46,
     -46,   -46,   -46,    10,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -29,   -46,   -46,   -46,   -46,   -46,   -46,     5,   -46,
     -46,   -46,   -46,    30,    -1,   -46,    62,   -32,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    15,    16,    17,    18,    35,    36,    19,   100,
     142,    42,   112,   110,    20,    21,    22,    39,   107,   118,
     146,   150,   160,   166,   154,   157,    23,   124,   114,    24,
      25,   126,    94,   104,    37,    77,    96,    38,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    51,    53,    76,    46,   108,   109,     1,    27,    71,
      40,    44,    41,    43,    45,    26,    13,    28,    29,    30,
      31,    32,    47,    80,    50,    48,    49,    33,    81,    82,
      83,    84,    85,    86,    52,    54,    87,    88,    89,    69,
      34,    14,    78,    72,    73,    74,    93,    95,     3,     4,
     105,    55,     5,     6,     7,     8,    75,    91,     9,    10,
      11,    12,    13,    62,    97,    92,    65,   102,   122,   101,
     103,    26,   106,    14,    55,    56,    57,    58,    59,   111,
     115,   113,   119,   116,    60,    61,    62,    63,    64,    65,
      66,    67,    55,    79,   121,   123,   120,   129,   137,   127,
     130,   133,    60,    61,    62,   131,   132,    65,   134,   136,
      26,   147,   135,   148,   149,   141,   138,   139,   153,   140,
     156,   145,   152,   155,   163,    70,    26,   159,   162,   128,
      26,    26,   151,    26,   165,     0,     0,   167,    55,    56,
      57,    58,    59,   144,   161,   125,    26,   164,    60,    61,
      62,    63,    64,    65,    66,    67,     0,    90,    26,     0,
       0,    26,    55,    56,    57,    58,    59,   117,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,    67,
       0,    98,    55,    56,    57,    58,    59,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,    67,
       0,   143,    55,    56,    57,    58,    59,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,    67,
       0,   158,    55,    56,    57,    58,    59,     0,     0,     0,
      99,     0,    60,    61,    62,    63,    64,    65,    66,    67,
      55,    56,    57,    58,    59,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    67,    13,    28,
      29,    30,    31,    32,     0,     0,     0,     0,     0,    33
};

static const yytype_int16 yycheck[] =
{
       1,    16,    34,    48,    11,    49,    50,     3,     0,    41,
      43,    33,    43,    43,    33,    16,    19,    20,    21,    22,
      23,    24,    19,    55,     4,    43,    31,    30,    60,    61,
      62,    63,    64,    65,    33,    33,    68,    69,    70,    43,
      43,    30,    49,    45,    30,    33,    30,    32,     5,     6,
      95,    25,     9,    10,    11,    12,    43,    72,    15,    16,
      17,    18,    19,    37,    33,    44,    40,    45,   113,    46,
      32,    72,    44,    30,    25,    26,    27,    28,    29,    45,
      30,    13,    30,    44,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    44,    10,    14,   111,    46,   130,    45,
      43,    46,    35,    36,    37,    34,    34,    40,    45,    44,
     111,    45,   127,    33,     8,    46,   131,   132,     7,   134,
     152,    46,    43,    46,    46,    40,   127,    45,    45,   119,
     131,   132,   147,   134,    46,    -1,    -1,   166,    25,    26,
      27,    28,    29,   138,   159,   115,   147,   162,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,   159,    -1,
      -1,   162,    25,    26,    27,    28,    29,   105,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    52,     5,     6,     9,    10,    11,    12,    15,
      16,    17,    18,    19,    30,    53,    54,    55,    56,    59,
      65,    66,    67,    77,    80,    81,    85,     0,    20,    21,
      22,    23,    24,    30,    43,    57,    58,    85,    88,    68,
      43,    43,    62,    43,    33,    33,    57,    19,    43,    31,
       4,    53,    33,    88,    33,    25,    26,    27,    28,    29,
      35,    36,    37,    38,    39,    40,    41,    42,    89,    43,
      56,    88,    45,    30,    33,    43,    58,    86,    57,    44,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      44,    53,    44,    30,    83,    32,    87,    33,    44,    33,
      60,    46,    45,    32,    84,    58,    44,    69,    49,    50,
      64,    45,    63,    13,    79,    30,    44,    87,    70,    30,
      53,    10,    58,    14,    78,    84,    82,    45,    64,    46,
      43,    34,    34,    46,    45,    53,    44,    88,    53,    53,
      53,    46,    61,    44,    79,    46,    71,    45,    33,     8,
      72,    53,    43,     7,    75,    46,    88,    76,    44,    45,
      73,    53,    45,    46,    53,    46,    74,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      55,    56,    57,    58,    58,    58,    58,    58,    58,    58,
      60,    59,    61,    59,    62,    63,    59,    59,    64,    64,
      64,    65,    65,    66,    66,    68,    69,    70,    71,    67,
      73,    74,    72,    72,    76,    75,    75,    77,    78,    78,
      79,    79,    80,    80,    80,    82,    81,    83,    83,    84,
      84,    85,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     0,     1,     1,     1,     1,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     8,     0,    13,     0,     0,    11,     1,     1,     1,
       0,     2,     2,     1,     1,     0,     0,     0,     0,    13,
       0,     0,    10,     0,     0,     5,     0,     8,     3,     0,
       5,     0,     1,     2,     3,     0,    10,     1,     0,     3,
       0,     5,     1,     0,     3,     0,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* s: START statements END  */
#line 61 "php.y"
                        {printf("\n******************* Valid Program *******************\n"); return 0;}
#line 1469 "y.tab.c"
    break;

  case 5: /* statement: declarestm  */
#line 77 "php.y"
                      {strcpy((yyval.nd_obj).name,(yyvsp[0].nd_obj).name);}
#line 1475 "y.tab.c"
    break;

  case 6: /* statement: loopstm  */
#line 78 "php.y"
                  {}
#line 1481 "y.tab.c"
    break;

  case 7: /* statement: condistm  */
#line 79 "php.y"
                   {}
#line 1487 "y.tab.c"
    break;

  case 8: /* statement: funcstm  */
#line 80 "php.y"
                  {}
#line 1493 "y.tab.c"
    break;

  case 9: /* statement: echostm  */
#line 81 "php.y"
                  {}
#line 1499 "y.tab.c"
    break;

  case 10: /* echostm: ECHO value SEMI  */
#line 85 "php.y"
                         {}
#line 1505 "y.tab.c"
    break;

  case 11: /* declarestm: IDENTIFIER ASSG value SEMI  */
#line 89 "php.y"
                                       {
int res=searchSTable((yyvsp[-3].nd_obj).name, (yyvsp[-1].nd_obj).name);
if (res==-1){
	insertSTable((yyvsp[-3].nd_obj).name, (yyvsp[-1].nd_obj).name);
}
sprintf(intermediateCodes[icIndex++], "\t%s = %s\n", (yyvsp[-3].nd_obj).name, (yyvsp[-1].nd_obj).name);

}
#line 1518 "y.tab.c"
    break;

  case 12: /* value: op  */
#line 99 "php.y"
          {strcpy((yyval.nd_obj).name,(yyvsp[0].conditional_obj).name);}
#line 1524 "y.tab.c"
    break;

  case 13: /* const: CINT  */
#line 103 "php.y"
            {strcpy((yyval.nd_obj).name,(yyvsp[0].nd_obj).name);}
#line 1530 "y.tab.c"
    break;

  case 14: /* const: CSTRING  */
#line 104 "php.y"
                  {strcpy((yyval.nd_obj).name,(yyvsp[0].nd_obj).name);}
#line 1536 "y.tab.c"
    break;

  case 15: /* const: CBOOL  */
#line 105 "php.y"
                {strcpy((yyval.nd_obj).name,(yyvsp[0].nd_obj).name);}
#line 1542 "y.tab.c"
    break;

  case 16: /* const: CFLOAT  */
#line 106 "php.y"
                 {strcpy((yyval.nd_obj).name,(yyvsp[0].nd_obj).name);}
#line 1548 "y.tab.c"
    break;

  case 17: /* const: CCHAR  */
#line 107 "php.y"
                {strcpy((yyval.nd_obj).name,(yyvsp[0].nd_obj).name);}
#line 1554 "y.tab.c"
    break;

  case 18: /* const: IDENTIFIER  */
#line 108 "php.y"
                     {}
#line 1560 "y.tab.c"
    break;

  case 19: /* const: funcinvoc  */
#line 109 "php.y"
                    {}
#line 1566 "y.tab.c"
    break;

  case 20: /* $@1: %empty  */
#line 114 "php.y"
                                            {currentScope++;}
#line 1572 "y.tab.c"
    break;

  case 21: /* loopstm: WHILE LPARENTHESIS op RPARENTHESIS $@1 LCURLY statements RCURLY  */
#line 114 "php.y"
                                                                                       {currentScope--;}
#line 1578 "y.tab.c"
    break;

  case 22: /* $@2: %empty  */
#line 115 "php.y"
                                                                                              {currentScope++;}
#line 1584 "y.tab.c"
    break;

  case 23: /* loopstm: FOR LPARENTHESIS declarestm op SEMI incrdecrstm IDENTIFIER incrdecrstm RPARENTHESIS $@2 LCURLY statements RCURLY  */
#line 115 "php.y"
                                                                                                                                        {currentScope--;}
#line 1590 "y.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 116 "php.y"
             {currentScope++;}
#line 1596 "y.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 116 "php.y"
                                                        {currentScope--;}
#line 1602 "y.tab.c"
    break;

  case 26: /* loopstm: DO $@3 LCURLY statements RCURLY $@4 WHILE LPARENTHESIS op RPARENTHESIS SEMI  */
#line 116 "php.y"
                                                                                                                  {}
#line 1608 "y.tab.c"
    break;

  case 27: /* loopstm: loopcontibreak  */
#line 117 "php.y"
                         {}
#line 1614 "y.tab.c"
    break;

  case 28: /* incrdecrstm: UINCR  */
#line 121 "php.y"
                   {}
#line 1620 "y.tab.c"
    break;

  case 29: /* incrdecrstm: UDECR  */
#line 122 "php.y"
                {}
#line 1626 "y.tab.c"
    break;

  case 31: /* loopcontibreak: BREAK SEMI  */
#line 127 "php.y"
                           {}
#line 1632 "y.tab.c"
    break;

  case 32: /* loopcontibreak: CONTINUE SEMI  */
#line 128 "php.y"
                        {}
#line 1638 "y.tab.c"
    break;

  case 33: /* condistm: ifstm  */
#line 133 "php.y"
                {}
#line 1644 "y.tab.c"
    break;

  case 34: /* condistm: switch  */
#line 134 "php.y"
                 {}
#line 1650 "y.tab.c"
    break;

  case 35: /* $@5: %empty  */
#line 138 "php.y"
          {isIf=1;}
#line 1656 "y.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 138 "php.y"
                                                 {
		sprintf(intermediateCodes[icIndex++], "\tif %s goto label%s\n\tgoto label%s\n", (yyvsp[-1].conditional_obj).name, (yyvsp[-1].conditional_obj).ifPart, (yyvsp[-1].conditional_obj).elsePart);
		sprintf(intermediateCodes[icIndex++],"label%s:\n", (yyvsp[-1].conditional_obj).ifPart);
	}
#line 1665 "y.tab.c"
    break;

  case 37: /* $@7: %empty  */
#line 141 "php.y"
          {currentScope++;}
#line 1671 "y.tab.c"
    break;

  case 38: /* $@8: %empty  */
#line 141 "php.y"
                                                     {currentScope--; sprintf(intermediateCodes[icIndex++],"label%s:\n", (yyvsp[-6].conditional_obj).elsePart);}
#line 1677 "y.tab.c"
    break;

  case 39: /* ifstm: IF $@5 LPARENTHESIS op RPARENTHESIS $@6 $@7 LCURLY statements RCURLY $@8 elseifstm elsestm  */
#line 141 "php.y"
                                                                                                                                                          {isIf=0;}
#line 1683 "y.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 144 "php.y"
                                               {currentScope++;}
#line 1689 "y.tab.c"
    break;

  case 41: /* $@10: %empty  */
#line 144 "php.y"
                                                                                          {currentScope--;}
#line 1695 "y.tab.c"
    break;

  case 42: /* elseifstm: ELSEIF LPARENTHESIS op RPARENTHESIS $@9 LCURLY statements RCURLY $@10 elseifstm  */
#line 144 "php.y"
                                                                                                                      {}
#line 1701 "y.tab.c"
    break;

  case 44: /* $@11: %empty  */
#line 149 "php.y"
              {currentScope++;}
#line 1707 "y.tab.c"
    break;

  case 45: /* elsestm: ELSE $@11 LCURLY statements RCURLY  */
#line 149 "php.y"
                                                         {currentScope--;}
#line 1713 "y.tab.c"
    break;

  case 47: /* switch: SWITCH LPARENTHESIS IDENTIFIER RPARENTHESIS LCURLY switchcase switchdefault RCURLY  */
#line 154 "php.y"
                                                                                           {}
#line 1719 "y.tab.c"
    break;

  case 48: /* switchdefault: DEFAULT COLON statements  */
#line 157 "php.y"
                                        {}
#line 1725 "y.tab.c"
    break;

  case 50: /* switchcase: CASE const COLON statements switchcase  */
#line 162 "php.y"
                                                   {}
#line 1731 "y.tab.c"
    break;

  case 52: /* funcstm: funcdef  */
#line 167 "php.y"
                 {}
#line 1737 "y.tab.c"
    break;

  case 53: /* funcstm: funcinvoc SEMI  */
#line 168 "php.y"
                         {}
#line 1743 "y.tab.c"
    break;

  case 54: /* funcstm: RETURN value SEMI  */
#line 169 "php.y"
                            {}
#line 1749 "y.tab.c"
    break;

  case 55: /* $@12: %empty  */
#line 173 "php.y"
                                                                      {currentScope++;}
#line 1755 "y.tab.c"
    break;

  case 56: /* funcdef: FUNCTION FNAME LPARENTHESIS oneparam funcparams RPARENTHESIS $@12 LCURLY statements RCURLY  */
#line 173 "php.y"
                                                                                                                 {currentScope--;}
#line 1761 "y.tab.c"
    break;

  case 57: /* oneparam: IDENTIFIER  */
#line 175 "php.y"
                     {}
#line 1767 "y.tab.c"
    break;

  case 59: /* funcparams: COMMA IDENTIFIER funcparams  */
#line 178 "php.y"
                                        {}
#line 1773 "y.tab.c"
    break;

  case 61: /* funcinvoc: FNAME LPARENTHESIS oneargu constfuncargu RPARENTHESIS  */
#line 185 "php.y"
                                                                 {}
#line 1779 "y.tab.c"
    break;

  case 62: /* oneargu: const  */
#line 186 "php.y"
               {}
#line 1785 "y.tab.c"
    break;

  case 64: /* constfuncargu: COMMA const constfuncargu  */
#line 189 "php.y"
                                          {}
#line 1791 "y.tab.c"
    break;

  case 66: /* op: const  */
#line 196 "php.y"
                {strcpy((yyval.conditional_obj).name, (yyvsp[0].nd_obj).name);}
#line 1797 "y.tab.c"
    break;

  case 67: /* op: op ADD op  */
#line 197 "php.y"
                   {
	
		sprintf((yyval.conditional_obj).name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", (yyval.conditional_obj).name, (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name);
	}
#line 1808 "y.tab.c"
    break;

  case 68: /* op: op SUB op  */
#line 203 "php.y"
                    {
		sprintf((yyval.conditional_obj).name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", (yyval.conditional_obj).name, (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name);
	}
#line 1818 "y.tab.c"
    break;

  case 69: /* op: op DIV op  */
#line 208 "php.y"
                    {
		if(strcmp((yyvsp[0].conditional_obj).name, "0")==0){
			printf("\n\nDivide by Zero Error. You cannot divide a value by 0!!!!\n");
			exit(-1);
		}
		sprintf((yyval.conditional_obj).name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", (yyval.conditional_obj).name, (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name);
	}
#line 1832 "y.tab.c"
    break;

  case 70: /* op: op MUL op  */
#line 217 "php.y"
                    {
		sprintf((yyval.conditional_obj).name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", (yyval.conditional_obj).name, (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name);
	}
#line 1842 "y.tab.c"
    break;

  case 71: /* op: op MOD op  */
#line 222 "php.y"
                    {
		sprintf((yyval.conditional_obj).name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", (yyval.conditional_obj).name, (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name);
	}
#line 1852 "y.tab.c"
    break;

  case 72: /* op: op DOT op  */
#line 227 "php.y"
                    {}
#line 1858 "y.tab.c"
    break;

  case 73: /* op: op EXPO op  */
#line 228 "php.y"
                     {}
#line 1864 "y.tab.c"
    break;

  case 74: /* op: op relop op  */
#line 229 "php.y"
                      {
		
		if(isIf==0){
			/* if(strcmp($2.name, ">")==0){
				if(atoi($1.name) > atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "<")==0){
				if(atoi($1.name) < atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, ">=")==0){
				if(atoi($1.name) >= atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "<=")==0){
				if(atoi($1.name) <= atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "==")==0){
				if(atoi($1.name) == atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "!=")==0){
				if(atoi($1.name) != atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}*/
			
			
			
			sprintf(intermediateCodes[icIndex++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name, label);
			sprintf(intermediateCodes[icIndex++], "\tt%d = 0\n", tempVar);
			
			sprintf((yyval.conditional_obj).name, "t%d", tempVar);
			
			sprintf(intermediateCodes[icIndex++], "\tgoto label%d\n", label+1);
			
			sprintf(intermediateCodes[icIndex++], "label%d:\n\tt%d = 1\n",label, tempVar++);
			
			sprintf(intermediateCodes[icIndex++], "label%d: \n", label+1);
			label+=2;
		}else{
			sprintf((yyval.conditional_obj).name, "%s %s %s", (yyvsp[-2].conditional_obj).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].conditional_obj).name);
			sprintf((yyval.conditional_obj).ifPart, "%d", label++);
			sprintf((yyval.conditional_obj).elsePart, "%d", label++);
		}
		
			
		
		
	
	}
#line 1922 "y.tab.c"
    break;

  case 75: /* op: LPARENTHESIS op RPARENTHESIS  */
#line 282 "php.y"
                                        {strcpy((yyval.conditional_obj).name,(yyvsp[-1].conditional_obj).name);}
#line 1928 "y.tab.c"
    break;

  case 76: /* relop: LT  */
#line 286 "php.y"
          {strcpy((yyval.nd_obj).name, (yyvsp[0].nd_obj).name);}
#line 1934 "y.tab.c"
    break;

  case 77: /* relop: GT  */
#line 287 "php.y"
             {strcpy((yyval.nd_obj).name, (yyvsp[0].nd_obj).name);}
#line 1940 "y.tab.c"
    break;

  case 78: /* relop: LE  */
#line 288 "php.y"
             {strcpy((yyval.nd_obj).name, (yyvsp[0].nd_obj).name);}
#line 1946 "y.tab.c"
    break;

  case 79: /* relop: GE  */
#line 289 "php.y"
             {strcpy((yyval.nd_obj).name, (yyvsp[0].nd_obj).name);}
#line 1952 "y.tab.c"
    break;

  case 80: /* relop: EEQ  */
#line 290 "php.y"
              {strcpy((yyval.nd_obj).name, (yyvsp[0].nd_obj).name);}
#line 1958 "y.tab.c"
    break;

  case 81: /* relop: NEQ  */
#line 291 "php.y"
              {strcpy((yyval.nd_obj).name, (yyvsp[0].nd_obj).name);}
#line 1964 "y.tab.c"
    break;


#line 1968 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 293 "php.y"


// This function searches the symbol table and if found updates it to the given value;
int searchSTable(char* varName, char* val){

	for(int i=0; i<varCount; i++){
		if(strcmp(symbolTable[i].name, varName)==0){
			strcpy(symbolTable[i].value, val);
			return 1;
		}
	}
	
	return -1;
}

// This function inserts a variable data into the symbolTable
void insertSTable(char* varName, char* val){

	int index = varCount++;
	strcpy(symbolTable[index].name, varName);
	strcpy(symbolTable[index].value, val);
	symbolTable[index].scope = currentScope;
	
}



int main(){

	yyparse();
	if(flag!=1){
		printf("\n\n");
		printf("----------  INTERMEDIATE CODE GENERATED  -----------\n\n\n");
		for(int i=0; i<icIndex; i++){
			printf("%s", intermediateCodes[i]);
		}
		printf("\n\n");
		printf("------------------------------------------------------\n\n");
		
		printf("\n\n");
		printf("-------------------  Symbol Table  -------------------\n\n\n");
		
		printf("------------------------------------------------------\n");
		printf("Name\t\tValue\t\tScope");
		printf("\n------------------------------------------------------\n");
		for(int i=0; i<varCount; i++){
			printf("\n%s\t\t%s\t\t%d", symbolTable[i].name, symbolTable[i].value, symbolTable[i].scope);
		}
		printf("\n\n");
		printf("------------------------------------------------------\n\n");
	}
}

void yyerror(char *error){

	fprintf(stderr, "\n\n!!!!!!!!!!!!! error: %s !!!!!!!!!!!!!\n", error);
	flag=1;

}



