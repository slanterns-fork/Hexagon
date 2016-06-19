#ifndef HEXAGON_INTEPRETER_HH_INCLUDED
#define HEXAGON_INTEPRETER_HH_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include "Hexagon.tab.hh"

class HexagonInterpreter{
public:
    HexagonIntepreter();
    int lineno();
    int parse(std::string const&);
private:
    int _lineno;
    std::string file;
};

#endif /* end of include guard: HEXAGON_INTEPRETER_HH_INCLUDED */
