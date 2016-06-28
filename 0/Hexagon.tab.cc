// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 1 "Hexagon.yy" // lalr1.cc:404

    #include "HexagonInterpreter.hh"
    #include "Hexagon.hh"

#line 41 "Hexagon.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "Hexagon.tab.hh"

// User implementation prologue.

#line 55 "Hexagon.tab.cc" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 141 "Hexagon.tab.cc" // lalr1.cc:479

  /// Build a parser object.
  HexagonParser::HexagonParser (HexagonIntepreter& intepreter_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      intepreter (intepreter_yyarg)
  {}

  HexagonParser::~HexagonParser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  HexagonParser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  HexagonParser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  HexagonParser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  HexagonParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  HexagonParser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  HexagonParser::symbol_number_type
  HexagonParser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  HexagonParser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  HexagonParser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  HexagonParser::stack_symbol_type&
  HexagonParser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  HexagonParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  HexagonParser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  HexagonParser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  HexagonParser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  HexagonParser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  HexagonParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  HexagonParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  HexagonParser::debug_level_type
  HexagonParser::debug_level () const
  {
    return yydebug_;
  }

  void
  HexagonParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline HexagonParser::state_type
  HexagonParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  HexagonParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  HexagonParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  HexagonParser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 23 "Hexagon.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &interpeter.file;
}

#line 377 "Hexagon.tab.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (intepreter));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {

#line 485 "Hexagon.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  HexagonParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  HexagonParser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char HexagonParser::yypact_ninf_ = -75;

  const signed char HexagonParser::yytable_ninf_ = -30;

  const short int
  HexagonParser::yypact_[] =
  {
     148,   -21,   -21,   -75,   -21,     4,     4,   -21,   -75,   -21,
     -21,   -75,   -75,     4,   -75,   -75,   -75,    25,   -75,   -75,
     -21,    10,   -75,   -75,   -75,   -75,    14,    13,     8,     0,
       9,   -75,   -75,   -21,   -21,    17,    18,    36,   -75,   -75,
     148,   -21,   -21,   148,    49,   -21,    39,   -75,   -21,   -21,
     -21,   -75,   -21,   -75,    46,    48,    44,   148,   148,    65,
     -75,   -21,    56,    55,    26,   -75,    62,   148,   -75,   -75,
     -75,   -75,     8,   -21,     4,     4,   -75,    59,    66,   125,
     -75,   -75,   -21,   -75,   -75,    51,   -75,    70,    79,    82,
      68,   -75,    96,   126,   -21,   -75,    20,   -75,   -75,   -75,
     -75,   -75,   -21,   -75,   -75,    77,    94,   -75,    20,   -75
  };

  const unsigned char
  HexagonParser::yydefact_[] =
  {
       2,    33,     0,     8,     0,     0,     0,     0,    14,     0,
       0,     4,     5,    30,     3,     7,     6,     0,    20,    17,
      16,     0,    15,     9,    10,    35,     0,    34,    45,     0,
       0,    48,    13,     0,     0,     0,     0,     0,    31,     1,
       2,     0,    39,     2,     0,    39,     0,    32,     0,     0,
       0,    44,     0,    47,     0,     0,     0,     2,     2,    18,
      19,     0,     0,    40,     0,    27,     0,     2,    37,    36,
      50,    46,     0,     0,     0,     0,    21,     0,     0,     0,
      41,    11,     0,    12,    38,     0,    49,     0,     0,     0,
       0,    25,     2,     2,     0,    43,    53,    23,    24,    51,
      22,    26,     0,    42,    55,     0,    54,    52,     0,    56
  };

  const signed char
  HexagonParser::yypgoto_[] =
  {
     -75,     7,   -75,    12,   -74,    -1,     5,   -75,   -75,   -75,
     -75,    53,   -75,   -75,   -75,   -75,   -75,   -75,   -50,   -75,
      24,   -75,   -75
  };

  const signed char
  HexagonParser::yydefgoto_[] =
  {
      -1,    59,    90,    18,    19,    20,    21,    26,    27,    22,
      46,    62,    63,    68,    23,    29,    24,    30,    31,    77,
      88,   105,   106
  };

  const signed char
  HexagonParser::yytable_[] =
  {
      25,    28,    73,    32,    50,    13,    35,    17,    36,    37,
      33,    34,     1,    52,    49,    51,   101,    48,    38,    44,
      45,    47,   104,    86,    53,    39,    56,    57,    40,    40,
      41,    41,    54,    55,   109,    42,    42,    43,    43,    83,
      60,    61,     9,    10,    61,    58,    13,    69,    70,    71,
      64,    72,    65,    67,    40,    74,    41,    75,    76,    82,
      80,    42,    91,    43,    78,    79,    95,    81,    40,    92,
      41,    41,    72,    84,    85,    42,    42,    43,    43,    87,
      87,    94,    97,    99,    96,    98,     5,     6,     7,   102,
       9,    10,   107,   103,    13,   102,   -29,   108,    66,    89,
       0,    44,   100,     0,     1,     0,     0,   102,     0,   -29,
       2,   -29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   -28,     0,    93,     0,
      41,     0,     0,     0,     1,    42,     0,    43,     0,   -28,
       2,   -28,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     1,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16
  };

  const signed char
  HexagonParser::yycheck_[] =
  {
       1,     2,    52,     4,     4,    26,     7,     0,     9,    10,
       5,     6,     8,     4,     6,    15,    90,     4,    13,    20,
      10,     7,    96,    73,    15,     0,     9,     9,     3,     3,
       5,     5,    33,    34,   108,    10,    10,    12,    12,    13,
      41,    42,    22,    23,    45,     9,    26,    48,    49,    50,
      43,    52,     3,    14,     3,     9,     5,     9,    14,     4,
      61,    10,     3,    12,    57,    58,    15,    11,     3,     3,
       5,     5,    73,    11,    67,    10,    10,    12,    12,    74,
      75,    82,     3,    15,    14,     3,    18,    19,    20,    90,
      22,    23,    15,    94,    26,    96,     0,     3,    45,    75,
      -1,   102,    90,    -1,     8,    -1,    -1,   108,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    -1,     3,    -1,
       5,    -1,    -1,    -1,     8,    10,    -1,    12,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29
  };

  const unsigned char
  HexagonParser::yystos_[] =
  {
       0,     8,    14,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    31,    33,    34,
      35,    36,    39,    44,    46,    35,    37,    38,    35,    45,
      47,    48,    35,    36,    36,    35,    35,    35,    36,     0,
       3,     5,    10,    12,    35,    10,    40,     7,     4,     6,
       4,    15,     4,    15,    35,    35,     9,     9,     9,    31,
      35,    35,    41,    42,    31,     3,    41,    14,    43,    35,
      35,    35,    35,    48,     9,     9,    14,    49,    31,    31,
      35,    11,     4,    13,    11,    31,    48,    36,    50,    50,
      32,     3,     3,     3,    35,    15,    14,     3,     3,    15,
      33,    34,    35,    35,    34,    51,    52,    15,     3,    34
  };

  const unsigned char
  HexagonParser::yyr1_[] =
  {
       0,    30,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    32,    32,    33,    33,    33,    33,    34,    34,    34,
      35,    35,    36,    37,    37,    38,    38,    39,    40,    41,
      41,    42,    42,    43,    44,    45,    45,    46,    47,    47,
      48,    49,    50,    51,    51,    52,    52
  };

  const unsigned char
  HexagonParser::yyr2_[] =
  {
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     2,     1,     1,     1,     1,     3,     3,
       1,     0,     2,     6,     6,     5,     1,     3,     5,     5,
       1,     2,     3,     0,     1,     1,     3,     3,     3,     0,
       1,     2,     4,     3,     3,     1,     3,     3,     1,     4,
       3,     3,     4,     0,     1,     1,     3
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const HexagonParser::yytname_[] =
  {
  "$end", "error", "$undefined", "SEMICOLON", "COMMA", "DOT", "ARROW",
  "GREATER", "LESS", "ASSIGN", "LB", "RB", "LS", "RS", "LC", "RC",
  "NULLEXP", "IMPORT", "CLASS", "MODULE", "NAMESPACE", "CONSTRUCT", "VAR",
  "CONST", "TRUEEXP", "FALSEEXP", "IDENTIFIER", "INTEGER", "REAL",
  "STRING", "$accept", "Expression", "DeclareArea", "Declaration",
  "VariableDeclare", "Identifier", "Packet", "PacketList", "PacketItems",
  "Function", "FunctionHead", "ParameterList", "ParameterItems",
  "FunctionBody", "Array", "ArrayItems", "Dictionary", "DictionaryItems",
  "DictionaryItem", "NamespaceBody", "ClassBody", "MembersDeclareArea",
  "MemberItems", YY_NULLPTR
  };


  const unsigned char
  HexagonParser::yyrline_[] =
  {
       0,    36,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    58,    59,    63,    64,    65,    66,    70,    71,    72,
      76,    77,    81,    85,    86,    90,    91,    95,    99,   103,
     104,   108,   109,   113,   117,   121,   122,   126,   130,   131,
     135,   139,   143,   147,   148,   152,   153
  };

  // Print the state stack on the debug stream.
  void
  HexagonParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  HexagonParser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 850 "Hexagon.tab.cc" // lalr1.cc:1167
#line 156 "Hexagon.yy" // lalr1.cc:1168

