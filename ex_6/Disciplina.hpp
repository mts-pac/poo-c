#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class Disciplina {
 public:
  Disciplina();

  Disciplina(std::string nome);

  std::string getNome();

  void setNome(std::string nome);

  unsigned short int getCargaHoraria();

  void setCargaHoraria(unsigned short int cargaHoraria);

  Pessoa* getProfessor();

  void setProfessor(Pessoa* prof);

  unsigned short int getQtdAlunos();

  Pessoa** getVetorAlunos();

  bool adicionarAluno(Pessoa* aluno);

  void imprimirDados(std::string& cabecalho, unsigned int chTotalCurso);

 private:
  std::string nome;
  uint16_t cargaHoraria;
  Pessoa* professor;
  Pessoa* alunos[50];
  uint8_t qtdAlunos = 0;
};
#endif
