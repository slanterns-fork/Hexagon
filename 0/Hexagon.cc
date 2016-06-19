#include "Hexagon.hh"

std::ifstream *input;

int main(int argc, char *argv[]){
    if(argc < 2){
        std::cout << "usage: Hexagon <filename> ..." << std::endl;
        std::cout << "<filename>: Hexagon source file name" << std::endl;
        return 1;
    }
    auto main = new HexagonInterpreter();

    std::string const &input = std::string(argv[1]);
    std::cout << main->parse(input) << std::endl;
    return 0;
}
