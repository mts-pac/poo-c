#include "Disciplina.hpp"

#include <iostream>
#include <list>

#include "Pessoa.hpp"
#include "SalaAula.hpp"

Disciplina::Disciplina(Curso& curso)
    : curso(curso), sala(nullptr), professor(nullptr) {}

Disciplina::Disciplina(Curso& curso, std::string nome)
    : nome{nome}, curso(curso), sala(nullptr), professor(nullptr) {}

Disciplina::Disciplina(std::string nome, Curso& curso, SalaAula* sala)
    : nome{nome}, curso(curso), sala(nullptr), professor(nullptr) {
  this->setSalaAula(sala);
}

std::string Disciplina::getNome() { return this->nome; }

void Disciplina::setNome(std::string nome) { this->nome = nome; }

unsigned short int Disciplina::getCargaHoraria() {
  return (unsigned short int)this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned short int cargaHoraria) {
  this->cargaHoraria = (uint16_t)cargaHoraria;
}

Pessoa* Disciplina::getProfessor() { return this->professor; }

void Disciplina::setProfessor(Pessoa* professor) {
  this->professor = professor;
}

bool Disciplina::adicionarAluno(Pessoa* aluno) {
  std::list<Pessoa*>::iterator it{this->alunos.begin()};
  while (it != this->alunos.end()) {
    if ((*it)->getCpf() == aluno->getCpf()) {
      return false;
      break;
    }
    ++it;
  }

  this->alunos.push_back(aluno);
  return true;
}

std::list<Pessoa*>::iterator Disciplina::removerAluno(
    std::list<Pessoa*>::iterator it) {
  return this->alunos.erase(it);
}

bool Disciplina::removerAluno(Pessoa* aluno) {
  std::list<Pessoa*>::iterator it{this->alunos.begin()};
  while (it != this->alunos.end()) {
    if ((*it)->getCpf() == aluno->getCpf()) {
      this->alunos.erase(it);
      return true;
    }
    ++it;
  }

  return false;
}

bool Disciplina::removerAluno(uint64_t cpf) {
  std::list<Pessoa*>::iterator it{this->alunos.begin()};
  while (it != this->alunos.end()) {
    if ((*it)->getCpf() == cpf) {
      this->alunos.erase(it);
      return true;
    }
    ++it;
  }

  return false;
}

std::list<Pessoa*> Disciplina::getAlunos() { return this->alunos; }

Curso& Disciplina::getCurso() { return this->curso; }

void Disciplina::setSalaAula(SalaAula* sala) {
  if (this->sala != nullptr) {
    this->sala->disciplinasMinistradas.remove(this);
  }

  this->sala = sala;
  if (this->sala != nullptr) {
    this->sala->disciplinasMinistradas.push_back(this);
  }
}

SalaAula* Disciplina::getSalaAula() { return this->sala; }

void Disciplina::adicionarConteudoMinistrado(
    std::string conteudo, unsigned short cargaHorariaConteudo) {
  this->conteudos.push_back(
      new ConteudoMinistrado{conteudo, cargaHorariaConteudo});
}

void Disciplina::imprimirConteudosMinistrados() {
  std::list<ConteudoMinistrado*>::iterator it;
  for (it = conteudos.begin(); it != conteudos.end(); it++) {
    std::cout << "Id: " << (*it)->getId() << std::endl
              << "Conteudo: " << (*it)->getDescricao() << std::endl
              << "Carga: " << (*it)->getCargaHorariaConteudo() << std::endl
              << std::endl;
  }
}

void Disciplina::removerConteudoMinistrado(unsigned long id) {
  std::list<ConteudoMinistrado*>::iterator it{this->conteudos.begin()};
  std::list<ConteudoMinistrado*>::iterator end{this->conteudos.end()};

  while (it != end) {
    if ((*it)->getId() == id) {
      delete *it;
      it = this->conteudos.erase(it);
    } else {
      ++it;
    }
  }
}

std::list<ConteudoMinistrado*>& Disciplina::getConteudos() {
  return this->conteudos;
}

void Disciplina::limparConteudos() {
  std::list<ConteudoMinistrado*>::iterator it{this->conteudos.begin()};
  std::list<ConteudoMinistrado*>::iterator end{this->conteudos.end()};

  while (it != end) {
    delete *it;
    it = this->conteudos.erase(it);
  }
}