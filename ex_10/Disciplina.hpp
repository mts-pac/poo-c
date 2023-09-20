#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <list>
#include <string>

#include "ConteudoMinistrado.hpp"
#include "Curso.hpp"
#include "Pessoa.hpp"

class SalaAula;

class Disciplina {
  friend SalaAula;

 public:
  ~Disciplina();

  Disciplina(Curso& curso);

  Disciplina(Curso& curso, std::string nome);

  Disciplina(std::string nome, Curso& curso, SalaAula* sala);

  std::string getNome();

  void setNome(std::string nome);

  unsigned short int getCargaHoraria();

  void setCargaHoraria(unsigned short int cargaHoraria);

  Pessoa* getProfessor();

  void setProfessor(Pessoa* prof);

  std::list<Pessoa*> getAlunos();

  Curso& getCurso();

  bool adicionarAluno(Pessoa* aluno);

  std::list<Pessoa*>::iterator removerAluno(std::list<Pessoa*>::iterator it);

  bool removerAluno(Pessoa* aluno);

  bool removerAluno(uint64_t cpf);

  void setSalaAula(SalaAula* sala);

  SalaAula* getSalaAula();

  void adicionarConteudoMinistrado(std::string conteudo,
                                   unsigned short cargaHorariaConteudo);

  void removerConteudoMinistrado(unsigned long id);

  void imprimirConteudosMinistrados();

  std::list<ConteudoMinistrado*>& getConteudos();

  void limparConteudos();

 private:
  std::string nome;
  uint16_t cargaHoraria;
  std::list<Pessoa*> alunos;
  Curso& curso;
  SalaAula* sala;
  Pessoa* professor;
  std::list<ConteudoMinistrado*> conteudos;
};
#endif
