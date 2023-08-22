#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class Disciplina {
 public:
  Disciplina();

  Disciplina(std::string nomeDisciplina);

  std::string getNome();

  void setNome(std::string novoNome);

  unsigned short int getCargaHoraria();

  void setCargaHoraria(unsigned short int novaCarga);

  Pessoa* getProfessor();

  void setProfessor(Pessoa* prof);

  unsigned short int getQtdAlunos();

  Pessoa** getVetorAlunos();

  bool adicionarAluno(Pessoa* aluno);

 private:
  std::string nome;
  uint16_t cargaHoraria;
  Pessoa* professor;
  Pessoa* alunos[50];
  uint8_t qtdAlunos = 0;
};
#endif
