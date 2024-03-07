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

	#include <stdio.h>
	int yylex(void);
    	void yyerror(char* s);
	int flag=0;

#line 78 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '<'  */
  YYSYMBOL_4_ = 4,                         /* '>'  */
  YYSYMBOL_EQ = 5,                         /* EQ  */
  YYSYMBOL_NE = 6,                         /* NE  */
  YYSYMBOL_7_ = 7,                         /* '+'  */
  YYSYMBOL_8_ = 8,                         /* '-'  */
  YYSYMBOL_9_ = 9,                         /* '*'  */
  YYSYMBOL_10_ = 10,                       /* '/'  */
  YYSYMBOL_START = 11,                     /* START  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_ECHO = 13,                      /* ECHO  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 16,                    /* ELSEIF  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_SWITCH = 20,                    /* SWITCH  */
  YYSYMBOL_CASE = 21,                      /* CASE  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 24,                     /* BREAK  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_FUNCTION = 26,                  /* FUNCTION  */
  YYSYMBOL_FNAME = 27,                     /* FNAME  */
  YYSYMBOL_CINT = 28,                      /* CINT  */
  YYSYMBOL_CFLOAT = 29,                    /* CFLOAT  */
  YYSYMBOL_CSTRING = 30,                   /* CSTRING  */
  YYSYMBOL_CCHAR = 31,                     /* CCHAR  */
  YYSYMBOL_CBOOL = 32,                     /* CBOOL  */
  YYSYMBOL_EXPO = 33,                      /* EXPO  */
  YYSYMBOL_LE = 34,                        /* LE  */
  YYSYMBOL_GE = 35,                        /* GE  */
  YYSYMBOL_EEQ = 36,                       /* EEQ  */
  YYSYMBOL_NEQ = 37,                       /* NEQ  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_ASSG = 39,                      /* ASSG  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_SEMI = 41,                      /* SEMI  */
  YYSYMBOL_COLON = 42,                     /* COLON  */
  YYSYMBOL_MUL = 43,                       /* MUL  */
  YYSYMBOL_DIV = 44,                       /* DIV  */
  YYSYMBOL_MOD = 45,                       /* MOD  */
  YYSYMBOL_ADD = 46,                       /* ADD  */
  YYSYMBOL_SUB = 47,                       /* SUB  */
  YYSYMBOL_DOT = 48,                       /* DOT  */
  YYSYMBOL_LT = 49,                        /* LT  */
  YYSYMBOL_GT = 50,                        /* GT  */
  YYSYMBOL_LPARENTHESIS = 51,              /* LPARENTHESIS  */
  YYSYMBOL_RPARENTHESIS = 52,              /* RPARENTHESIS  */
  YYSYMBOL_LCURLY = 53,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 54,                    /* RCURLY  */
  YYSYMBOL_LSQUARE = 55,                   /* LSQUARE  */
  YYSYMBOL_RSQUARE = 56,                   /* RSQUARE  */
  YYSYMBOL_UINCR = 57,                     /* UINCR  */
  YYSYMBOL_UDECR = 58,                     /* UDECR  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_s = 60,                         /* s  */
  YYSYMBOL_statements = 61,                /* statements  */
  YYSYMBOL_statement = 62,                 /* statement  */
  YYSYMBOL_echostm = 63,                   /* echostm  */
  YYSYMBOL_declarestm = 64,                /* declarestm  */
  YYSYMBOL_value = 65,                     /* value  */
  YYSYMBOL_const = 66,                     /* const  */
  YYSYMBOL_loopstm = 67,                   /* loopstm  */
  YYSYMBOL_incrdecrstm = 68,               /* incrdecrstm  */
  YYSYMBOL_loopcontibreak = 69,            /* loopcontibreak  */
  YYSYMBOL_condistm = 70,                  /* condistm  */
  YYSYMBOL_ifstm = 71,                     /* ifstm  */
  YYSYMBOL_elseifstm = 72,                 /* elseifstm  */
  YYSYMBOL_elsestm = 73,                   /* elsestm  */
  YYSYMBOL_switch = 74,                    /* switch  */
  YYSYMBOL_switchdefault = 75,             /* switchdefault  */
  YYSYMBOL_switchcase = 76,                /* switchcase  */
  YYSYMBOL_switchbreak = 77,               /* switchbreak  */
  YYSYMBOL_funcdef = 78,                   /* funcdef  */
  YYSYMBOL_oneparam = 79,                  /* oneparam  */
  YYSYMBOL_funcparams = 80,                /* funcparams  */
  YYSYMBOL_funcret = 81,                   /* funcret  */
  YYSYMBOL_funcinvoc = 82,                 /* funcinvoc  */
  YYSYMBOL_op = 83,                        /* op  */
  YYSYMBOL_boolexpr = 84                   /* boolexpr  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
       2,     2,     9,     7,     2,     8,     2,    10,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     4,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    19,    19,    24,    25,    34,    35,    36,    37,    38,
      39,    40,    44,    48,    51,    52,    55,    56,    57,    58,
      59,    60,    61,    66,    67,    68,    72,    73,    74,    78,
      79,    80,    84,    85,    89,    92,    93,    97,    98,   102,
     105,   106,   110,   111,   114,   115,   119,   121,   122,   124,
     125,   127,   128,   134,   138,   139,   140,   141,   142,   143,
     144,   148,   149,   150,   151,   152,   153
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
  "\"end of file\"", "error", "\"invalid token\"", "'<'", "'>'", "EQ",
  "NE", "'+'", "'-'", "'*'", "'/'", "START", "END", "ECHO", "IF", "ELSE",
  "ELSEIF", "FOR", "WHILE", "DO", "SWITCH", "CASE", "DEFAULT", "CONTINUE",
  "BREAK", "RETURN", "FUNCTION", "FNAME", "CINT", "CFLOAT", "CSTRING",
  "CCHAR", "CBOOL", "EXPO", "LE", "GE", "EEQ", "NEQ", "IDENTIFIER", "ASSG",
  "COMMA", "SEMI", "COLON", "MUL", "DIV", "MOD", "ADD", "SUB", "DOT", "LT",
  "GT", "LPARENTHESIS", "RPARENTHESIS", "LCURLY", "RCURLY", "LSQUARE",
  "RSQUARE", "UINCR", "UDECR", "$accept", "s", "statements", "statement",
  "echostm", "declarestm", "value", "const", "loopstm", "incrdecrstm",
  "loopcontibreak", "condistm", "ifstm", "elseifstm", "elsestm", "switch",
  "switchdefault", "switchcase", "switchbreak", "funcdef", "oneparam",
  "funcparams", "funcret", "funcinvoc", "op", "boolexpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       7,    -4,    21,    50,   -22,   -16,   -14,   -15,   -11,    12,
      -9,   -97,   -97,   -97,   -97,   -97,     4,    39,    -4,   -97,
     -97,    19,   -97,   -97,   -97,   -97,   -97,    16,   -97,   -97,
     -97,    17,   -97,   -97,    50,    28,    50,    -4,    29,    25,
      32,    50,   -97,   -97,    50,    50,    50,    50,    50,    50,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,    50,
      20,     4,    50,    33,   -12,    34,    32,   -97,    44,    99,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,    40,    51,    41,
      54,    55,    45,    48,    44,    60,    52,   -97,    -4,   -25,
      -4,    -4,    -4,    85,    84,    58,    44,   -97,    53,   -97,
     -97,    73,   -12,   -12,   -12,    61,    50,    91,    62,   -97,
      98,   -25,    63,   -97,   -97,    50,    74,    77,    66,    -4,
      70,   111,    75,   -97,    76,    -4,    -4,   -97,   104,    50,
      78,   -97,    80,    89,   113,   -97,    50,    87,    97,    -4,
      -4,   -97,   112,    84,   115,   -97,   101,   103,   -12,   -97,
     -97,    -4,    -4,   -97,   110,   -97,   114,   -97,    98,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,    19,    17,    20,    18,    21,     0,     4,    11,
       5,     0,     6,     8,    32,    33,     9,    22,     7,     1,
      21,     0,    14,    22,     0,     0,     0,     4,     0,     0,
      48,     0,     2,     3,     0,     0,     0,     0,     0,     0,
      10,    60,    12,    57,    56,    58,    54,    55,    59,     0,
       0,     0,     0,     0,    31,     0,    48,    47,    50,     0,
      63,    64,    65,    66,    61,    62,    15,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    13,     4,    28,
       4,     4,     4,     0,    43,     0,    50,    53,     0,    26,
      27,     0,    31,    31,    31,     0,     0,    41,     0,    49,
      36,    28,     0,    30,    29,     0,     0,     0,     0,     4,
       0,    38,     0,    23,     0,     4,     4,    39,    52,     0,
       0,    34,     0,     0,    45,    40,     0,     0,     0,     4,
       4,    25,     0,    43,     0,    46,     0,     0,    31,    44,
      42,     4,     4,    37,     0,    51,     0,    24,    36,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -17,   -97,   -97,   117,   -36,     0,   -97,    56,
     -96,   -97,   -97,    -3,   -97,   -97,   -97,    22,   -97,   -97,
     100,   -65,   -97,    -1,   -97,   -32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    17,    18,    19,    20,    31,    21,    22,   101,
      82,    23,    24,   121,   131,    25,   118,   107,   143,    26,
      68,    86,   137,    33,    59,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    43,    60,    32,    63,    69,   112,   113,   114,     3,
       4,    80,    81,     5,     6,     7,     8,    27,     1,    95,
      64,    29,     9,    10,    11,    12,    13,    14,    15,    34,
      78,   109,    99,   100,    16,    35,    27,    36,    37,    39,
      38,    32,    40,    41,    70,    71,    72,    73,    74,    75,
      51,    42,   154,    44,    45,    46,    47,    50,    52,    76,
      53,    54,    55,    56,    57,    58,    61,    65,    48,    49,
      67,    98,    77,   102,   103,   104,    66,    10,    11,    12,
      13,    14,    15,   124,    85,    79,    83,    27,    30,    27,
      27,    27,    89,    88,    90,    91,    92,   138,    96,    93,
     144,    94,   128,   105,    97,   106,   116,   110,   134,   135,
     108,   111,   115,   117,   120,   119,   125,   123,    27,   126,
     127,   129,   147,   148,    27,    27,   130,   132,   133,   136,
     141,   139,    51,   140,   155,   156,    32,   142,    27,    27,
      87,   145,    53,    54,    55,    56,    57,    58,    51,   146,
      27,    27,    62,   149,   152,   159,   151,   153,    53,    54,
      55,    56,    57,    58,   157,   150,    84,   122,   158
};

static const yytype_uint8 yycheck[] =
{
       1,    18,    34,     3,    36,    41,   102,   103,   104,    13,
      14,    23,    24,    17,    18,    19,    20,    18,    11,    84,
      37,     0,    26,    27,    28,    29,    30,    31,    32,    51,
      62,    96,    57,    58,    38,    51,    37,    51,    53,    27,
      51,    41,    51,    39,    44,    45,    46,    47,    48,    49,
      33,    12,   148,    34,    35,    36,    37,    41,    41,    59,
      43,    44,    45,    46,    47,    48,    38,    38,    49,    50,
      38,    88,    52,    90,    91,    92,    51,    27,    28,    29,
      30,    31,    32,   115,    40,    52,    52,    88,    38,    90,
      91,    92,    41,    53,    53,    41,    41,   129,    38,    54,
     136,    53,   119,    18,    52,    21,   106,    54,   125,   126,
      52,    38,    51,    22,    16,    53,    42,    54,   119,    42,
      54,    51,   139,   140,   125,   126,    15,    52,    52,    25,
      41,    53,    33,    53,   151,   152,   136,    24,   139,   140,
      41,    54,    43,    44,    45,    46,    47,    48,    33,    52,
     151,   152,    35,    41,    53,   158,    41,    54,    43,    44,
      45,    46,    47,    48,    54,   143,    66,   111,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    60,    13,    14,    17,    18,    19,    20,    26,
      27,    28,    29,    30,    31,    32,    38,    61,    62,    63,
      64,    66,    67,    70,    71,    74,    78,    82,    84,     0,
      38,    65,    66,    82,    51,    51,    51,    53,    51,    27,
      51,    39,    12,    61,    34,    35,    36,    37,    49,    50,
      41,    33,    41,    43,    44,    45,    46,    47,    48,    83,
      84,    38,    64,    84,    61,    38,    51,    38,    79,    65,
      66,    66,    66,    66,    66,    66,    66,    52,    84,    52,
      23,    24,    69,    52,    79,    40,    80,    41,    53,    41,
      53,    41,    41,    54,    53,    80,    38,    52,    61,    57,
      58,    68,    61,    61,    61,    18,    21,    76,    52,    80,
      54,    38,    69,    69,    69,    51,    66,    22,    75,    53,
      16,    72,    68,    54,    84,    42,    42,    54,    61,    51,
      15,    73,    52,    52,    61,    61,    25,    81,    84,    53,
      53,    41,    24,    77,    65,    54,    52,    61,    61,    41,
      76,    41,    53,    54,    69,    61,    61,    54,    54,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    63,    64,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    70,    70,    71,    72,    72,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    78,    79,    79,    80,
      80,    81,    81,    82,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     0,     1,     1,     1,     1,     1,
       2,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     8,    13,    10,     1,     1,     0,     4,
       4,     0,     1,     1,     9,     8,     0,     4,     0,     8,
       3,     0,     6,     0,     2,     0,    10,     1,     0,     3,
       0,     4,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3
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
#line 19 "php.y"
                        {printf("\n****** Valid Program *******\n"); return 0;}
#line 1393 "y.tab.c"
    break;

  case 5: /* statement: declarestm  */
#line 34 "php.y"
                      {printf("Reached at declaration statement\n");}
#line 1399 "y.tab.c"
    break;

  case 6: /* statement: loopstm  */
#line 35 "php.y"
                  {printf("Reached at loop statement\n");}
#line 1405 "y.tab.c"
    break;

  case 7: /* statement: boolexpr  */
#line 36 "php.y"
                   {printf("Reached at boolean statement\n");}
#line 1411 "y.tab.c"
    break;

  case 8: /* statement: condistm  */
#line 37 "php.y"
                   {printf("Reached at conditional statement\n");}
#line 1417 "y.tab.c"
    break;

  case 9: /* statement: funcdef  */
#line 38 "php.y"
                  {}
#line 1423 "y.tab.c"
    break;

  case 10: /* statement: funcinvoc SEMI  */
#line 39 "php.y"
                         {}
#line 1429 "y.tab.c"
    break;

  case 11: /* statement: echostm  */
#line 40 "php.y"
                  {}
#line 1435 "y.tab.c"
    break;

  case 12: /* echostm: ECHO value SEMI  */
#line 44 "php.y"
                         {}
#line 1441 "y.tab.c"
    break;

  case 13: /* declarestm: IDENTIFIER ASSG value SEMI  */
#line 48 "php.y"
                                       {printf("Inside declare stmt\n\n");}
#line 1447 "y.tab.c"
    break;

  case 14: /* value: const  */
#line 51 "php.y"
             {printf("Reached const\n");}
#line 1453 "y.tab.c"
    break;

  case 15: /* value: value op const  */
#line 52 "php.y"
                         {printf("Reached value op const\n");}
#line 1459 "y.tab.c"
    break;

  case 16: /* const: CINT  */
#line 55 "php.y"
            {printf("Reached CINT\n");}
#line 1465 "y.tab.c"
    break;

  case 17: /* const: CSTRING  */
#line 56 "php.y"
                  {printf("Reached CSTRING\n");}
#line 1471 "y.tab.c"
    break;

  case 18: /* const: CBOOL  */
#line 57 "php.y"
                {printf("Reached CBOOL\n");}
#line 1477 "y.tab.c"
    break;

  case 19: /* const: CFLOAT  */
#line 58 "php.y"
                 {printf("Reached CFLOAT\n");}
#line 1483 "y.tab.c"
    break;

  case 20: /* const: CCHAR  */
#line 59 "php.y"
                {printf("Reached CCHAR\n");}
#line 1489 "y.tab.c"
    break;

  case 21: /* const: IDENTIFIER  */
#line 60 "php.y"
                     {printf("Reached in const Identifier\n");}
#line 1495 "y.tab.c"
    break;

  case 22: /* const: funcinvoc  */
#line 61 "php.y"
                    {}
#line 1501 "y.tab.c"
    break;

  case 23: /* loopstm: WHILE LPARENTHESIS boolexpr RPARENTHESIS LCURLY statements loopcontibreak RCURLY  */
#line 66 "php.y"
                                                                                          {printf("yacc: While");}
#line 1507 "y.tab.c"
    break;

  case 24: /* loopstm: FOR LPARENTHESIS declarestm boolexpr SEMI incrdecrstm IDENTIFIER incrdecrstm RPARENTHESIS LCURLY statements loopcontibreak RCURLY  */
#line 67 "php.y"
                                                                                                                                            {printf("yacc: For");}
#line 1513 "y.tab.c"
    break;

  case 25: /* loopstm: DO LCURLY statements loopcontibreak RCURLY WHILE LPARENTHESIS boolexpr RPARENTHESIS SEMI  */
#line 68 "php.y"
                                                                                                   {printf("yacc: DO WHILE");}
#line 1519 "y.tab.c"
    break;

  case 26: /* incrdecrstm: UINCR  */
#line 72 "php.y"
                   {printf("incr\n");}
#line 1525 "y.tab.c"
    break;

  case 27: /* incrdecrstm: UDECR  */
#line 73 "php.y"
                {printf("decr\n");}
#line 1531 "y.tab.c"
    break;

  case 29: /* loopcontibreak: BREAK SEMI statements loopcontibreak  */
#line 78 "php.y"
                                                     {}
#line 1537 "y.tab.c"
    break;

  case 30: /* loopcontibreak: CONTINUE SEMI statements loopcontibreak  */
#line 79 "php.y"
                                                  {}
#line 1543 "y.tab.c"
    break;

  case 32: /* condistm: ifstm  */
#line 84 "php.y"
                {}
#line 1549 "y.tab.c"
    break;

  case 33: /* condistm: switch  */
#line 85 "php.y"
                 {}
#line 1555 "y.tab.c"
    break;

  case 35: /* elseifstm: ELSEIF LPARENTHESIS boolexpr RPARENTHESIS LCURLY statements RCURLY elseifstm  */
#line 92 "php.y"
                                                                                        {}
#line 1561 "y.tab.c"
    break;

  case 37: /* elsestm: ELSE LCURLY statements RCURLY  */
#line 97 "php.y"
                                       {}
#line 1567 "y.tab.c"
    break;

  case 39: /* switch: SWITCH LPARENTHESIS IDENTIFIER RPARENTHESIS LCURLY switchcase switchdefault RCURLY  */
#line 102 "php.y"
                                                                                           {}
#line 1573 "y.tab.c"
    break;

  case 40: /* switchdefault: DEFAULT COLON statements  */
#line 105 "php.y"
                                        {}
#line 1579 "y.tab.c"
    break;

  case 42: /* switchcase: CASE const COLON statements switchbreak switchcase  */
#line 110 "php.y"
                                                               {printf("Reached conti\n");}
#line 1585 "y.tab.c"
    break;

  case 44: /* switchbreak: BREAK SEMI  */
#line 114 "php.y"
                        {printf("Semi\n");}
#line 1591 "y.tab.c"
    break;

  case 46: /* funcdef: FUNCTION FNAME LPARENTHESIS oneparam funcparams RPARENTHESIS LCURLY statements funcret RCURLY  */
#line 119 "php.y"
                                                                                                       {}
#line 1597 "y.tab.c"
    break;

  case 47: /* oneparam: IDENTIFIER  */
#line 121 "php.y"
                     {}
#line 1603 "y.tab.c"
    break;

  case 49: /* funcparams: COMMA IDENTIFIER funcparams  */
#line 124 "php.y"
                                        {}
#line 1609 "y.tab.c"
    break;

  case 51: /* funcret: RETURN value SEMI statements  */
#line 127 "php.y"
                                     {}
#line 1615 "y.tab.c"
    break;

  case 53: /* funcinvoc: FNAME LPARENTHESIS oneparam funcparams RPARENTHESIS  */
#line 134 "php.y"
                                                               {}
#line 1621 "y.tab.c"
    break;

  case 54: /* op: ADD  */
#line 138 "php.y"
        {printf("yacc: Addition\n");}
#line 1627 "y.tab.c"
    break;

  case 55: /* op: SUB  */
#line 139 "php.y"
              {printf("yacc: SUB\n");}
#line 1633 "y.tab.c"
    break;

  case 56: /* op: DIV  */
#line 140 "php.y"
              {printf("yacc: DIV\n");}
#line 1639 "y.tab.c"
    break;

  case 57: /* op: MUL  */
#line 141 "php.y"
              {printf("yacc: MUL\n");}
#line 1645 "y.tab.c"
    break;

  case 58: /* op: MOD  */
#line 142 "php.y"
              {printf("yacc: MOD\n");}
#line 1651 "y.tab.c"
    break;

  case 59: /* op: DOT  */
#line 143 "php.y"
              {printf("yacc: DOT\n");}
#line 1657 "y.tab.c"
    break;

  case 60: /* op: EXPO  */
#line 144 "php.y"
               {printf("yacc: EXPO\n");}
#line 1663 "y.tab.c"
    break;

  case 61: /* boolexpr: const LT const  */
#line 148 "php.y"
                         {yyval = yyvsp[-2] < yyvsp[0];}
#line 1669 "y.tab.c"
    break;

  case 62: /* boolexpr: const GT const  */
#line 149 "php.y"
                         {yyval = yyvsp[-2] > yyvsp[0];}
#line 1675 "y.tab.c"
    break;

  case 63: /* boolexpr: const LE const  */
#line 150 "php.y"
                         {yyval = yyvsp[-2] <= yyvsp[0];}
#line 1681 "y.tab.c"
    break;

  case 64: /* boolexpr: const GE const  */
#line 151 "php.y"
                         {yyval = yyvsp[-2] >= yyvsp[0];}
#line 1687 "y.tab.c"
    break;

  case 65: /* boolexpr: const EEQ const  */
#line 152 "php.y"
                          {yyval = yyvsp[-2] == yyvsp[0];}
#line 1693 "y.tab.c"
    break;

  case 66: /* boolexpr: const NEQ const  */
#line 153 "php.y"
                          {yyval = yyvsp[-2] != yyvsp[0];}
#line 1699 "y.tab.c"
    break;


#line 1703 "y.tab.c"

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

#line 155 "php.y"



void yyerror(char *error){

	fprintf(stderr, "!!!!!!!!!!!!! error: %s !!!!!!!!!!!!!\n", error);
	flag=1;

}



