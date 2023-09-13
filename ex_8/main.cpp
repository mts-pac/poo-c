#include <cstdint>
#include <iostream>
#include <list>

#include "Curso.hpp"
#include "SalaAula.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Curso* bcc{new Curso};
  SalaAula sala{"Lab Info 1", 20};
  Pessoa prof1{"Joao", 11111111111, 40};
  Pessoa prof2{"Maria", 22222222222, 30};
  Disciplina dis1{"Orientacao a Objetos", (*bcc), &sala};
  Disciplina dis2{"Sistemas Operacionais", (*bcc), &sala};

  dis1.setProfessor(&prof1);
  dis2.setProfessor(&prof2);

  std::list<Disciplina*> dis{sala.getDisciplinas()};
  std::list<Disciplina*>::iterator it{dis.begin()};

  for (; it != dis.end(); ++it) std::cout << (*it)->getNome() << '\n';

  delete bcc;
  return 0;
}