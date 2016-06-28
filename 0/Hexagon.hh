#ifndef HEXAGON_H_INCLUDED
#define HEXAGON_H_INCLUDED

#include <iostream>
#include <fstream>
#include "Hexagon.tab.hh"
#include "lex.yy.cc"
#include "HexagonIntepreter.hh"


#define MAX(a, b) ((a) < (b)? (a) : (b))
#define MIN(a, b) ((a) > (b)? (a) : (b))

enum class Errors {
    UNEXPECTED_INPUT
};

#endif /* end of include guard: HEXAGON_H_INCLUDED */
