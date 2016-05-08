%{
    #include "Hexagon.hh"
    #include "y.tab.hh"
%}
%%
[" "\n\t]
reservedWord    ;
                |,
                |\.
                |->
                |>
                |<
                |=
                |\(
                |\)
                |\[
                |\]
                |\{
                |\}
                |"null"
                |"import"
                |"class"
                |"module"
                |"namespace"
                |"construct"
                |"var"
                |"const"
identifier [A-Za-z_][A-Za-z0-9_]*
%%
