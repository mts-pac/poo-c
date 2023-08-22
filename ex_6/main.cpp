#include <cstdint>
#include <iostream>

#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
  Pessoa* p1{new Pessoa{"Joao", 11111111111, 20}};
  Disciplina d1{"Orientacao a Objetos"};
 
  d1.setProfessor(p1);
  d1.setCargaHoraria(60);
 
  std::string cabecalho{"Dados da disciplina"};
  d1.imprimirDados(cabecalho, 4000);
 
  delete p1;
  return 0;
}