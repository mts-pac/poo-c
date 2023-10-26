#include "Aluno.hpp"

#include <iostream>

Aluno::~Aluno() {
  std::cerr << "[INFO] Destruindo aluno " << this->getNome() << '\n';
}

Aluno::Aluno(const std::string& nome, const uint64_t cpf,
             unsigned int numeroMatricula)
    : Pessoa(nome, cpf) {
  this->setNumeroMatricula(numeroMatricula);
}

Aluno::Aluno(const std::string& nome, const uint64_t cpf,
             unsigned int numeroMatricula, float ira)
    : Pessoa(nome, cpf), ira(ira) {}

void Aluno::setNumeroMatricula(const unsigned int numeroMatricula) {
  this->numeroMatricula = (uint32_t)numeroMatricula;
}

unsigned int Aluno::getNumeroMatricula() const {
  return (unsigned int)this->numeroMatricula;
}

void Aluno::setIra(const float ira) { this->ira = ira; }

float Aluno::getIra() const { return this->ira; }
