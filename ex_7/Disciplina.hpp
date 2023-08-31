#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <list>
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

  std::list<Pessoa*> getAlunos();

  Curso& getCurso();

  bool adicionarAluno(Pessoa* aluno);

  std::list<Pessoa*>::iterator removerAluno(std::list<Pessoa*>::iterator it);

  bool removerAluno(Pessoa* aluno);

  bool removerAluno(uint64_t cpf);

  void imprimirDados(std::string& cabecalho);

 private:
  std::string nome;
  uint16_t cargaHoraria;
  std::list<Pessoa*> alunos;
  Pessoa* professor;
  uint8_t qtdAlunos = 0;
  Curso& curso;
};
#endif
