#include <cstdint>
#include <iostream>

#include "Curso.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Pessoa* p1{new Pessoa{"Joao", 11111111111, 20}};
  Curso* c1{new Curso};
  Disciplina d1{(*c1), "Orientacao a Objetos"};

  d1.setProfessor(p1);
  d1.setCargaHoraria(60);

  std::string cabecalho{"Dados da disciplina"};
  d1.imprimirDados(cabecalho);

  delete p1;
  delete c1;
  return 0;
}