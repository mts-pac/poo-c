#include "Disciplina.hpp"

Disciplina::Disciplina() : professor(nullptr) {}

Disciplina::Disciplina(std::string nomeDisciplina)
    : nome{nomeDisciplina}, professor(nullptr) {}

std::string Disciplina::getNome() { return nome; }

void Disciplina::setNome(std::string novoNome) { nome = novoNome; }

unsigned short int Disciplina::getCargaHoraria() {
  return (unsigned short int)cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned short int novaCarga) {
  cargaHoraria = (uint16_t)novaCarga;
}

Pessoa* Disciplina::getProfessor() { return this->professor; }

void Disciplina::setProfessor(Pessoa* prof) { this->professor = prof; }

bool Disciplina::adicionarAluno(Pessoa* aluno) {
  if (this->qtdAlunos < 50) {
    this->alunos[this->qtdAlunos++] = aluno;
    return true;
  }

  return false;
}

Pessoa** Disciplina::getVetorAlunos() { return this->alunos; }

unsigned short int Disciplina::getQtdAlunos() { return this->qtdAlunos; }
