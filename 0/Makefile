CC = clang++ -std=c++11 -Wall -Wextra
OBJS = Hexagon.o Hexagon.tab.o HexagonInterpreter.o

all: $(OBJS)
	$(CC) -o Hexagon.exe $(OBJS)

Hexagon.tab.cc: Hexagon.yy
	bison -dv Hexagon.yy

Hexagon.tab.hh: Hexagon.yy
	bison -dv Hexagon.yy

Hexagon.o: Hexagon.tab.o
	$(CC) -c Hexagon.cc

lex.yy.cc: Hexagon.tab.hh Hexagon.tab.cc Hexagon.ll
	flex Hexagon.ll

Hexagon.tab.o: Hexagon.tab.cc Hexagon.tab.hh
	$(CC) -c Hexagon.tab.cc

HexagonInterpreter.o: lex.yy.cc
	$(CC) -c HexagonIntepreter.cc Hexagon.hh
