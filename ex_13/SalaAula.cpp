#include "SalaAula.hpp"

#include <iostream>

SalaAula::~SalaAula() {
  std::cerr << "[INFO] Destruindo sala de aula " << this->getNome() << '\n';
  std::list<Disciplina*>::iterator it{this->disciplinasMinistradas.begin()};
  while (it != disciplinasMinistradas.end()) {
    (*it)->sala = nullptr;
    it = this->disciplinasMinistradas.erase(it);
  }
}

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
    : nome{nome}, capacidade{capacidade} {}

const std::string& SalaAula::getNome() const { return this->nome; }

void SalaAula::setNome(const std::string& nome) { this->nome = nome; }

unsigned int SalaAula::getCapacidade() const { return this->capacidade; }

void SalaAula::setCapcidade(unsigned int capacidade) {
  this->capacidade = capacidade;
}

const std::list<Disciplina*>& SalaAula::getDisciplinas() const {
  return this->disciplinasMinistradas;
}