#include <cstdint>
#include <iostream>

#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Pessoa* p1{new Pessoa{"Matheus", 9296801974, 22}};
  Pessoa* p2{new Pessoa{"João", 3483536183, 20}};
  Pessoa* p3{new Pessoa{"Lucas", 97646951595, 25}};
  Pessoa** alunos{nullptr};

  Disciplina d1{"Orientacao a Objetos"};

  d1.adicionarAluno(p1);
  d1.adicionarAluno(p2);
  d1.adicionarAluno(p3);
  alunos = d1.getVetorAlunos();

  std::cout << alunos[0]->getNome() << '\t' << alunos[0]->getIdade() << '\t'
            << alunos[0]->getCpf() << '\n';

  std::cout << d1.getNome() << std::endl;

  delete p1;
  delete p2;
  delete p3;
  return 0;
}
