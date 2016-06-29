#ifndef HEXAGON_INTEPRETER_HH_INCLUDED
#define HEXAGON_INTEPRETER_HH_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include "Hexagon.tab.hh"

class HexagonIntepreter{
public:
    HexagonIntepreter();
    int lineno();
    int parse(std::string const&);
    std::string file;
    void error
    (const yy::HexagonParser::location_type&,const std::string&);
private:
    int _lineno;
};

#endif /* end of include guard: HEXAGON_INTEPRETER_HH_INCLUDED */
