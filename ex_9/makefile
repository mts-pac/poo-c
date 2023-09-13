flags=-Wall
program=main

all: $(program)

$(program): main.o Pessoa.o Disciplina.o Curso.o SalaAula.o ConteudoMinistrado.o Console.o
	g++ -o $(program) main.o Pessoa.o Disciplina.o Curso.o SalaAula.o ConteudoMinistrado.o Console.o $(flags)

main.o: main.cpp
	g++ -c main.cpp $(flags)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(flags)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	g++ -c Disciplina.cpp $(flags)

Curso.o: Curso.hpp Curso.cpp
	g++ -c Curso.cpp $(flags)

SalaAula.o: SalaAula.hpp SalaAula.cpp
	g++ -c SalaAula.cpp $(flags)

ConteudoMinistrado.o: ConteudoMinistrado.hpp ConteudoMinistrado.cpp
	g++ -c ConteudoMinistrado.cpp $(flags)

Console.o: Console.hpp Console.cpp
	g++ -c Console.cpp $(flags)

clean:
	rm -f *.o *.gch

purge:
	rm -f *.o *.gch $(program)
