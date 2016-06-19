#ifndef HEXAGON_H_INCLUDED
#define HEXAGON_H_INCLUDED

#include <iostream>
#include <fstream>
#include "Hexagon.tab.hh"
#include "lex.yy.cc"
#include "HexagonInterpreter.hh"


#define MAX(a, b) ((a) < (b)? (a) : (b))
#define MIN(a, b) ((a) > (b)? (a) : (b))

enum class Errors {
    UNEXPECTED_INPUT
};

class HexagonInterpreter;

#endif /* end of include guard: HEXAGON_H_INCLUDED */
