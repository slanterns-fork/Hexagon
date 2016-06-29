%{
    #include <stdio.h>
    #include "Hexagon.h"
    #include "Hexagon.tab.h"
%}

%option noyywrap

%start STR LINECOMMENT BLOCKCOMMENT

%%
<INITIAL>";"            return SEMICOLON;
<INITIAL>","            return COMMA;
<INITIAL>"."            return DOT;
<INITIAL>"->"           return ARROW;
<INITIAL>">"            return GREATER;
<INITIAL>"<"            return LESS;
<INITIAL>"="            return ASSIGN;
<INITIAL>"("            return LB;
<INITIAL>")"            return RB;
<INITIAL>"["            return LS;
<INITIAL>"]"            return RS;
<INITIAL>"{"            return LC;
<INITIAL>"}"            return RC;
<INITIAL>"null"         return NULLEXP;
<INITIAL>"import"       return IMPORT;
<INITIAL>"class"        return CLASS;
<INITIAL>"module"       return MODULE;
<INITIAL>"namespace"    return NAMESPACE;
<INITIAL>"construct"    return CONSTRUCT;
<INITIAL>"var"          return VAR;
<INITIAL>"const"        return CONST;
<INITIAL>"true"         return TRUEEXP;
<INITIAL>"false"        return FALSEEXP;
<INITIAL>"\""           BEGIN STR;
<INITIAL>"//"           BEGIN LINECOMMENT;
<INITIAL>"/*"           BEGIN BLOCKCOMMENT;
<INITIAL>[ \t]          ;
<INITIAL>(\r\n)|(\n\r)|\r|\n    ;
<INITIAL>.              printf("Bad Input:\" %s \"",yytext);

<INITIAL>[A-Za-z_][A-Za-z0-9_]*                 return IDENTIFIER;
<INITIAL>(\+|-)?[1-9][0-9]*|0                   return INTEGER;
<INITIAL>(\+|-)?([1-9][0-9]*|0)?(\.[0-9]*){1,2} return REAL;

<STR>.
