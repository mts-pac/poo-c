#include "Disciplina.hpp"

#include <iostream>

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
  if (this->qtdAlunos < 50) {
    this->alunos[this->qtdAlunos++] = aluno;
    return true;
  }

  return false;
}

Pessoa** Disciplina::getVetorAlunos() { return this->alunos; }

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