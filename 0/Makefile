all: HexagonInterpreter.o
	g++ -std=c++11 -o Hexagon.exe Hexagon.cc

clean:
	rm -f *.o lex.yy.c y.tab.c y.tab.h *~

Hexagon.tab.cc: Hexagon.yy
	bison -dv Hexagon.yy

Hexagon.tab.hh: Hexagon.yy
	bison -dv Hexagon.yy

lex.yy.cc: Hexagon.tab.hh Hexagon.tab.cc Hexagon.ll
	flex Hexagon.ll

HexagonInterpreter.o: lex.yy.cc
	g++ -std=c++11 -c HexagonInterpreter.cc Hexagon.hh
