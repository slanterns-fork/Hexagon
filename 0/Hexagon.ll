%{
    #include "Hexagon.hh"
    #include "Hexagon.tab.hh"
    #include <string>

    int line = 1;
%}

%option c++
%option noyywrap

%start STR LINECOMMENT BLOCKCOMMENT

%%
<INITIAL>";"            return yy::HexagonParser::token::yytokentype::SEMICOLON;
<INITIAL>","            return yy::HexagonParser::token::yytokentype::COMMA;
<INITIAL>"."            return yy::HexagonParser::token::yytokentype::DOT;
<INITIAL>"->"           return yy::HexagonParser::token::yytokentype::ARROW;
<INITIAL>">"            return yy::HexagonParser::token::yytokentype::GREATER;
<INITIAL>"<"            return yy::HexagonParser::token::yytokentype::LESS;
<INITIAL>"="            return yy::HexagonParser::token::yytokentype::ASSIGN;
<INITIAL>"("            return yy::HexagonParser::token::yytokentype::LB;
<INITIAL>")"            return yy::HexagonParser::token::yytokentype::RB;
<INITIAL>"["            return yy::HexagonParser::token::yytokentype::LS;
<INITIAL>"]"            return yy::HexagonParser::token::yytokentype::RS;
<INITIAL>"{"            return yy::HexagonParser::token::yytokentype::LC;
<INITIAL>"}"            return yy::HexagonParser::token::yytokentype::RC;
<INITIAL>"null"         return yy::HexagonParser::token::yytokentype::NULLEXP;
<INITIAL>"import"       return yy::HexagonParser::token::yytokentype::IMPORT;
<INITIAL>"class"        return yy::HexagonParser::token::yytokentype::CLASS;
<INITIAL>"module"       return yy::HexagonParser::token::yytokentype::MODULE;
<INITIAL>"namespace"    return yy::HexagonParser::token::yytokentype::NAMESPACE;
<INITIAL>"construct"    return yy::HexagonParser::token::yytokentype::CONSTRUCT;
<INITIAL>"var"          return yy::HexagonParser::token::yytokentype::VAR;
<INITIAL>"const"        return yy::HexagonParser::token::yytokentype::CONST;
<INITIAL>"true"         return yy::HexagonParser::token::yytokentype::TRUEEXP;
<INITIAL>"false"        return yy::HexagonParser::token::yytokentype::FALSEEXP;
<INITIAL>"\""           BEGIN STR;
<INITIAL>"//"           BEGIN LINECOMMENT;
<INITIAL>"/*"           BEGIN BLOCKCOMMENT;
<INITIAL>[ \t]          ;
<INITIAL>(\r\n)|(\n\r)|\r|\n      {line++;}
<INITIAL>.              std::cout << "Bad Input:\"" << yytext[0] << "\"" << std::endl;

<INITIAL>[A-Za-z_][A-Za-z0-9_]*                 return yy::HexagonParser::token::yytokentype::IDENTIFIER;
<INITIAL>(\+|-)?[1-9][0-9]*|0                   return yy::HexagonParser::token::yytokentype::INTEGER;
<INITIAL>(\+|-)?([1-9][0-9]*|0)?(\.[0-9]*){1,2} return yy::HexagonParser::token::yytokentype::REAL;

<STR>.
