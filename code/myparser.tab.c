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
#line 5 "myparser.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdarg.h>
	#include <stdio.h>
	#include <string.h>	
	#include "cgen.h"

	extern int yylex(void);
	extern int line_num;
	extern int comment_start_line;

	extern char *line_buffer;

#line 80 "myparser.tab.c" /* yacc.c:339  */

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
   by #include "myparser.tab.h".  */
#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
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
    KW_INT = 258,
    KW_REAL = 259,
    KW_BOOL = 260,
    KW_STRING = 261,
    KW_IF = 262,
    KW_THEN = 263,
    KW_ELSE = 264,
    KW_FI = 265,
    KW_WHILE = 266,
    KW_LOOP = 267,
    KW_POOL = 268,
    KW_CONST = 269,
    KW_LET = 270,
    KW_BREAK = 271,
    KW_RETURN = 272,
    KW_START = 273,
    DIFFERENT_OP = 274,
    EQUAL_LESS_OP = 275,
    AND_OP = 276,
    OR_OP = 277,
    NOT_OP = 278,
    ASSIGN_OP = 279,
    ARROW_OP = 280,
    POS_INT = 281,
    POS_REAL = 282,
    KW_TRUE = 283,
    KW_FALSE = 284,
    IDENTIFIER = 285,
    STRING = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "myparser.y" /* yacc.c:355  */

	char* crepr;

#line 156 "myparser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "myparser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      32,    33,    43,    41,    39,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,    40,
      47,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   121,   130,   139,   155,   156,   157,   158,
     159,   160,   161,   162,   167,   168,   169,   173,   177,   180,
     181,   186,   187,   191,   192,   197,   200,   201,   204,   205,
     206,   207,   212,   215,   216,   219,   220,   221,   228,   229,
     232,   238,   239,   240,   243,   281,   282,   287,   288,   291,
     292,   295,   296,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   330,   331,   336,   337,   340,   341,
     348,   349,   350,   355,   369,   370,   375
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_INT", "KW_REAL", "KW_BOOL",
  "KW_STRING", "KW_IF", "KW_THEN", "KW_ELSE", "KW_FI", "KW_WHILE",
  "KW_LOOP", "KW_POOL", "KW_CONST", "KW_LET", "KW_BREAK", "KW_RETURN",
  "KW_START", "DIFFERENT_OP", "EQUAL_LESS_OP", "AND_OP", "OR_OP", "NOT_OP",
  "ASSIGN_OP", "ARROW_OP", "POS_INT", "POS_REAL", "KW_TRUE", "KW_FALSE",
  "IDENTIFIER", "STRING", "'('", "')'", "':'", "'{'", "'}'", "'['", "']'",
  "','", "';'", "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "'<'", "$accept",
  "program", "type_spec", "decl_id", "table_id", "table_init",
  "table_init_values", "decl_list", "decl", "let_decl_body",
  "let_decl_list", "let_decl_init", "const_decl_body", "const_decl_list",
  "const_decl_init", "func_list", "func", "func_param_list", "func_param",
  "param_list", "body", "body_decl_list", "instr_list", "expr", "term",
  "bool", "func_call", "func_stm", "instr", "instr_assigment", "return",
  "instr_func_call", YY_NULLPTR
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
     285,   286,    40,    41,    58,   123,   125,    91,    93,    44,
      59,    43,    45,    42,    47,    37,    61,    60
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -47

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,     0,   -19,    21,   113,  -149,    35,  -149,     5,    19,
      34,  -149,  -149,     4,  -149,    53,  -149,    12,  -149,  -149,
       9,  -149,    67,    22,  -149,    77,   159,    72,    10,   -19,
     103,    10,   -19,    94,    27,    98,   116,   104,   204,  -149,
    -149,  -149,  -149,    74,   204,  -149,   204,   204,  -149,   118,
      41,  -149,  -149,  -149,   204,   204,  -149,  -149,  -149,  -149,
    -149,  -149,   119,   101,   130,  -149,  -149,  -149,  -149,   125,
    -149,   128,   143,   136,   137,   138,  -149,   176,   141,  -149,
    -149,  -149,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,    81,    15,  -149,    85,   100,  -149,    88,
    -149,   120,  -149,   142,   144,   145,   -19,   174,  -149,  -149,
      57,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,   146,   -19,    10,   -19,  -149,   204,  -149,
    -149,  -149,  -149,   147,   150,   156,  -149,   167,  -149,   204,
      10,  -149,  -149,  -149,  -149,   190,   160,   192,   161,  -149,
     173,   194,   212,   195,   -10,   186,   187,   198,   193,   -19,
     184,   205,  -149,   199,   -10,    -7,   197,  -149,  -149,  -149,
    -149,   -10,   -10,   203,   -10,  -149,   200,   204,  -149,  -149,
      -7,  -149,  -149,   206,   207,   -10,   208,  -149,   201,  -149,
    -149,   211,  -149,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    22,     0,    39,     0,    14,
       0,    16,    23,     0,    34,    28,    24,     0,    27,     1,
       0,    21,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    74,    75,    14,     0,    15,     0,     0,    68,     0,
      64,    67,    69,    36,    41,     0,    37,    35,     6,     7,
       8,     9,     0,     0,     0,    33,    30,    31,    29,     0,
      26,     0,     0,     0,     0,     0,    73,     0,     0,    72,
      71,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,    43,     0,     0,    20,     0,
      32,     0,    25,     0,     0,     0,    41,     0,    77,    79,
       0,    70,    61,    60,    62,    63,    53,    54,    55,    56,
      57,    58,    59,     0,     0,     0,     0,    18,     0,    10,
      11,    12,    13,     0,     0,     0,    46,     0,    76,     0,
       0,    42,    44,    45,    19,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    47,     0,    52,    81,    82,
      80,     0,     0,     0,     0,    85,     0,     0,     5,    49,
      48,    51,    86,     0,     0,     0,     0,    84,     0,    40,
       4,     0,     3,    83,     2
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   -28,    -1,  -149,   209,  -149,  -149,     2,  -149,
    -149,   216,  -149,  -149,   220,   246,     3,  -149,   127,  -149,
     -96,  -149,    89,   -18,    70,  -149,  -130,  -149,  -148,  -149,
    -149,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    63,    48,    11,    56,    97,     4,   162,    16,
      17,    18,    12,    13,    14,     6,     7,    94,    95,    96,
     163,   164,   165,    57,    50,    51,    52,   110,   167,   168,
     169,   170
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    15,     5,    69,   159,     2,    21,   160,    49,    24,
     160,     9,    68,    58,    59,    60,    61,   181,     8,    10,
      43,    19,    36,    43,   166,    24,    78,    33,    64,    25,
       9,    15,   181,    36,   166,   166,    78,    98,    28,     9,
      35,   166,   166,    29,   166,    72,    31,    62,   123,    23,
     166,    32,     9,    93,   124,   166,    26,     9,    27,   109,
      82,    83,    84,    85,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   183,   184,    30,   186,     1,
       2,    34,    86,    87,    88,    89,    90,    91,    92,   191,
     138,   129,   130,   131,   132,    38,   139,   142,    39,    40,
      41,    42,    43,    53,    54,   136,    77,    55,    76,    37,
     144,    26,   150,    46,    47,   -46,    79,    80,    71,   125,
     -46,   149,    73,   136,   126,   143,    38,    20,     2,    39,
      40,    41,    42,    43,    66,    44,   127,    75,    55,   128,
      74,   100,   176,    38,    46,    47,    39,    40,    41,    42,
      43,    53,    44,   161,   101,    55,    81,    99,    64,   188,
     103,    46,    47,   161,   161,   102,   179,   104,   105,   106,
     161,   161,   107,   161,   111,   133,   134,   137,   135,   161,
     140,   145,    38,   146,   161,    39,    40,    41,    42,    43,
     147,    44,   148,   151,   152,   153,   154,    45,   155,    38,
      46,    47,    39,    40,    41,    42,    43,    38,    44,   108,
      39,    40,    41,    42,    43,   157,    44,    46,    47,   156,
     158,   171,   172,   173,   175,    46,    47,    38,   174,   177,
      39,    40,    41,    42,    43,   178,    44,   182,   185,    67,
     187,   193,   189,   190,   192,    46,    47,   194,    70,    65,
      22,   141,     0,   180
};

static const yytype_int16 yycheck[] =
{
       1,     2,     0,    31,    14,    15,     4,    17,    26,     6,
      17,    30,    30,     3,     4,     5,     6,   165,    18,    20,
      30,     0,    23,    30,   154,    22,    44,    18,    29,    24,
      30,    32,   180,    34,   164,   165,    54,    55,    34,    30,
      18,   171,   172,    39,   174,    18,    34,    37,    33,    14,
     180,    39,    30,    54,    39,   185,    37,    30,    24,    77,
      19,    20,    21,    22,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   171,   172,    24,   174,    14,
      15,    14,    41,    42,    43,    44,    45,    46,    47,   185,
      33,     3,     4,     5,     6,    23,    39,   125,    26,    27,
      28,    29,    30,    31,    32,   106,    32,    35,    38,    32,
     128,    37,   140,    41,    42,    34,    46,    47,    24,    34,
      39,   139,    24,   124,    39,   126,    23,    14,    15,    26,
      27,    28,    29,    30,    31,    32,    36,    33,    35,    39,
      24,    40,   160,    23,    41,    42,    26,    27,    28,    29,
      30,    31,    32,   154,    24,    35,    38,    38,   159,   177,
      32,    41,    42,   164,   165,    40,   164,    24,    32,    32,
     171,   172,    34,   174,    33,    33,    32,     3,    33,   180,
      34,    34,    23,    33,   185,    26,    27,    28,    29,    30,
      34,    32,    25,     3,    34,     3,    35,    38,    25,    23,
      41,    42,    26,    27,    28,    29,    30,    23,    32,    33,
      26,    27,    28,    29,    30,     3,    32,    41,    42,    25,
      25,    35,    35,    25,    40,    41,    42,    23,    35,    24,
      26,    27,    28,    29,    30,    36,    32,    40,    35,    30,
      40,    40,    36,    36,    36,    41,    42,    36,    32,    29,
       4,   124,    -1,   164
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    49,    55,    56,    63,    64,    18,    30,
      51,    52,    60,    61,    62,    51,    57,    58,    59,     0,
      14,    56,    63,    14,    64,    24,    37,    24,    34,    39,
      24,    34,    39,    18,    14,    18,    51,    32,    23,    26,
      27,    28,    29,    30,    32,    38,    41,    42,    51,    71,
      72,    73,    74,    31,    32,    35,    53,    71,     3,     4,
       5,     6,    37,    50,    51,    62,    31,    53,    71,    50,
      59,    24,    18,    24,    24,    33,    72,    32,    71,    72,
      72,    38,    19,    20,    21,    22,    41,    42,    43,    44,
      45,    46,    47,    51,    65,    66,    67,    54,    71,    38,
      40,    24,    40,    32,    24,    32,    32,    34,    33,    71,
      75,    33,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    33,    39,    34,    39,    36,    39,     3,
       4,     5,     6,    33,    32,    33,    51,     3,    33,    39,
      34,    66,    50,    51,    71,    34,    33,    34,    25,    71,
      50,     3,    34,     3,    35,    25,    25,     3,    25,    14,
      17,    51,    56,    68,    69,    70,    74,    76,    77,    78,
      79,    35,    35,    25,    35,    40,    71,    24,    36,    56,
      70,    76,    40,    68,    68,    35,    68,    40,    71,    36,
      36,    68,    36,    40,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    52,    53,    54,
      54,    55,    55,    56,    56,    57,    58,    58,    59,    59,
      59,    59,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    65,    65,    65,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    78,    78,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    13,    12,    12,    11,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     3,     1,     4,     3,     3,
       1,     2,     1,     2,     2,     4,     3,     1,     1,     3,
       3,     3,     4,     3,     1,     3,     3,     3,     2,     1,
      12,     0,     3,     1,     3,     3,     1,     1,     2,     2,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     2,     1,     1,     4,     3,     3,     1,
       1,     1,     1,     4,     3,     2,     2
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
#line 112 "myparser.y" /* yacc.c:1646  */
    { 
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", (yyvsp[-12].crepr));
		printf("%s\n\n", (yyvsp[-11].crepr));
		printf("int main() {\n%s\n} \n", (yyvsp[-1].crepr));
	}
}
#line 1402 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 121 "myparser.y" /* yacc.c:1646  */
    { 
	// no data declaration
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", (yyvsp[-11].crepr));
		printf("int main() {\n%s\n} \n", (yyvsp[-1].crepr));
	}
}
#line 1416 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 130 "myparser.y" /* yacc.c:1646  */
    { 
	// no functions
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", (yyvsp[-11].crepr));
		printf("int main() {\n%s\n} \n", (yyvsp[-1].crepr));
	}
}
#line 1430 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 139 "myparser.y" /* yacc.c:1646  */
    { 
	// no data declaration
	// no functions
		if(yyerror_count==0) {
			puts(c_prologue); 
			printf("/* program */ \n\n");
			printf("int main() {\n%s\n} \n", (yyvsp[-1].crepr));
		}
}
#line 1444 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 155 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1450 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 156 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1456 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 157 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1462 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 158 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; }
#line 1468 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 159 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int*"; }
#line 1474 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 160 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double*"; }
#line 1480 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 161 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int*"; }
#line 1486 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char*"; }
#line 1492 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 167 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1498 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 168 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("*%s", (yyvsp[-2].crepr)); /* pointer */}
#line 1504 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 169 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1510 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 173 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); /* pinakas */}
#line 1516 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 177 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{%s}", (yyvsp[-1].crepr)); }
#line 1522 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 180 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1528 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 181 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1534 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 186 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1540 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 187 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1546 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 191 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("const %s", (yyvsp[0].crepr)); }
#line 1552 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 192 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1558 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 197 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1564 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 200 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1570 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 201 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1576 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 204 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1582 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 205 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1588 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 206 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1594 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 207 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1600 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 212 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1606 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 215 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1612 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 216 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1618 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 219 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1624 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 220 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1630 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 221 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1636 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 228 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1642 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1648 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 232 "myparser.y" /* yacc.c:1646  */
    {
	(yyval.crepr) = template("%s %s (%s) {\n%s\n}", (yyvsp[-4].crepr), (yyvsp[-10].crepr), (yyvsp[-7].crepr), (yyvsp[-1].crepr));
}
#line 1656 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 238 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1662 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 239 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1668 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 240 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1674 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 243 "myparser.y" /* yacc.c:1646  */
    {
	
	// save the strings
	char *param_list = strdup((yyvsp[-2].crepr));
	char *type_spec = strdup((yyvsp[0].crepr));

	// count the parameters
	int count = 0;
	int i = 0;
	while (param_list[i] != '\0') {
		if (param_list[i] == ',')
			count++;
		i++;
	}
	// ipologismos mege8ous telikou string kai malloc
	char *final_string = (char *) malloc(strlen(param_list) + (count * (strlen(type_spec) + 2)));

	// break string to individual parameters
	char *temp = strtok(param_list, ",");
	while( temp != NULL){

		// concat parameters with their types and create C format
		strcat(final_string, type_spec);
		strcat(final_string, " ");
		strcat(final_string, temp);
		//next ','
		temp = strtok(NULL, ",");
		// put ',' only if there is another parameter
		if( temp != NULL)
			strcat(final_string, ", ");
	}

	// return complete string
	(yyval.crepr) = strdup(final_string);
	free(final_string);
}
#line 1715 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 281 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1721 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 282 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1727 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 287 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1733 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 288 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1739 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 291 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n    %s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1745 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 292 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("    %s", (yyvsp[0].crepr)); }
#line 1751 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 295 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n    %s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1757 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 296 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("    %s", (yyvsp[0].crepr)); }
#line 1763 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 303 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1769 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 304 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1775 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 305 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1781 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 306 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1787 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 307 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1793 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 308 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1799 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 309 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1805 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 310 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1811 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 311 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1817 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 312 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1823 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 313 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1829 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 314 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1835 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 318 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1841 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 319 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1847 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 320 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1853 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 321 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1859 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 322 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1865 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 323 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1871 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 324 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1877 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 325 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr)); }
#line 1883 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 326 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1889 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 330 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "1"; }
#line 1895 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 331 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "0"; }
#line 1901 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 336 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1907 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 337 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s()", (yyvsp[-2].crepr)); }
#line 1913 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 340 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1919 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 341 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1925 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 348 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1931 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 349 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1937 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 350 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1943 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 355 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1949 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 369 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return %s;", (yyvsp[-1].crepr)); }
#line 1955 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 370 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "return;"; }
#line 1961 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 375 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 1967 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 1971 "myparser.tab.c" /* yacc.c:1646  */
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
#line 381 "myparser.y" /* yacc.c:1906  */

/**********************/
/****** epilogue ******/
/**********************/

int main () {

	if ( yyparse() != 0 )
		printf("Rejected!\n");
	else
		printf("\n/* Your program is syntactically correct!*/\n\n");

	free(line_buffer);
	
}

