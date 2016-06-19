%{
#include "Hexagon.hh"
%}

%token  SEMICOLON COMMA DOT ARROW GREATER LESS ASSIGN LP RP LS RS LC RC
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
    | Expression LP ParameterList RP
    | Expression LS Expression RS
    | IMPORT Identifier
    | CONSTRUCT
    | Function
    | Identifier
    | VariableDeclare
    | Expression SEMICOLON Expression
    | Expression DOT Identifier
    ;

DeclareArea
    : %empty
    | DeclareArea Declaration SEMICOLON
    ;

Declaration
    : CLASS Packet Identifier ASSIGN ClassBody
    | MODULE Packet Identifier ASSIGN ClassBody
    | NAMESPACE Identifier ASSIGN NamespaceBody
    | VariableDeclare
    ;

VariableDeclare
    : Identifier Identifier
    | CONST Identifier ASSIGN Expression
    | VAR Identifier ASSIGN Expression
    ;

Identifier
    : IDENTIFIER
    | IDENTIFIER Packet
    ;

Packet
    : %empty
    | LESS PacketList GREATER
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
    : LP ParameterList RP
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
