#include "Hexagon.h"

void
yyerror(char const *str)
{
    char *near_token;

    if (yytext[0] == '\0') {
        near_token = "EOF";
    } else {
        near_token = yytext;
    }
    crb_compile_error(PARSE_ERR,
                      STRING_MESSAGE_ARGUMENT, "token", near_token,
                      MESSAGE_ARGUMENT_END);

    return 0;
}
