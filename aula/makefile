flags=-Wall #-Wshadow
program=main

all: $(program)

$(program): main.o Pessoa.o
	g++ -o $(program) main.o Pessoa.o $(flags)

main.o: main.cpp
	g++ -c main.cpp $(flags)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(flags)

clean:
	rm -f *.o *.gch

purge:
	rm -f *.o *.gch $(program)
