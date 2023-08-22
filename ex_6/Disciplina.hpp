#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <string>

#include "Curso.hpp"
#include "Pessoa.hpp"

class Disciplina {
 public:
  Disciplina(Curso& curso);

  Disciplina(Curso& curso, std::string nome);

  std::string getNome();

  void setNome(std::string nome);

  unsigned short int getCargaHoraria();

  void setCargaHoraria(unsigned short int cargaHoraria);

  Pessoa* getProfessor();

  void setProfessor(Pessoa* prof);

  unsigned short int getQtdAlunos();

  Pessoa** getVetorAlunos();

  Curso& getCurso();

  bool adicionarAluno(Pessoa* aluno);

  void imprimirDados(std::string& cabecalho);

 private:
  std::string nome;
  uint16_t cargaHoraria;
  Pessoa* professor;
  Pessoa* alunos[50];
  uint8_t qtdAlunos = 0;
  Curso& curso;
};
#endif
