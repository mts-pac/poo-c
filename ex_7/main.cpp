#include <cstdint>
#include <iostream>
#include <list>

#include "Curso.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Curso* bcc{new Curso};
  Disciplina* poo_c{new Disciplina{(*bcc), "POO C++"}};
  Pessoa* p1{new Pessoa{"Joao", 11111111111, 20}};
  Pessoa* p2{new Pessoa{"Pedro", 22222222222, 20}};
  Pessoa* p3{new Pessoa{"Pedro", 33333333333, 20}};

  poo_c->adicionarAluno(p1);
  poo_c->adicionarAluno(p2);
  poo_c->adicionarAluno(p3);

  std::list<Pessoa*> alunos{poo_c->getAlunos()};
  std::list<Pessoa*>::iterator it{alunos.begin()};
  while (it != alunos.end()) {
    std::cout << (*it)->getNome() << '\n';
    Pessoa* ptr{*it};
    it = poo_c->removerAluno(it);
    delete ptr;
  }

  delete bcc;
  delete poo_c;
  return 0;
}