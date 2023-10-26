#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <list>
#include <string>

#include "Aluno.hpp"
#include "ConteudoMinistrado.hpp"
#include "Curso.hpp"
#include "Professor.hpp"

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

  Professor* getProfessor() const;

  void setProfessor(Professor* prof);

  const std::list<Aluno*> getAlunos() const;

  const Curso& getCurso() const;

  bool adicionarAluno(Aluno* aluno);

  const std::list<Aluno*>::iterator removerAluno(
      const std::list<Aluno*>::iterator it);

  bool removerAluno(const Aluno* aluno);

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
  std::list<Aluno*> alunos;
  Curso& curso;
  SalaAula* sala;
  Professor* professor;
  std::list<ConteudoMinistrado*> conteudos;
};
#endif
