flags=-Wall #-Wshadow
program=main

all: $(program)

$(program): main.o Pessoa.o Disciplina.o
	g++ -o $(program) main.o Pessoa.o Disciplina.o $(flags)

main.o: main.cpp
	g++ -c main.cpp $(flags)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(flags)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	g++ -c Disciplina.cpp $(flags)

clean:
	rm -f *.o *.gch

purge:
	rm -f *.o *.gch $(program)
