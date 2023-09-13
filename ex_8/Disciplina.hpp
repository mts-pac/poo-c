#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <list>
#include <string>

#include "Curso.hpp"
#include "Pessoa.hpp"

class SalaAula;

class Disciplina {
 public:
  Disciplina(Curso& curso);

  Disciplina(Curso& curso, std::string nome);

  Disciplina(std::string nome, Curso& curso, SalaAula *sala);

  std::string getNome();

  void setNome(std::string nome);

  unsigned short int getCargaHoraria();

  void setCargaHoraria(unsigned short int cargaHoraria);

  Pessoa* getProfessor();

  void setProfessor(Pessoa* prof);

  unsigned short int getQtdAlunos();

  std::list<Pessoa*> getAlunos();

  Curso& getCurso();

  bool adicionarAluno(Pessoa* aluno);

  std::list<Pessoa*>::iterator removerAluno(std::list<Pessoa*>::iterator it);

  bool removerAluno(Pessoa* aluno);

  bool removerAluno(uint64_t cpf);

  void imprimirDados(std::string& cabecalho);

  void setSalaAula(SalaAula* sala);

  SalaAula* getSalaAula();

 private:
  std::string nome;
  uint16_t cargaHoraria;
  std::list<Pessoa*> alunos;
  uint8_t qtdAlunos = 0;
  Curso& curso;
  SalaAula* sala;
  Pessoa* professor;
};
#endif
