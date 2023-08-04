flags=-Wall #-Wshadow
program=main

all: $(program)

$(program): main.o Retangulo.o
	g++ -o $(program) main.o Retangulo.o $(flags)

main.o: main.cpp
	g++ -c main.cpp $(flags)

Retangulo.o: Retangulo.hpp Retangulo.cpp
	g++ -c Retangulo.cpp $(flags)

clean:
	rm -f *.o *.gch

purge:
	rm -f *.o *.gch $(program)
