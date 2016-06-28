#include "HexagonIntepreter.hh"
#include "Hexagon.tab.hh"
#include "Hexagon.hh"

HexagonIntepreter::HexagonIntepreter(){
}

int HexagonIntepreter::parse(std::string const &f){
    file = f;
    auto parser = new yy::HexagonParser(*this);
    int res = parser->parse();
    return res;
}

int HexagonIntepreter::lineno(){
    return _lineno;
}
