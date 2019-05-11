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
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

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
       0,   118,   118,   127,   136,   145,   161,   162,   163,   164,
     165,   166,   167,   168,   173,   174,   175,   179,   183,   186,
     187,   192,   193,   197,   198,   203,   206,   207,   210,   211,
     212,   217,   220,   221,   224,   225,   232,   233,   236,   241,
     242,   243,   246,   284,   285,   290,   291,   294,   295,   298,
     299,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   334,   335,   340,   341,   344,   345,   352,
     353,   354,   355,   356,   361,   366,   368,   373,   409,   415,
     416,   421
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
  "bool", "func_call", "func_stm", "instr", "instr_assigment",
  "instr_control", "stmt", "instr_loop", "return", "instr_func_call", YY_NULLPTR
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

#define YYPACT_NINF -190

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-190)))

#define YYTABLE_NINF -45

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    26,   -14,    34,    92,  -190,    13,  -190,    19,    15,
      99,  -190,  -190,   -16,  -190,   122,  -190,   104,  -190,  -190,
      61,  -190,    71,    63,  -190,    78,   103,    86,     9,   -14,
     180,     9,   -14,   123,    65,   124,   132,   125,   234,  -190,
    -190,  -190,  -190,    88,  -190,   234,  -190,   234,   234,  -190,
     119,    56,  -190,  -190,   234,   234,  -190,  -190,  -190,  -190,
    -190,  -190,   134,   135,   137,  -190,  -190,  -190,   138,  -190,
     130,   153,   147,   148,   149,  -190,   197,   152,  -190,  -190,
    -190,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   115,    41,  -190,   121,    48,  -190,   165,  -190,
     180,  -190,   154,   150,   155,   -14,   178,  -190,  -190,    55,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   156,   -14,     9,   -14,  -190,   234,  -190,  -190,
    -190,  -190,   159,   161,   162,  -190,   170,  -190,   234,     9,
    -190,  -190,  -190,  -190,   183,   163,   195,   166,  -190,   175,
     177,   201,   188,    75,   179,   181,   192,   184,   234,   234,
     -14,   214,   194,  -190,   196,    75,    43,   191,  -190,  -190,
    -190,  -190,  -190,  -190,    75,    75,   198,    75,   226,   223,
    -190,   207,   234,  -190,  -190,    43,  -190,  -190,   200,   212,
      75,   213,    43,    43,  -190,   210,   211,  -190,   216,  -190,
      43,   127,   240,  -190,  -190,  -190,    43,   218,   219,   257,
    -190,  -190,   228,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    22,     0,    37,     0,    14,
       0,    16,    23,     0,    33,    28,    24,     0,    27,     1,
       0,    21,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    73,    74,    14,    65,     0,    15,     0,     0,    67,
       0,    62,    66,    68,    39,     0,    35,    34,     6,     7,
       8,     9,     0,     0,     0,    32,    30,    29,     0,    26,
       0,     0,     0,     0,     0,    72,     0,     0,    71,    70,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,     0,    41,     0,     0,    20,     0,    31,
       0,    25,     0,     0,     0,    39,     0,    76,    78,     0,
      69,    59,    58,    60,    61,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,    18,     0,    10,    11,
      12,    13,     0,     0,     0,    44,     0,    75,     0,     0,
      40,    42,    43,    19,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    45,     0,    50,    80,
      81,    82,    83,    79,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     5,    47,    46,    49,    91,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     4,     0,     3,
      87,     0,     0,    84,    38,     2,     0,     0,     0,     0,
      86,    88,     0,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,   -28,    -1,  -190,   239,  -190,  -190,     2,  -190,
    -190,   238,  -190,  -190,   242,   268,     3,  -190,   151,  -190,
     -24,  -190,  -155,   -19,    11,  -190,  -145,  -190,  -161,  -190,
    -190,  -189,  -190,  -190,  -190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    63,    49,    11,    56,    96,     4,   163,    16,
      17,    18,    12,    13,    14,     6,     7,    93,    94,    95,
     164,   165,   166,    57,    51,    52,    53,   109,   168,   169,
     170,   201,   171,   172,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    15,     5,    68,   202,   186,    21,    50,   167,    24,
     185,    67,    58,    59,    60,    61,     9,   209,    28,    10,
     167,   167,    36,    29,   186,    24,    77,    23,    64,   167,
     167,    15,   167,    36,    19,    77,    97,   200,   200,   186,
     167,     1,     2,    25,     8,   167,    62,   167,   167,    75,
     158,   200,    26,    92,   159,   167,     9,   108,    78,    79,
     161,   167,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    43,   122,    81,    82,    83,    84,    33,
     123,    35,   158,    71,   126,    34,   159,   127,   137,   160,
       2,     9,   161,     9,   138,     9,   141,    85,    86,    87,
      88,    89,    90,    91,   135,    43,    20,     2,   143,    38,
      37,   149,    39,    40,    41,    42,    43,    44,    54,   148,
      76,    55,   135,    27,   142,    26,    38,    47,    48,    39,
      40,    41,    42,    43,    44,    45,   206,   207,    31,   178,
     179,    46,   181,    32,    47,    48,    30,    70,    72,   -44,
     188,   189,   162,   191,   -44,   124,    73,    80,    74,    64,
     125,   100,   102,   195,   162,   162,   198,   184,   128,   129,
     130,   131,    98,   162,   162,    99,   162,   103,   101,   104,
     105,   136,   133,   106,   162,   110,   150,   132,   134,   162,
     139,   162,   162,   144,   145,   147,   146,   151,   152,   162,
     154,   153,   155,    38,   156,   162,    39,    40,    41,    42,
      43,    44,    45,   157,   174,    55,   175,   176,   182,   177,
      38,    47,    48,    39,    40,    41,    42,    43,    44,    45,
     107,   187,   183,   190,   192,   193,   196,    38,    47,    48,
      39,    40,    41,    42,    43,    44,    45,   194,   197,   199,
     203,   204,   205,   208,   180,    47,    48,    38,   210,   211,
      39,    40,    41,    42,    43,    44,    45,   212,   213,    66,
      69,    65,    22,     0,   140,    47,    48
};

static const yytype_int16 yycheck[] =
{
       1,     2,     0,    31,   193,   166,     4,    26,   153,     6,
     165,    30,     3,     4,     5,     6,    30,   206,    34,    20,
     165,   166,    23,    39,   185,    22,    45,    14,    29,   174,
     175,    32,   177,    34,     0,    54,    55,   192,   193,   200,
     185,    14,    15,    24,    18,   190,    37,   192,   193,    38,
       7,   206,    37,    54,    11,   200,    30,    76,    47,    48,
      17,   206,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    30,    33,    19,    20,    21,    22,    18,
      39,    18,     7,    18,    36,    14,    11,    39,    33,    14,
      15,    30,    17,    30,    39,    30,   124,    41,    42,    43,
      44,    45,    46,    47,   105,    30,    14,    15,   127,    23,
      32,   139,    26,    27,    28,    29,    30,    31,    32,   138,
      32,    35,   123,    24,   125,    37,    23,    41,    42,    26,
      27,    28,    29,    30,    31,    32,     9,    10,    34,   158,
     159,    38,   161,    39,    41,    42,    24,    24,    24,    34,
     174,   175,   153,   177,    39,    34,    24,    38,    33,   160,
      39,    24,    32,   182,   165,   166,   190,   165,     3,     4,
       5,     6,    38,   174,   175,    40,   177,    24,    40,    32,
      32,     3,    32,    34,   185,    33,     3,    33,    33,   190,
      34,   192,   193,    34,    33,    25,    34,    34,     3,   200,
      25,    35,    25,    23,     3,   206,    26,    27,    28,    29,
      30,    31,    32,    25,    35,    35,    35,    25,    24,    35,
      23,    41,    42,    26,    27,    28,    29,    30,    31,    32,
      33,    40,    36,    35,     8,    12,    36,    23,    41,    42,
      26,    27,    28,    29,    30,    31,    32,    40,    36,    36,
      40,    40,    36,    13,    40,    41,    42,    23,    40,    40,
      26,    27,    28,    29,    30,    31,    32,    10,    40,    30,
      32,    29,     4,    -1,   123,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    49,    55,    56,    63,    64,    18,    30,
      51,    52,    60,    61,    62,    51,    57,    58,    59,     0,
      14,    56,    63,    14,    64,    24,    37,    24,    34,    39,
      24,    34,    39,    18,    14,    18,    51,    32,    23,    26,
      27,    28,    29,    30,    31,    32,    38,    41,    42,    51,
      71,    72,    73,    74,    32,    35,    53,    71,     3,     4,
       5,     6,    37,    50,    51,    62,    53,    71,    50,    59,
      24,    18,    24,    24,    33,    72,    32,    71,    72,    72,
      38,    19,    20,    21,    22,    41,    42,    43,    44,    45,
      46,    47,    51,    65,    66,    67,    54,    71,    38,    40,
      24,    40,    32,    24,    32,    32,    34,    33,    71,    75,
      33,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    33,    39,    34,    39,    36,    39,     3,     4,
       5,     6,    33,    32,    33,    51,     3,    33,    39,    34,
      66,    50,    51,    71,    34,    33,    34,    25,    71,    50,
       3,    34,     3,    35,    25,    25,     3,    25,     7,    11,
      14,    17,    51,    56,    68,    69,    70,    74,    76,    77,
      78,    80,    81,    82,    35,    35,    25,    35,    71,    71,
      40,    71,    24,    36,    56,    70,    76,    40,    68,    68,
      35,    68,     8,    12,    40,    71,    36,    36,    68,    36,
      70,    79,    79,    40,    40,    36,     9,    10,    13,    79,
      40,    40,    10,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    52,    53,    54,
      54,    55,    55,    56,    56,    57,    58,    58,    59,    59,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    65,
      65,    65,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    77,    78,    78,    79,    80,    81,
      81,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    13,    12,    12,    11,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     3,     1,     4,     3,     3,
       1,     2,     1,     2,     2,     4,     3,     1,     1,     3,
       3,     4,     3,     1,     3,     3,     2,     1,    13,     0,
       3,     1,     3,     3,     1,     1,     2,     2,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     2,     1,     1,     4,     3,     3,     1,     1,
       1,     1,     1,     1,     4,     8,     6,     1,     6,     3,
       2,     2
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
#line 118 "myparser.y" /* yacc.c:1646  */
    { 
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", (yyvsp[-12].crepr));
		printf("%s\n\n", (yyvsp[-11].crepr));
		printf("int main() {\n%s\n} \n", (yyvsp[-1].crepr));
	}
}
#line 1415 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 127 "myparser.y" /* yacc.c:1646  */
    { 
	// no data declaration
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", (yyvsp[-11].crepr));
		printf("int main() {\n%s\n}\n", (yyvsp[-1].crepr));
	}
}
#line 1429 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 136 "myparser.y" /* yacc.c:1646  */
    { 
	// no functions
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", (yyvsp[-11].crepr));
		printf("int main() {\n%s\n}\n", (yyvsp[-1].crepr));
	}
}
#line 1443 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 145 "myparser.y" /* yacc.c:1646  */
    { 
	// no data declaration
	// no functions
		if(yyerror_count==0) {
			puts(c_prologue); 
			printf("/* program */ \n\n");
			printf("int main() {\n%s\n}\n", (yyvsp[-1].crepr));
		}
}
#line 1457 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1463 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 162 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1469 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 163 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1475 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 164 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; }
#line 1481 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 165 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int*"; }
#line 1487 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 166 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double*"; }
#line 1493 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 167 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int*"; }
#line 1499 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 168 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char*"; }
#line 1505 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1511 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 174 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("*%s", (yyvsp[-2].crepr)); /* pointer */}
#line 1517 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 175 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1523 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 179 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); /* pinakas */}
#line 1529 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("{%s}", (yyvsp[-1].crepr)); }
#line 1535 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 186 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1541 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 187 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1547 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 192 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1553 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1559 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 197 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("const %s", (yyvsp[0].crepr)); }
#line 1565 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 198 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1571 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 203 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1577 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 206 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1583 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 207 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1589 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 210 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1595 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 211 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1601 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 212 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1607 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 217 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1613 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 220 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1619 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 221 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1625 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 224 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1631 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 225 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1637 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 232 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1643 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 233 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1649 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 237 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n}", (yyvsp[-5].crepr), (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr)); }
#line 1655 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 241 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1661 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 242 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1667 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 243 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1673 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 246 "myparser.y" /* yacc.c:1646  */
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
#line 1714 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 284 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1720 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 285 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1726 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 290 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1732 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 291 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1738 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 294 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n    %s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1744 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("    %s", (yyvsp[0].crepr)); }
#line 1750 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 298 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n    %s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1756 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 299 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("    %s", (yyvsp[0].crepr)); }
#line 1762 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 306 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1768 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 307 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1774 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 308 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1780 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 309 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1786 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 310 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %% %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1792 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 311 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1798 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 312 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1804 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 313 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1810 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 314 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1816 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 315 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1822 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 316 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1828 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 317 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1834 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 321 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1840 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 322 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1846 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 323 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1852 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 324 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1858 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 325 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1864 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 326 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1870 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 327 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1876 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 328 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1882 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 329 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr)); }
#line 1888 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 330 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1894 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 334 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "1"; }
#line 1900 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 335 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "0"; }
#line 1906 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 340 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1912 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 341 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s()", (yyvsp[-2].crepr)); }
#line 1918 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 344 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1924 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 345 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1930 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 352 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1936 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 353 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1942 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 354 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1948 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 355 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1954 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 356 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1960 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 361 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1966 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 367 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s) {\n%s    }\n    else {\n%s    }\n", (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-2].crepr)); }
#line 1972 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 369 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s) {\n%s    }\n", (yyvsp[-4].crepr), (yyvsp[-2].crepr)); }
#line 1978 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 373 "myparser.y" /* yacc.c:1646  */
    {
	
	// save the strings
	char *statement = strdup((yyvsp[0].crepr));

	// count lines. There is at least one.
	int count = 1;
	int i = 0;
	while (statement[i] != '\0') {
		if (statement[i] == '\n')
			count++;
		i++;
	}
	// ipologismos mege8ous telikou string kai malloc
	char *final_string = (char *) malloc(strlen(statement) + (count * 4));

	// break string to individual parameters
	char *temp = strtok(statement, "\n");
	while( temp != NULL){

		// concat parameters with their types and create C format
		strcat(final_string, "    ");
		strcat(final_string, temp);
		strcat(final_string, "\n");
		//next line
		temp = strtok(NULL, "\n");
	}

	// return complete string
	(yyval.crepr) = strdup(final_string);
	free(final_string);
}
#line 2015 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 410 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("while (%s) {\n%s    }\n", (yyvsp[-4].crepr), (yyvsp[-2].crepr)); }
#line 2021 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 415 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return %s;", (yyvsp[-1].crepr)); }
#line 2027 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 416 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "return;"; }
#line 2033 "myparser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 421 "myparser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 2039 "myparser.tab.c" /* yacc.c:1646  */
    break;


#line 2043 "myparser.tab.c" /* yacc.c:1646  */
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
#line 427 "myparser.y" /* yacc.c:1906  */

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

