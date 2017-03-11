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
#line 1 "src/thrift/thrifty.yy"

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * Thrift parser.
 *
 * This parser is used on a thrift definition file.
 *
 */

#define __STDC_LIMIT_MACROS
#define __STDC_FORMAT_MACROS
#include <stdio.h>
#ifndef _MSC_VER
#include <inttypes.h>
#else
#include <stdint.h>
#endif
#include <limits.h>
#ifdef _MSC_VER
#include "thrift/windows/config.h"
#endif
#include "thrift/main.h"
#include "thrift/common.h"
#include "thrift/globals.h"
#include "thrift/parse/t_program.h"
#include "thrift/parse/t_scope.h"

#ifdef _MSC_VER
//warning C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4065)
#endif

/**
 * This global variable is used for automatic numbering of field indices etc.
 * when parsing the members of a struct. Field values are automatically
 * assigned starting from -1 and working their way down.
 */
int y_field_val = -1;
/**
 * This global variable is used for automatic numbering of enum values.
 * y_enum_val is the last value assigned; the next auto-assigned value will be
 * y_enum_val+1, and then it continues working upwards.  Explicitly specified
 * enum values reset y_enum_val to that value.
 */
int32_t y_enum_val = -1;
int g_arglist = 0;
const int struct_is_struct = 0;
const int struct_is_union = 1;


/* Line 371 of yacc.c  */
#line 137 "src\\\\thrift\\\\thrifty.cc"

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
   by #include "thrifty.hh".  */
#ifndef YY_YY_SRC_THRIFT_THRIFTY_HH_INCLUDED
# define YY_YY_SRC_THRIFT_THRIFTY_HH_INCLUDED
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
     tok_identifier = 258,
     tok_literal = 259,
     tok_doctext = 260,
     tok_int_constant = 261,
     tok_dub_constant = 262,
     tok_include = 263,
     tok_namespace = 264,
     tok_cpp_include = 265,
     tok_cpp_type = 266,
     tok_xsd_all = 267,
     tok_xsd_optional = 268,
     tok_xsd_nillable = 269,
     tok_xsd_attrs = 270,
     tok_void = 271,
     tok_bool = 272,
     tok_string = 273,
     tok_binary = 274,
     tok_slist = 275,
     tok_senum = 276,
     tok_i8 = 277,
     tok_i16 = 278,
     tok_i32 = 279,
     tok_i64 = 280,
     tok_double = 281,
     tok_map = 282,
     tok_list = 283,
     tok_set = 284,
     tok_oneway = 285,
     tok_typedef = 286,
     tok_struct = 287,
     tok_xception = 288,
     tok_throws = 289,
     tok_extends = 290,
     tok_service = 291,
     tok_enum = 292,
     tok_const = 293,
     tok_required = 294,
     tok_optional = 295,
     tok_union = 296,
     tok_reference = 297
   };
#endif
/* Tokens.  */
#define tok_identifier 258
#define tok_literal 259
#define tok_doctext 260
#define tok_int_constant 261
#define tok_dub_constant 262
#define tok_include 263
#define tok_namespace 264
#define tok_cpp_include 265
#define tok_cpp_type 266
#define tok_xsd_all 267
#define tok_xsd_optional 268
#define tok_xsd_nillable 269
#define tok_xsd_attrs 270
#define tok_void 271
#define tok_bool 272
#define tok_string 273
#define tok_binary 274
#define tok_slist 275
#define tok_senum 276
#define tok_i8 277
#define tok_i16 278
#define tok_i32 279
#define tok_i64 280
#define tok_double 281
#define tok_map 282
#define tok_list 283
#define tok_set 284
#define tok_oneway 285
#define tok_typedef 286
#define tok_struct 287
#define tok_xception 288
#define tok_throws 289
#define tok_extends 290
#define tok_service 291
#define tok_enum 292
#define tok_const 293
#define tok_required 294
#define tok_optional 295
#define tok_union 296
#define tok_reference 297



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 74 "src/thrift/thrifty.yy"

  char*          id;
  int64_t        iconst;
  double         dconst;
  bool           tbool;
  t_doc*         tdoc;
  t_type*        ttype;
  t_base_type*   tbase;
  t_typedef*     ttypedef;
  t_enum*        tenum;
  t_enum_value*  tenumv;
  t_const*       tconst;
  t_const_value* tconstv;
  t_struct*      tstruct;
  t_service*     tservice;
  t_function*    tfunction;
  t_field*       tfield;
  char*          dtext;
  t_field::e_req ereq;
  t_annotation*  tannot;
  t_field_id     tfieldid;


/* Line 387 of yacc.c  */
#line 288 "src\\\\thrift\\\\thrifty.cc"
} YYSTYPE;
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

#endif /* !YY_YY_SRC_THRIFT_THRIFTY_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 316 "src\\\\thrift\\\\thrifty.cc"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   173

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,    43,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    45,
      54,    48,    55,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     8,    12,    13,    15,    20,
      24,    27,    30,    34,    35,    37,    39,    41,    43,    45,
      47,    49,    51,    53,    55,    56,    62,    69,    72,    73,
      78,    82,    84,    91,    94,    95,    98,   105,   107,   109,
     111,   113,   115,   117,   121,   125,   126,   130,   136,   137,
     139,   141,   149,   151,   152,   154,   155,   157,   158,   163,
     164,   171,   181,   182,   183,   186,   187,   190,   191,   202,
     204,   205,   210,   211,   214,   215,   228,   231,   232,   234,
     235,   237,   239,   240,   243,   244,   246,   248,   250,   252,
     254,   257,   259,   261,   263,   265,   267,   269,   271,   273,
     275,   278,   280,   282,   284,   292,   298,   304,   307,   308,
     312,   313,   316,   317,   321,   324
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    60,    63,    -1,    -1,    -1,    60,    59,
      61,    -1,    -1,    62,    -1,     9,     3,     3,   112,    -1,
       9,    43,     3,    -1,    10,     4,    -1,     8,     4,    -1,
      63,    58,    64,    -1,    -1,    75,    -1,    65,    -1,    88,
      -1,    67,    -1,    68,    -1,    72,    -1,    82,    -1,    87,
      -1,    44,    -1,    45,    -1,    -1,    31,   103,     3,   112,
      66,    -1,    37,     3,    46,    69,    47,   112,    -1,    69,
      70,    -1,    -1,    58,    71,   112,    66,    -1,     3,    48,
       6,    -1,     3,    -1,    21,     3,    46,    73,    47,   112,
      -1,    73,    74,    -1,    -1,     4,    66,    -1,    38,   103,
       3,    48,    76,    66,    -1,     6,    -1,     7,    -1,     4,
      -1,     3,    -1,    77,    -1,    79,    -1,    49,    78,    50,
      -1,    78,    76,    66,    -1,    -1,    46,    80,    47,    -1,
      80,    76,    51,    76,    66,    -1,    -1,    32,    -1,    41,
      -1,    81,     3,    83,    46,    96,    47,   112,    -1,    12,
      -1,    -1,    13,    -1,    -1,    14,    -1,    -1,    15,    46,
      96,    47,    -1,    -1,    33,     3,    46,    96,    47,   112,
      -1,    36,     3,    91,    46,    89,    92,    90,    47,   112,
      -1,    -1,    -1,    35,     3,    -1,    -1,    92,    93,    -1,
      -1,    58,    94,   102,     3,    52,    96,    53,    95,   112,
      66,    -1,    30,    -1,    -1,    34,    52,    96,    53,    -1,
      -1,    96,    97,    -1,    -1,    58,    98,   100,   103,    99,
       3,   101,    84,    85,    86,   112,    66,    -1,     6,    51,
      -1,    -1,    42,    -1,    -1,    39,    -1,    40,    -1,    -1,
      48,    76,    -1,    -1,   103,    -1,    16,    -1,     3,    -1,
     104,    -1,   106,    -1,   105,   112,    -1,    18,    -1,    19,
      -1,    20,    -1,    17,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,   107,   112,    -1,   108,    -1,
     109,    -1,   110,    -1,    27,   111,    54,   103,    44,   103,
      55,    -1,    29,   111,    54,   103,    55,    -1,    28,    54,
     103,    55,   111,    -1,    11,     4,    -1,    -1,    52,   113,
      53,    -1,    -1,   113,   114,    -1,    -1,     3,   115,    66,
      -1,    48,     4,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   242,   242,   254,   265,   274,   279,   284,   288,   300,
     308,   318,   331,   339,   344,   352,   367,   385,   392,   399,
     406,   413,   422,   424,   427,   430,   443,   471,   478,   485,
     499,   514,   526,   538,   545,   552,   559,   578,   587,   593,
     598,   604,   609,   616,   623,   630,   637,   644,   651,   658,
     662,   668,   683,   688,   693,   698,   703,   708,   713,   718,
     723,   737,   751,   756,   761,   774,   779,   786,   792,   807,
     812,   817,   827,   832,   842,   849,   883,   923,   933,   938,
     943,   947,   959,   964,   973,   978,   983,   990,  1009,  1014,
    1020,  1033,  1038,  1043,  1048,  1053,  1058,  1063,  1068,  1073,
    1079,  1090,  1095,  1100,  1107,  1117,  1127,  1138,  1143,  1148,
    1154,  1159,  1167,  1173,  1182,  1188
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tok_identifier", "tok_literal",
  "tok_doctext", "tok_int_constant", "tok_dub_constant", "tok_include",
  "tok_namespace", "tok_cpp_include", "tok_cpp_type", "tok_xsd_all",
  "tok_xsd_optional", "tok_xsd_nillable", "tok_xsd_attrs", "tok_void",
  "tok_bool", "tok_string", "tok_binary", "tok_slist", "tok_senum",
  "tok_i8", "tok_i16", "tok_i32", "tok_i64", "tok_double", "tok_map",
  "tok_list", "tok_set", "tok_oneway", "tok_typedef", "tok_struct",
  "tok_xception", "tok_throws", "tok_extends", "tok_service", "tok_enum",
  "tok_const", "tok_required", "tok_optional", "tok_union",
  "tok_reference", "'*'", "','", "';'", "'{'", "'}'", "'='", "'['", "']'",
  "':'", "'('", "')'", "'<'", "'>'", "$accept", "Program",
  "CaptureDocText", "DestroyDocText", "HeaderList", "Header", "Include",
  "DefinitionList", "Definition", "TypeDefinition",
  "CommaOrSemicolonOptional", "Typedef", "Enum", "EnumDefList", "EnumDef",
  "EnumValue", "Senum", "SenumDefList", "SenumDef", "Const", "ConstValue",
  "ConstList", "ConstListContents", "ConstMap", "ConstMapContents",
  "StructHead", "Struct", "XsdAll", "XsdOptional", "XsdNillable",
  "XsdAttributes", "Xception", "Service", "FlagArgs", "UnflagArgs",
  "Extends", "FunctionList", "Function", "Oneway", "Throws", "FieldList",
  "Field", "FieldIdentifier", "FieldReference", "FieldRequiredness",
  "FieldValue", "FunctionType", "FieldType", "BaseType", "SimpleBaseType",
  "ContainerType", "SimpleContainerType", "MapType", "SetType", "ListType",
  "CppType", "TypeAnnotations", "TypeAnnotationList", "TypeAnnotation",
  "TypeAnnotationValue", YY_NULL
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
     295,   296,   297,    42,    44,    59,   123,   125,    61,    91,
      93,    58,    40,    41,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    60,    60,    61,    61,    61,
      61,    62,    63,    63,    64,    64,    64,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    68,    69,    69,    70,
      71,    71,    72,    73,    73,    74,    75,    76,    76,    76,
      76,    76,    76,    77,    78,    78,    79,    80,    80,    81,
      81,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    88,    89,    90,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    97,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   107,   107,   107,   108,   109,   110,   111,   111,   112,
     112,   113,   113,   114,   115,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     3,     0,     1,     4,     3,
       2,     2,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     6,     2,     0,     4,
       3,     1,     6,     2,     0,     2,     6,     1,     1,     1,
       1,     1,     1,     3,     3,     0,     3,     5,     0,     1,
       1,     7,     1,     0,     1,     0,     1,     0,     4,     0,
       6,     9,     0,     0,     2,     0,     2,     0,    10,     1,
       0,     4,     0,     2,     0,    12,     2,     0,     1,     0,
       1,     1,     0,     2,     0,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     7,     5,     5,     2,     0,     3,
       0,     2,     0,     3,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    13,     1,     0,     3,     0,     0,     0,     5,
       7,     0,    11,     0,     0,    10,     0,     0,    49,     0,
       0,     0,     0,    50,    12,    15,    17,    18,    19,    14,
       0,    20,    21,    16,   110,     9,     0,    87,    94,    91,
      92,    93,    95,    96,    97,    98,    99,   108,     0,   108,
       0,    88,   110,    89,   110,   101,   102,   103,     0,    65,
       0,     0,    53,   112,     8,    34,     0,     0,     0,     0,
     110,    90,   100,    74,     0,     0,    28,     0,    52,     0,
       0,     0,   107,     0,     0,     0,    24,     3,    64,    62,
       3,     0,    74,   115,   109,   111,    24,   110,    33,     0,
     108,     0,    22,    23,    25,   110,    77,    73,    67,   110,
       0,    27,    40,    39,    37,    38,    48,    45,    24,    41,
      42,     3,     0,    24,    35,    32,     0,   106,   105,    60,
       0,    82,     3,    26,    31,   110,     0,     0,    36,   110,
     114,   113,     0,    76,    80,    81,     0,    70,     0,    66,
       0,    24,    46,     0,    43,    24,    51,   104,    79,    69,
       0,   110,    30,    29,     0,    44,    78,     0,    86,     0,
      85,    61,    24,    84,     0,    47,     0,    55,    74,    83,
      54,    57,     3,    56,    59,    72,     0,   110,     0,   110,
      74,    24,    74,    24,     3,    75,     3,    68,    58,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   106,     4,     2,     9,    10,     5,    24,    25,
     104,    26,    27,    90,   111,   135,    28,    81,    98,    29,
     118,   119,   137,   120,   136,    30,    31,    79,   181,   184,
     187,    32,    33,   108,   148,    75,   132,   149,   160,   189,
      87,   107,   131,   167,   146,   177,   169,    50,    51,    52,
      53,    54,    55,    56,    57,    67,    64,    80,    95,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
    -124,    15,     9,  -124,    26,    33,    35,    13,    36,  -124,
    -124,   132,  -124,    39,    40,  -124,    41,   123,  -124,    42,
      45,    46,   123,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
      61,  -124,  -124,  -124,    16,  -124,    19,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,    56,    18,    56,
      70,  -124,    16,  -124,    16,  -124,  -124,  -124,    29,    43,
      30,    74,    68,  -124,  -124,  -124,    77,    28,   123,    34,
      16,  -124,  -124,  -124,    80,    38,  -124,    44,  -124,    48,
       7,     3,  -124,   123,    32,   123,   -23,    49,  -124,  -124,
      50,    25,  -124,    47,  -124,  -124,   -23,    16,  -124,    55,
      56,    65,  -124,  -124,  -124,    16,    84,  -124,  -124,    16,
      98,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   -23,  -124,
    -124,    75,   117,   -23,  -124,  -124,   123,  -124,  -124,  -124,
      51,    -2,    76,  -124,    79,    16,     5,    20,  -124,    16,
    -124,  -124,    78,  -124,  -124,  -124,   123,    95,    82,  -124,
     124,   -23,  -124,    81,  -124,   -23,  -124,  -124,    89,  -124,
      90,    16,  -124,  -124,    25,  -124,  -124,   131,  -124,   133,
    -124,  -124,   -23,    87,    92,  -124,    25,   141,  -124,  -124,
    -124,   142,   102,  -124,   143,   125,   111,    16,   108,    16,
    -124,   -23,  -124,   -23,   114,  -124,   109,  -124,  -124,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -124,  -124,    -4,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
     -93,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -123,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
     -87,  -124,  -124,  -124,  -124,  -124,  -124,   -22,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,   -43,   -50,  -124,  -124,  -124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -64
static const yytype_int16 yytable[] =
{
      61,    11,    71,   124,    72,   121,    69,    96,   112,   113,
      93,   114,   115,   153,   155,     3,    13,    -4,    -4,    -4,
      86,   102,   103,   112,   113,   138,   114,   115,   112,   113,
     141,   114,   115,    -2,     6,     7,     8,   144,   145,    12,
      15,   172,    34,    35,    36,    58,    84,   125,    59,    60,
      97,   116,   152,   179,   117,   129,    14,   127,   163,   133,
      94,    99,   165,   101,    62,    65,   116,    66,    63,   117,
     154,   116,    68,    70,   117,    73,    76,    77,    74,   175,
      78,    82,    83,    88,    89,   151,   110,   100,    85,   156,
     130,   182,    91,    37,    92,   122,   105,   109,   195,   126,
     197,   134,   143,   194,   142,   196,   168,    38,    39,    40,
      41,   171,    42,    43,    44,    45,    46,    47,    48,    49,
     128,   140,   139,   -63,   158,   159,    37,   150,   147,   161,
     162,   166,   164,   157,   173,   176,   174,   191,   170,   193,
      38,    39,    40,    41,   178,    42,    43,    44,    45,    46,
      47,    48,    49,    16,   180,   185,   183,   190,   186,   188,
     192,   198,   199,    17,    18,    19,     0,     0,    20,    21,
      22,     0,     0,    23
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      22,     5,    52,    96,    54,    92,    49,     4,     3,     4,
       3,     6,     7,   136,   137,     0,     3,     8,     9,    10,
      70,    44,    45,     3,     4,   118,     6,     7,     3,     4,
     123,     6,     7,     0,     8,     9,    10,    39,    40,     4,
       4,   164,     3,     3,     3,     3,    68,    97,     3,     3,
      47,    46,    47,   176,    49,   105,    43,   100,   151,   109,
      53,    83,   155,    85,     3,    46,    46,    11,    52,    49,
      50,    46,    54,     3,    49,    46,    46,     3,    35,   172,
      12,     4,    54,     3,    46,   135,    90,    55,    54,   139,
       6,   178,    48,     3,    46,    48,    47,    47,   191,    44,
     193,     3,    51,   190,   126,   192,    16,    17,    18,    19,
      20,   161,    22,    23,    24,    25,    26,    27,    28,    29,
      55,     4,    47,    47,   146,    30,     3,    48,   132,    47,
       6,    42,    51,    55,     3,    48,     3,   187,   160,   189,
      17,    18,    19,    20,    52,    22,    23,    24,    25,    26,
      27,    28,    29,    21,    13,    53,    14,    46,    15,    34,
      52,    47,    53,    31,    32,    33,    -1,    -1,    36,    37,
      38,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    60,     0,    59,    63,     8,     9,    10,    61,
      62,    58,     4,     3,    43,     4,    21,    31,    32,    33,
      36,    37,    38,    41,    64,    65,    67,    68,    72,    75,
      81,    82,    87,    88,     3,     3,     3,     3,    17,    18,
      19,    20,    22,    23,    24,    25,    26,    27,    28,    29,
     103,   104,   105,   106,   107,   108,   109,   110,     3,     3,
       3,   103,     3,    52,   112,    46,    11,   111,    54,   111,
       3,   112,   112,    46,    35,    91,    46,     3,    12,    83,
     113,    73,     4,    54,   103,    54,   112,    96,     3,    46,
      69,    48,    46,     3,    53,   114,     4,    47,    74,   103,
      55,   103,    44,    45,    66,    47,    58,    97,    89,    47,
      58,    70,     3,     4,     6,     7,    46,    49,    76,    77,
      79,    96,    48,   115,    66,   112,    44,   111,    55,   112,
       6,    98,    92,   112,     3,    71,    80,    78,    66,    47,
       4,    66,   103,    51,    39,    40,   100,    58,    90,    93,
      48,   112,    47,    76,    50,    76,   112,    55,   103,    30,
      94,    47,     6,    66,    51,    66,    42,    99,    16,   102,
     103,   112,    76,     3,     3,    66,    48,   101,    52,    76,
      13,    84,    96,    14,    85,    53,    15,    86,    34,    95,
      46,   112,    52,   112,    96,    66,    96,    66,    47,    53
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
#line 243 "src/thrift/thrifty.yy"
    {
      pdebug("Program -> Headers DefinitionList");
      if((g_program_doctext_candidate != NULL) && (g_program_doctext_status != ALREADY_PROCESSED))
      {
        g_program->set_doc(g_program_doctext_candidate);
        g_program_doctext_status = ALREADY_PROCESSED;
      }
      clear_doctext();
    }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 254 "src/thrift/thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.dtext) = g_doctext;
        g_doctext = NULL;
      } else {
        (yyval.dtext) = NULL;
      }
    }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 265 "src/thrift/thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        clear_doctext();
      }
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 275 "src/thrift/thrifty.yy"
    {
      pdebug("HeaderList -> HeaderList Header");
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 279 "src/thrift/thrifty.yy"
    {
      pdebug("HeaderList -> ");
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 285 "src/thrift/thrifty.yy"
    {
      pdebug("Header -> Include");
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 289 "src/thrift/thrifty.yy"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_identifier");
      declare_valid_program_doctext();
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (4)].id), (yyvsp[(3) - (4)].id));
      }
      if ((yyvsp[(4) - (4)].ttype) != NULL) {
        g_program->set_namespace_annotations((yyvsp[(2) - (4)].id), (yyvsp[(4) - (4)].ttype)->annotations_);
        delete (yyvsp[(4) - (4)].ttype);
      }
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 301 "src/thrift/thrifty.yy"
    {
      pdebug("Header -> tok_namespace * tok_identifier");
      declare_valid_program_doctext();
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("*", (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 309 "src/thrift/thrifty.yy"
    {
      pdebug("Header -> tok_cpp_include tok_literal");
      declare_valid_program_doctext();
      if (g_parse_mode == PROGRAM) {
        g_program->add_cpp_include((yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 319 "src/thrift/thrifty.yy"
    {
      pdebug("Include -> tok_include tok_literal");
      declare_valid_program_doctext();
      if (g_parse_mode == INCLUDES) {
        std::string path = include_file(std::string((yyvsp[(2) - (2)].id)));
        if (!path.empty()) {
          g_program->add_include(path, std::string((yyvsp[(2) - (2)].id)));
        }
      }
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 332 "src/thrift/thrifty.yy"
    {
      pdebug("DefinitionList -> DefinitionList Definition");
      if ((yyvsp[(2) - (3)].dtext) != NULL && (yyvsp[(3) - (3)].tdoc) != NULL) {
        (yyvsp[(3) - (3)].tdoc)->set_doc((yyvsp[(2) - (3)].dtext));
      }
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 339 "src/thrift/thrifty.yy"
    {
      pdebug("DefinitionList -> ");
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 345 "src/thrift/thrifty.yy"
    {
      pdebug("Definition -> Const");
      if (g_parse_mode == PROGRAM) {
        g_program->add_const((yyvsp[(1) - (1)].tconst));
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tconst);
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 353 "src/thrift/thrifty.yy"
    {
      pdebug("Definition -> TypeDefinition");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_type((yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_type(g_parent_prefix + (yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        }
        if (! g_program->is_unique_typename((yyvsp[(1) - (1)].ttype))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[(1) - (1)].ttype)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 368 "src/thrift/thrifty.yy"
    {
      pdebug("Definition -> Service");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_service((yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_service(g_parent_prefix + (yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        }
        g_program->add_service((yyvsp[(1) - (1)].tservice));
        if (! g_program->is_unique_typename((yyvsp[(1) - (1)].tservice))) {
          yyerror("Type \"%s\" is already defined.", (yyvsp[(1) - (1)].tservice)->get_name().c_str());
          exit(1);
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tservice);
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 386 "src/thrift/thrifty.yy"
    {
      pdebug("TypeDefinition -> Typedef");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 393 "src/thrift/thrifty.yy"
    {
      pdebug("TypeDefinition -> Enum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_enum((yyvsp[(1) - (1)].tenum));
      }
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 400 "src/thrift/thrifty.yy"
    {
      pdebug("TypeDefinition -> Senum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 407 "src/thrift/thrifty.yy"
    {
      pdebug("TypeDefinition -> Struct");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 414 "src/thrift/thrifty.yy"
    {
      pdebug("TypeDefinition -> Xception");
      if (g_parse_mode == PROGRAM) {
        g_program->add_xception((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 423 "src/thrift/thrifty.yy"
    {}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 425 "src/thrift/thrifty.yy"
    {}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 427 "src/thrift/thrifty.yy"
    {}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 431 "src/thrift/thrifty.yy"
    {
      pdebug("TypeDef -> tok_typedef FieldType tok_identifier");
      validate_simple_identifier( (yyvsp[(3) - (5)].id));
      t_typedef *td = new t_typedef(g_program, (yyvsp[(2) - (5)].ttype), (yyvsp[(3) - (5)].id));
      (yyval.ttypedef) = td;
      if ((yyvsp[(4) - (5)].ttype) != NULL) {
        (yyval.ttypedef)->annotations_ = (yyvsp[(4) - (5)].ttype)->annotations_;
        delete (yyvsp[(4) - (5)].ttype);
      }
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 444 "src/thrift/thrifty.yy"
    {
      pdebug("Enum -> tok_enum tok_identifier { EnumDefList }");
      (yyval.tenum) = (yyvsp[(4) - (6)].tenum);
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.tenum)->set_name((yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tenum)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }

      // make constants for all the enum values
      if (g_parse_mode == PROGRAM) {
        const std::vector<t_enum_value*>& enum_values = (yyval.tenum)->get_constants();
        std::vector<t_enum_value*>::const_iterator c_iter;
        for (c_iter = enum_values.begin(); c_iter != enum_values.end(); ++c_iter) {
          std::string const_name = (yyval.tenum)->get_name() + "." + (*c_iter)->get_name();
          t_const_value* const_val = new t_const_value((*c_iter)->get_value());
          const_val->set_enum((yyval.tenum));
          g_scope->add_constant(const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          if (g_parent_scope != NULL) {
            g_parent_scope->add_constant(g_parent_prefix + const_name, new t_const(g_type_i32, (*c_iter)->get_name(), const_val));
          }
        }
      }
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 472 "src/thrift/thrifty.yy"
    {
      pdebug("EnumDefList -> EnumDefList EnumDef");
      (yyval.tenum) = (yyvsp[(1) - (2)].tenum);
      (yyval.tenum)->append((yyvsp[(2) - (2)].tenumv));
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 478 "src/thrift/thrifty.yy"
    {
      pdebug("EnumDefList -> ");
      (yyval.tenum) = new t_enum(g_program);
      y_enum_val = -1;
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 486 "src/thrift/thrifty.yy"
    {
      pdebug("EnumDef -> EnumValue");
      (yyval.tenumv) = (yyvsp[(2) - (4)].tenumv);
      if ((yyvsp[(1) - (4)].dtext) != NULL) {
        (yyval.tenumv)->set_doc((yyvsp[(1) - (4)].dtext));
      }
	  if ((yyvsp[(3) - (4)].ttype) != NULL) {
        (yyval.tenumv)->annotations_ = (yyvsp[(3) - (4)].ttype)->annotations_;
        delete (yyvsp[(3) - (4)].ttype);
      }
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 500 "src/thrift/thrifty.yy"
    {
      pdebug("EnumValue -> tok_identifier = tok_int_constant");
      if ((yyvsp[(3) - (3)].iconst) < INT32_MIN || (yyvsp[(3) - (3)].iconst) > INT32_MAX) {
        // Note: this used to be just a warning.  However, since thrift always
        // treats enums as i32 values, I'm changing it to a fatal error.
        // I doubt this will affect many people, but users who run into this
        // will have to update their thrift files to manually specify the
        // truncated i32 value that thrift has always been using anyway.
        failure("64-bit value supplied for enum %s will be truncated.", (yyvsp[(1) - (3)].id));
      }
      y_enum_val = static_cast<int32_t>((yyvsp[(3) - (3)].iconst));
      (yyval.tenumv) = new t_enum_value((yyvsp[(1) - (3)].id), y_enum_val);
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 515 "src/thrift/thrifty.yy"
    {
      pdebug("EnumValue -> tok_identifier");
      validate_simple_identifier( (yyvsp[(1) - (1)].id));
      if (y_enum_val == INT32_MAX) {
        failure("enum value overflow at enum %s", (yyvsp[(1) - (1)].id));
      }
      ++y_enum_val;
      (yyval.tenumv) = new t_enum_value((yyvsp[(1) - (1)].id), y_enum_val);
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 527 "src/thrift/thrifty.yy"
    {
      pdebug("Senum -> tok_senum tok_identifier { SenumDefList }");
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyval.ttypedef) = new t_typedef(g_program, (yyvsp[(4) - (6)].tbase), (yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.ttypedef)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 539 "src/thrift/thrifty.yy"
    {
      pdebug("SenumDefList -> SenumDefList SenumDef");
      (yyval.tbase) = (yyvsp[(1) - (2)].tbase);
      (yyval.tbase)->add_string_enum_val((yyvsp[(2) - (2)].id));
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 545 "src/thrift/thrifty.yy"
    {
      pdebug("SenumDefList -> ");
      (yyval.tbase) = new t_base_type("string", t_base_type::TYPE_STRING);
      (yyval.tbase)->set_string_enum(true);
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 553 "src/thrift/thrifty.yy"
    {
      pdebug("SenumDef -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (2)].id);
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 560 "src/thrift/thrifty.yy"
    {
      pdebug("Const -> tok_const FieldType tok_identifier = ConstValue");
      if (g_parse_mode == PROGRAM) {
        validate_simple_identifier( (yyvsp[(3) - (6)].id));
        g_scope->resolve_const_value((yyvsp[(5) - (6)].tconstv), (yyvsp[(2) - (6)].ttype));
        (yyval.tconst) = new t_const((yyvsp[(2) - (6)].ttype), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].tconstv));
        validate_const_type((yyval.tconst));

        g_scope->add_constant((yyvsp[(3) - (6)].id), (yyval.tconst));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_constant(g_parent_prefix + (yyvsp[(3) - (6)].id), (yyval.tconst));
        }
      } else {
        (yyval.tconst) = NULL;
      }
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 579 "src/thrift/thrifty.yy"
    {
      pdebug("ConstValue => tok_int_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_integer((yyvsp[(1) - (1)].iconst));
      if (!g_allow_64bit_consts && ((yyvsp[(1) - (1)].iconst) < INT32_MIN || (yyvsp[(1) - (1)].iconst) > INT32_MAX)) {
        pwarning(1, "64-bit constant \"%" PRIi64"\" may not work in all languages.\n", (yyvsp[(1) - (1)].iconst));
      }
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 588 "src/thrift/thrifty.yy"
    {
      pdebug("ConstValue => tok_dub_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_double((yyvsp[(1) - (1)].dconst));
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 594 "src/thrift/thrifty.yy"
    {
      pdebug("ConstValue => tok_literal");
      (yyval.tconstv) = new t_const_value((yyvsp[(1) - (1)].id));
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 599 "src/thrift/thrifty.yy"
    {
      pdebug("ConstValue => tok_identifier");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_identifier((yyvsp[(1) - (1)].id));
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 605 "src/thrift/thrifty.yy"
    {
      pdebug("ConstValue => ConstList");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 610 "src/thrift/thrifty.yy"
    {
      pdebug("ConstValue => ConstMap");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 617 "src/thrift/thrifty.yy"
    {
      pdebug("ConstList => [ ConstListContents ]");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 624 "src/thrift/thrifty.yy"
    {
      pdebug("ConstListContents => ConstListContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (3)].tconstv);
      (yyval.tconstv)->add_list((yyvsp[(2) - (3)].tconstv));
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 630 "src/thrift/thrifty.yy"
    {
      pdebug("ConstListContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_list();
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 638 "src/thrift/thrifty.yy"
    {
      pdebug("ConstMap => { ConstMapContents }");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 645 "src/thrift/thrifty.yy"
    {
      pdebug("ConstMapContents => ConstMapContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (5)].tconstv);
      (yyval.tconstv)->add_map((yyvsp[(2) - (5)].tconstv), (yyvsp[(4) - (5)].tconstv));
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 651 "src/thrift/thrifty.yy"
    {
      pdebug("ConstMapContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_map();
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 659 "src/thrift/thrifty.yy"
    {
      (yyval.iconst) = struct_is_struct;
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 663 "src/thrift/thrifty.yy"
    {
      (yyval.iconst) = struct_is_union;
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 669 "src/thrift/thrifty.yy"
    {
      pdebug("Struct -> tok_struct tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[(2) - (7)].id));
      (yyvsp[(5) - (7)].tstruct)->set_xsd_all((yyvsp[(3) - (7)].tbool));
      (yyvsp[(5) - (7)].tstruct)->set_union((yyvsp[(1) - (7)].iconst) == struct_is_union);
      (yyval.tstruct) = (yyvsp[(5) - (7)].tstruct);
      (yyval.tstruct)->set_name((yyvsp[(2) - (7)].id));
      if ((yyvsp[(7) - (7)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(7) - (7)].ttype)->annotations_;
        delete (yyvsp[(7) - (7)].ttype);
      }
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 684 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 688 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 694 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 698 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 704 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 708 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 714 "src/thrift/thrifty.yy"
    {
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 718 "src/thrift/thrifty.yy"
    {
      (yyval.tstruct) = NULL;
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 724 "src/thrift/thrifty.yy"
    {
      pdebug("Xception -> tok_xception tok_identifier { FieldList }");
      validate_simple_identifier( (yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_name((yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_xception(true);
      (yyval.tstruct) = (yyvsp[(4) - (6)].tstruct);
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 738 "src/thrift/thrifty.yy"
    {
      pdebug("Service -> tok_service tok_identifier { FunctionList }");
      validate_simple_identifier( (yyvsp[(2) - (9)].id));
      (yyval.tservice) = (yyvsp[(6) - (9)].tservice);
      (yyval.tservice)->set_name((yyvsp[(2) - (9)].id));
      (yyval.tservice)->set_extends((yyvsp[(3) - (9)].tservice));
      if ((yyvsp[(9) - (9)].ttype) != NULL) {
        (yyval.tservice)->annotations_ = (yyvsp[(9) - (9)].ttype)->annotations_;
        delete (yyvsp[(9) - (9)].ttype);
      }
    }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 751 "src/thrift/thrifty.yy"
    {
       g_arglist = 1;
    }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 756 "src/thrift/thrifty.yy"
    {
       g_arglist = 0;
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 762 "src/thrift/thrifty.yy"
    {
      pdebug("Extends -> tok_extends tok_identifier");
      (yyval.tservice) = NULL;
      if (g_parse_mode == PROGRAM) {
        (yyval.tservice) = g_scope->get_service((yyvsp[(2) - (2)].id));
        if ((yyval.tservice) == NULL) {
          yyerror("Service \"%s\" has not been defined.", (yyvsp[(2) - (2)].id));
          exit(1);
        }
      }
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 774 "src/thrift/thrifty.yy"
    {
      (yyval.tservice) = NULL;
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 780 "src/thrift/thrifty.yy"
    {
      pdebug("FunctionList -> FunctionList Function");
      (yyval.tservice) = (yyvsp[(1) - (2)].tservice);
      (yyvsp[(1) - (2)].tservice)->add_function((yyvsp[(2) - (2)].tfunction));
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 786 "src/thrift/thrifty.yy"
    {
      pdebug("FunctionList -> ");
      (yyval.tservice) = new t_service(g_program);
    }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 793 "src/thrift/thrifty.yy"
    {
      validate_simple_identifier( (yyvsp[(4) - (10)].id));
      (yyvsp[(6) - (10)].tstruct)->set_name(std::string((yyvsp[(4) - (10)].id)) + "_args");
      (yyval.tfunction) = new t_function((yyvsp[(3) - (10)].ttype), (yyvsp[(4) - (10)].id), (yyvsp[(6) - (10)].tstruct), (yyvsp[(8) - (10)].tstruct), (yyvsp[(2) - (10)].tbool));
      if ((yyvsp[(1) - (10)].dtext) != NULL) {
        (yyval.tfunction)->set_doc((yyvsp[(1) - (10)].dtext));
      }
      if ((yyvsp[(9) - (10)].ttype) != NULL) {
        (yyval.tfunction)->annotations_ = (yyvsp[(9) - (10)].ttype)->annotations_;
        delete (yyvsp[(9) - (10)].ttype);
      }
    }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 808 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 812 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 818 "src/thrift/thrifty.yy"
    {
      pdebug("Throws -> tok_throws ( FieldList )");
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
      if (g_parse_mode == PROGRAM && !validate_throws((yyval.tstruct))) {
        yyerror("Throws clause may not contain non-exception types");
        exit(1);
      }
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 827 "src/thrift/thrifty.yy"
    {
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 833 "src/thrift/thrifty.yy"
    {
      pdebug("FieldList -> FieldList , Field");
      (yyval.tstruct) = (yyvsp[(1) - (2)].tstruct);
      if (!((yyval.tstruct)->append((yyvsp[(2) - (2)].tfield)))) {
        yyerror("\"%d: %s\" - field identifier/name has already been used", (yyvsp[(2) - (2)].tfield)->get_key(), (yyvsp[(2) - (2)].tfield)->get_name().c_str());
        exit(1);
      }
    }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 842 "src/thrift/thrifty.yy"
    {
      pdebug("FieldList -> ");
      y_field_val = -1;
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 850 "src/thrift/thrifty.yy"
    {
      pdebug("tok_int_constant : Field -> FieldType tok_identifier");
      if ((yyvsp[(2) - (12)].tfieldid).auto_assigned) {
        pwarning(1, "No field key specified for %s, resulting protocol may have conflicts or not be backwards compatible!\n", (yyvsp[(6) - (12)].id));
        if (g_strict >= 192) {
          yyerror("Implicit field keys are deprecated and not allowed with -strict");
          exit(1);
        }
      }
      validate_simple_identifier((yyvsp[(6) - (12)].id));
      (yyval.tfield) = new t_field((yyvsp[(4) - (12)].ttype), (yyvsp[(6) - (12)].id), (yyvsp[(2) - (12)].tfieldid).value);
      (yyval.tfield)->set_reference((yyvsp[(5) - (12)].tbool));
      (yyval.tfield)->set_req((yyvsp[(3) - (12)].ereq));
      if ((yyvsp[(7) - (12)].tconstv) != NULL) {
        g_scope->resolve_const_value((yyvsp[(7) - (12)].tconstv), (yyvsp[(4) - (12)].ttype));
        validate_field_value((yyval.tfield), (yyvsp[(7) - (12)].tconstv));
        (yyval.tfield)->set_value((yyvsp[(7) - (12)].tconstv));
      }
      (yyval.tfield)->set_xsd_optional((yyvsp[(8) - (12)].tbool));
      (yyval.tfield)->set_xsd_nillable((yyvsp[(9) - (12)].tbool));
      if ((yyvsp[(1) - (12)].dtext) != NULL) {
        (yyval.tfield)->set_doc((yyvsp[(1) - (12)].dtext));
      }
      if ((yyvsp[(10) - (12)].tstruct) != NULL) {
        (yyval.tfield)->set_xsd_attrs((yyvsp[(10) - (12)].tstruct));
      }
      if ((yyvsp[(11) - (12)].ttype) != NULL) {
        (yyval.tfield)->annotations_ = (yyvsp[(11) - (12)].ttype)->annotations_;
        delete (yyvsp[(11) - (12)].ttype);
      }
    }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 884 "src/thrift/thrifty.yy"
    {
      if ((yyvsp[(1) - (2)].iconst) <= 0) {
        if (g_allow_neg_field_keys) {
          /*
           * g_allow_neg_field_keys exists to allow users to add explicitly
           * specified key values to old .thrift files without breaking
           * protocol compatibility.
           */
          if ((yyvsp[(1) - (2)].iconst) != y_field_val) {
            /*
             * warn if the user-specified negative value isn't what
             * thrift would have auto-assigned.
             */
            pwarning(1, "Nonpositive field key (%" PRIi64") differs from what would be "
                     "auto-assigned by thrift (%d).\n", (yyvsp[(1) - (2)].iconst), y_field_val);
          }
          /*
           * Leave $1 as-is, and update y_field_val to be one less than $1.
           * The FieldList parsing will catch any duplicate key values.
           */
          y_field_val = static_cast<int32_t>((yyvsp[(1) - (2)].iconst) - 1);
          (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).auto_assigned = false;
        } else {
          pwarning(1, "Nonpositive value (%d) not allowed as a field key.\n",
                   (yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).value = y_field_val--;
          (yyval.tfieldid).auto_assigned = true;
        }
      } else {
        (yyval.tfieldid).value = static_cast<int32_t>((yyvsp[(1) - (2)].iconst));
        (yyval.tfieldid).auto_assigned = false;
      }
      if( (SHRT_MIN > (yyval.tfieldid).value) || ((yyval.tfieldid).value > SHRT_MAX)) {
        pwarning(1, "Field key (%d) exceeds allowed range (%d..%d).\n",
                 (yyval.tfieldid).value, SHRT_MIN, SHRT_MAX);
      }
    }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 923 "src/thrift/thrifty.yy"
    {
      (yyval.tfieldid).value = y_field_val--;
      (yyval.tfieldid).auto_assigned = true;
      if( (SHRT_MIN > (yyval.tfieldid).value) || ((yyval.tfieldid).value > SHRT_MAX)) {
        pwarning(1, "Field key (%d) exceeds allowed range (%d..%d).\n",
                 (yyval.tfieldid).value, SHRT_MIN, SHRT_MAX);
      }
    }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 934 "src/thrift/thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 938 "src/thrift/thrifty.yy"
    {
     (yyval.tbool) = false;
   }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 944 "src/thrift/thrifty.yy"
    {
      (yyval.ereq) = t_field::T_REQUIRED;
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 948 "src/thrift/thrifty.yy"
    {
      if (g_arglist) {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "optional keyword is ignored in argument lists.\n");
        }
        (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
      } else {
        (yyval.ereq) = t_field::T_OPTIONAL;
      }
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 959 "src/thrift/thrifty.yy"
    {
      (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 965 "src/thrift/thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.tconstv) = (yyvsp[(2) - (2)].tconstv);
      } else {
        (yyval.tconstv) = NULL;
      }
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 973 "src/thrift/thrifty.yy"
    {
      (yyval.tconstv) = NULL;
    }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 979 "src/thrift/thrifty.yy"
    {
      pdebug("FunctionType -> FieldType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 984 "src/thrift/thrifty.yy"
    {
      pdebug("FunctionType -> tok_void");
      (yyval.ttype) = g_type_void;
    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 991 "src/thrift/thrifty.yy"
    {
      pdebug("FieldType -> tok_identifier");
      if (g_parse_mode == INCLUDES) {
        // Ignore identifiers in include mode
        (yyval.ttype) = NULL;
      } else {
        // Lookup the identifier in the current scope
        (yyval.ttype) = g_scope->get_type((yyvsp[(1) - (1)].id));
        if ((yyval.ttype) == NULL) {
          /*
           * Either this type isn't yet declared, or it's never
             declared.  Either way allow it and we'll figure it out
             during generation.
           */
          (yyval.ttype) = new t_typedef(g_program, (yyvsp[(1) - (1)].id), true);
        }
      }
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 1010 "src/thrift/thrifty.yy"
    {
      pdebug("FieldType -> BaseType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1015 "src/thrift/thrifty.yy"
    {
      pdebug("FieldType -> ContainerType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1021 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> SimpleBaseType TypeAnnotations");
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype) = new t_base_type(*static_cast<t_base_type*>((yyvsp[(1) - (2)].ttype)));
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      } else {
        (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      }
    }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 1034 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_string");
      (yyval.ttype) = g_type_string;
    }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 1039 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_binary");
      (yyval.ttype) = g_type_binary;
    }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 1044 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_slist");
      (yyval.ttype) = g_type_slist;
    }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 1049 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_bool");
      (yyval.ttype) = g_type_bool;
    }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1054 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_i8");
      (yyval.ttype) = g_type_i8;
    }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1059 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_i16");
      (yyval.ttype) = g_type_i16;
    }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1064 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_i32");
      (yyval.ttype) = g_type_i32;
    }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1069 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_i64");
      (yyval.ttype) = g_type_i64;
    }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 1074 "src/thrift/thrifty.yy"
    {
      pdebug("BaseType -> tok_double");
      (yyval.ttype) = g_type_double;
    }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 1080 "src/thrift/thrifty.yy"
    {
      pdebug("ContainerType -> SimpleContainerType TypeAnnotations");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      }
    }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 1091 "src/thrift/thrifty.yy"
    {
      pdebug("SimpleContainerType -> MapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 1096 "src/thrift/thrifty.yy"
    {
      pdebug("SimpleContainerType -> SetType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 1101 "src/thrift/thrifty.yy"
    {
      pdebug("SimpleContainerType -> ListType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 1108 "src/thrift/thrifty.yy"
    {
      pdebug("MapType -> tok_map <FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(4) - (7)].ttype), (yyvsp[(6) - (7)].ttype));
      if ((yyvsp[(2) - (7)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(2) - (7)].id)));
      }
    }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 1118 "src/thrift/thrifty.yy"
    {
      pdebug("SetType -> tok_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[(4) - (5)].ttype));
      if ((yyvsp[(2) - (5)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(2) - (5)].id)));
      }
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 1128 "src/thrift/thrifty.yy"
    {
      pdebug("ListType -> tok_list<FieldType>");
      check_for_list_of_bytes((yyvsp[(3) - (5)].ttype));
      (yyval.ttype) = new t_list((yyvsp[(3) - (5)].ttype));
      if ((yyvsp[(5) - (5)].id) != NULL) {
        ((t_container*)(yyval.ttype))->set_cpp_name(std::string((yyvsp[(5) - (5)].id)));
      }
    }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 1139 "src/thrift/thrifty.yy"
    {
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 1143 "src/thrift/thrifty.yy"
    {
      (yyval.id) = NULL;
    }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 1149 "src/thrift/thrifty.yy"
    {
      pdebug("TypeAnnotations -> ( TypeAnnotationList )");
      (yyval.ttype) = (yyvsp[(2) - (3)].ttype);
    }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 1154 "src/thrift/thrifty.yy"
    {
      (yyval.ttype) = NULL;
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 1160 "src/thrift/thrifty.yy"
    {
      pdebug("TypeAnnotationList -> TypeAnnotationList , TypeAnnotation");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      (yyval.ttype)->annotations_[(yyvsp[(2) - (2)].tannot)->key] = (yyvsp[(2) - (2)].tannot)->val;
      delete (yyvsp[(2) - (2)].tannot);
    }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 1167 "src/thrift/thrifty.yy"
    {
      /* Just use a dummy structure to hold the annotations. */
      (yyval.ttype) = new t_struct(g_program);
    }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 1174 "src/thrift/thrifty.yy"
    {
      pdebug("TypeAnnotation -> TypeAnnotationValue");
      (yyval.tannot) = new t_annotation;
      (yyval.tannot)->key = (yyvsp[(1) - (3)].id);
      (yyval.tannot)->val = (yyvsp[(2) - (3)].id);
    }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 1183 "src/thrift/thrifty.yy"
    {
      pdebug("TypeAnnotationValue -> = tok_literal");
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1188 "src/thrift/thrifty.yy"
    {
      pdebug("TypeAnnotationValue ->");
      (yyval.id) = strdup("1");
    }
    break;


/* Line 1792 of yacc.c  */
#line 2991 "src\\\\thrift\\\\thrifty.cc"
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
#line 1193 "src/thrift/thrifty.yy"

