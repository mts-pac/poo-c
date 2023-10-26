#include <cstdint>
#include <iostream>
#include <list>

#include "Aluno.hpp"
#include "Console.hpp"
#include "Curso.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "ProfessorAdjunto.hpp"
#include "SalaAula.hpp"

int main() {
  Curso* bcc{new Curso};
  Disciplina* poo_c{new Disciplina{(*bcc), "POO C++"}};
  Aluno* p1{new Aluno{"Joao", 11111111111, 1}};
  Aluno* p2{new Aluno{"Pedro", 22222222222, 2}};
  Aluno* p3{new Aluno{"Marcia", 33333333333, 3}};

  poo_c->adicionarAluno(p1);
  poo_c->adicionarAluno(p2);
  poo_c->adicionarAluno(p3);

  std::list<Aluno*> alunos{poo_c->getAlunos()};
  std::list<Aluno*>::iterator it{alunos.begin()};
  while (it != alunos.end()) {
    std::cout << (*it)->getNome() << '\n';
    it = poo_c->removerAluno(it);
  }

  delete poo_c;
  delete bcc;

  return 0;
}