#include <cstdint>
#include <iostream>
#include <list>

#include "Console.hpp"
#include "Curso.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "SalaAula.hpp"

int main() {
  Curso* bcc{new Curso};
  SalaAula sala{"Lab Info 1", 20};
  Pessoa prof1{"Joao", 11111111111, 40};
  Disciplina dis1{"POO C++", (*bcc), &sala};

  dis1.setProfessor(&prof1);
  dis1.adicionarConteudoMinistrado("Ponteiros", 4);
  dis1.adicionarConteudoMinistrado("Referencias", 2);
  dis1.adicionarConteudoMinistrado("Membros  Static", 2);
  dis1.removerConteudoMinistrado(0);
  
  Console::imprimirDadosDisciplina(dis1);
  dis1.limparConteudos();


  delete bcc;
  return 0;
}