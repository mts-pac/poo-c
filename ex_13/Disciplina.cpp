#include "Disciplina.hpp"

#include <iostream>
#include <list>

#include "Pessoa.hpp"
#include "SalaAula.hpp"

Disciplina::~Disciplina() {
  std::cerr << "[INFO] Destruindo disciplina " << this->getNome() << '\n';
  this->setSalaAula(nullptr);
  this->professor = nullptr;

  std::list<ConteudoMinistrado*>::iterator it1;
  for (it1 = conteudos.begin(); it1 != conteudos.end(); it1++) {
    delete *it1;
  }

  std::list<Aluno*>::iterator end{this->alunos.end()};
  std::list<Aluno*>::iterator it2;
  for (it2 = this->alunos.begin(); it2 != this->alunos.end(); it2++) {
    delete *it2;
  }
}

Disciplina::Disciplina(Curso& curso, std::string nome)
    : nome{nome}, curso(curso), sala(nullptr), professor(nullptr) {}

Disciplina::Disciplina(std::string nome, Curso& curso, SalaAula* sala)
    : nome{nome}, curso(curso), sala(nullptr), professor(nullptr) {
  this->setSalaAula(sala);
}

std::string Disciplina::getNome() const { return this->nome; }

void Disciplina::setNome(const std::string& nome) { this->nome = nome; }

unsigned short int Disciplina::getCargaHoraria() const {
  return (unsigned short int)this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned short int cargaHoraria) {
  this->cargaHoraria = (uint16_t)cargaHoraria;
}

Professor* Disciplina::getProfessor() const { return this->professor; }

void Disciplina::setProfessor(Professor* prof) { this->professor = prof; }

bool Disciplina::adicionarAluno(Aluno* aluno) {
  std::list<Aluno*>::iterator it{this->alunos.begin()};
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

const std::list<Aluno*>::iterator Disciplina::removerAluno(
    const std::list<Aluno*>::iterator it) {
  return this->alunos.erase(it);
}

bool Disciplina::removerAluno(const Aluno* aluno) {
  std::list<Aluno*>::iterator it{this->alunos.begin()};
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
  std::list<Aluno*>::iterator it{this->alunos.begin()};
  while (it != this->alunos.end()) {
    if ((*it)->getCpf() == cpf) {
      this->alunos.erase(it);
      return true;
    }
    ++it;
  }

  return false;
}

const std::list<Aluno*> Disciplina::getAlunos() const { return this->alunos; }

const Curso& Disciplina::getCurso() const { return this->curso; }

void Disciplina::setSalaAula(SalaAula* sala) {
  if (this->sala != nullptr) {
    this->sala->disciplinasMinistradas.remove(this);
  }

  this->sala = sala;
  if (this->sala != nullptr) {
    this->sala->disciplinasMinistradas.push_back(this);
  }
}

const SalaAula* Disciplina::getSalaAula() const { return this->sala; }

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
      break;
    } else {
      ++it;
    }
  }
}

const std::list<ConteudoMinistrado*>& Disciplina::getConteudos() const {
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