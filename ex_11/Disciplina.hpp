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

  std::string getNome() const;

  void setNome(const std::string& nome);

  unsigned short int getCargaHoraria() const;

  void setCargaHoraria(unsigned short int cargaHoraria);

  Pessoa* getProfessor() const;

  void setProfessor(Pessoa* prof);

  const std::list<Pessoa*> getAlunos() const;

  const Curso& getCurso() const;

  bool adicionarAluno(Pessoa* aluno);

  const std::list<Pessoa*>::iterator removerAluno(const std::list<Pessoa*>::iterator it);

  bool removerAluno(const Pessoa* aluno);

  bool removerAluno(uint64_t cpf);

  void setSalaAula(SalaAula* sala);

  const SalaAula* getSalaAula() const;

  void adicionarConteudoMinistrado(std::string conteudo,
                                   unsigned short cargaHorariaConteudo);

  void removerConteudoMinistrado(unsigned long id);

  void imprimirConteudosMinistrados();

  const std::list<ConteudoMinistrado*>& getConteudos() const;

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
