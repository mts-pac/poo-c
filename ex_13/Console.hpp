#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include "ConteudoMinistrado.hpp"
#include "Disciplina.hpp"

class Console {
 public:
  ~Console();
  static void imprimirDadosDisciplina(const Disciplina& disciplina);
};

#endif
