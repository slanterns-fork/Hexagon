#include "HexagonInterpreter.hh"
#include "Hexagon.tab.hh"
#include "Hexagon.hh"

HexagonInterpreter::HexagonIntepreter(){
}

int HexagonInterpreter::parse(std::string const &f){
    file = f;
    auto parser = new yy::HexagonParser(*this);
    int res = parser->parse();
    return res;
}

int HexagonInterpreter::lineno(){
    return _lineno;
}
