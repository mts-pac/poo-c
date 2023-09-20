#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <list>
#include <string>

#include "Disciplina.hpp"

class SalaAula {
  friend void Disciplina::setSalaAula(SalaAula* salaAula);

 public:
  ~SalaAula();
  
  SalaAula(std::string nome, unsigned int capacidade);

  const std::string& getNome() const;
  void setNome(const std::string& nome);

  unsigned int getCapacidade() const;
  void setCapcidade(unsigned int capacidade);

  const std::list<Disciplina*>& getDisciplinas() const;

 private:
  std::string nome;
  unsigned int capacidade;
  std::list<Disciplina*> disciplinasMinistradas;
};
#endif