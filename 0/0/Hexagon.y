%{
    #include "Hexagon.h"
    int yyerror(const char*);
    int yylex(void);
%}

%token SEMICOLON COMMA DOT ARROW GREATER LESS ASSIGN LB RB LS RS LC RC
        NULLEXP IMPORT CLASS MODULE NAMESPACE CONSTRUCT VAR CONST TRUEEXP FALSEEXP IDENTIFIER INTEGER REAL STRING

%%

Expression
    : %empty
    | INTEGER
    | TRUEEXP
    | FALSEEXP
    | STRING
    | REAL
    | NULLEXP
    | Array
    | Dictionary
    | Expression LB ParameterList RB
    | Expression LS Expression RS
    | IMPORT Identifier
    | CONSTRUCT
    | Function
    | Identifier
    | VariableDeclare
    | Expression SEMICOLON Expression
    | Expression DOT Identifier
    | Declaration
    ;

DeclareArea
    : %empty
    | DeclareArea Declaration
    ;

Declaration
    : CLASS Packet Identifier ASSIGN ClassBody SEMICOLON
    | MODULE Packet Identifier ASSIGN ClassBody SEMICOLON
    | NAMESPACE Identifier ASSIGN NamespaceBody SEMICOLON
    | VariableDeclare
    ;

VariableDeclare
    : Identifier Identifier SEMICOLON
    | CONST Identifier ASSIGN Expression SEMICOLON
    | VAR Identifier ASSIGN Expression SEMICOLON
    ;

Identifier
    : IDENTIFIER
    | IDENTIFIER Packet
    ;

Packet
    : LESS PacketList GREATER
    ;

PacketList
    : %empty
    | PacketItems
    ;

PacketItems
    : Identifier
    | PacketItems COMMA Identifier
    ;

Function
    : Packet FunctionHead FunctionBody
    ;

FunctionHead
    : LB ParameterList RB
    ;

ParameterList
    : %empty
    | ParameterItems
    ;

ParameterItems
    : Identifier Identifier
    | ParameterItems COMMA Identifier Identifier
    ;

FunctionBody
    : LC Expression RC
    ;

Array
    : LC ArrayItems RC
    ;

ArrayItems
    : Identifier
    | ArrayItems COMMA Identifier
    ;

Dictionary
    : LC DictionaryItems RC
    ;

DictionaryItems
    : DictionaryItem
    | DictionaryItems COMMA DictionaryItem DictionaryItem
    ;

DictionaryItem
    : Identifier ARROW Identifier
    ;

NamespaceBody
    : LC DeclareArea RC
    ;

ClassBody
    : Packet LC MembersDeclareArea RC
    ;

MembersDeclareArea
    : %empty
    | MemberItems
    ;

MemberItems
    : VariableDeclare
    | MemberItems SEMICOLON VariableDeclare
    ;

%%

int yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
