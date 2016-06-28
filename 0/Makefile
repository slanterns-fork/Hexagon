CC = clang++ -std=c++11 -Wall -Wextra

all: HexagonInterpreter.o
	$(CC) -o Hexagon.exe Hexagon.cc

clean:
	rm -f *.o lex.yy.c y.tab.c y.tab.h *~

Hexagon.tab.cc: Hexagon.yy
	bison -dv Hexagon.yy

Hexagon.tab.hh: Hexagon.yy
	bison -dv Hexagon.yy

lex.yy.cc: Hexagon.tab.hh Hexagon.tab.cc Hexagon.ll
	flex Hexagon.ll

HexagonInterpreter.o: lex.yy.cc
	$(CC) -c HexagonIntepreter.cc Hexagon.hh
