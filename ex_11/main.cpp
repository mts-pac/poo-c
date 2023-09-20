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
  SalaAula* sala{new SalaAula{"Lab Info 1", 20}};
  Pessoa* prof1{new Pessoa{"Joao", 11111111111, 40}};
  Disciplina* dis1{new Disciplina{"POO C++", (*bcc), sala}};
  Console console;

  dis1->setSalaAula(sala);
  dis1->setProfessor(prof1);

  dis1->adicionarConteudoMinistrado("Ponteiros", 4);
  dis1->adicionarConteudoMinistrado("Referencias", 2);
  dis1->adicionarConteudoMinistrado("Membros  Static", 2);

  console.imprimirDadosDisciplina((*dis1));

  delete sala;
  delete bcc;
  delete dis1;
  delete prof1;
  return 0;
}