flags=-Wall
program=main

all: $(program)

$(program): main.o Pessoa.o Disciplina.o Curso.o
	g++ -o $(program) main.o Pessoa.o Disciplina.o Curso.o $(flags)

main.o: main.cpp
	g++ -c main.cpp $(flags)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(flags)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	g++ -c Disciplina.cpp $(flags)

Curso.o:  Curso.hpp Curso.cpp
	g++ -c Curso.cpp $(flags)

clean:
	rm -f *.o *.gch

purge:
	rm -f *.o *.gch $(program)
