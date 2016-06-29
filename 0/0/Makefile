CC = clang
OBJS = Hexagon.o Hexagon.tab.o lex.yy.o

all: clean $(OBJS)
	$(CC) -o Hexagon.exe $(OBJS)

clean:
	rm *.tab.* *.o

Hexagon.tab.c: Hexagon.y
	bison -dv Hexagon.y

Hexagon.tab.h: Hexagon.y
	bison -dv Hexagon.y

Hexagon.o: Hexagon.tab.o
	$(CC) -c Hexagon.c

lex.yy.cc: Hexagon.tab.h Hexagon.tab.c Hexagon.l
	flex Hexagon.l

Hexagon.tab.o: Hexagon.tab.c Hexagon.tab.h
	$(CC) -c Hexagon.tab.c

HexagonIntepreter.o: lex.yy.o
	$(CC) -c HexagonIntepreter.c Hexagon.h

lex.yy.o: lex.yy.cc
	$(CC) -c lex.yy.c
