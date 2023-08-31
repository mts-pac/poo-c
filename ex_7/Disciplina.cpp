#include "Disciplina.hpp"

#include <iostream>
#include <list>

#include "Pessoa.hpp"

Disciplina::Disciplina(Curso& curso) : professor(nullptr), curso(curso) {}

Disciplina::Disciplina(Curso& curso, std::string nome)
    : nome{nome}, professor(nullptr), curso(curso) {}

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

unsigned short int Disciplina::getQtdAlunos() { return this->qtdAlunos; }

void Disciplina::imprimirDados(std::string& cabecalho) {
  double pctCurso = (double)this->cargaHoraria / this->curso.getChMinima();
  pctCurso = pctCurso * 100;
  std::cout << cabecalho << '\n';
  std::cout << "Curso: " << this->curso.getNome() << '\n';
  std::cout << "Disciplina: " << this->nome << '\n';
  std::cout << "Carga: " << cargaHoraria << '\n';
  std::cout << "Porcentagem do curso: " << pctCurso << "%\n";
  std::cout << "Professor: " << this->professor->getNome() << '\n';
}