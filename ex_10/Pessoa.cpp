#include "Pessoa.hpp"

#include <iostream>

Pessoa::~Pessoa() {
  std::cerr << "[INFO] Destruindo pessoa " << this->nome << '\n';
}

Pessoa::Pessoa() : nome("Matheus") {
  this->setIdade(22);
  this->setCpf(9296801974);
};

Pessoa::Pessoa(std::string nome, uint64_t cpf, unsigned short int idade)
    : nome(nome) {
  this->setCpf(cpf);
  this->setIdade(idade);
};

bool Pessoa::validarCPF(uint64_t cpf) {
  unsigned int modulo;
  unsigned int ultimo{(unsigned int)(cpf % 10)};
  cpf = cpf / 10;
  unsigned int penultimo{(unsigned int)(cpf % 10)};
  cpf = cpf / 10;

  unsigned int somaValidacaoUltimo = penultimo * 2;
  unsigned int somaValidacaoPenultimo{0};
  for (int i{2}; i <= 11; i++) {
    modulo = cpf % 10;
    cpf = cpf / 10;
    somaValidacaoPenultimo += modulo * i;
    somaValidacaoUltimo += modulo * (i + 1);
  }

  modulo = somaValidacaoUltimo % 11;
  if (modulo < 2) {
    if (!ultimo) return false;
  } else {
    if (ultimo != 11 - modulo) return false;
  }

  modulo = somaValidacaoPenultimo % 11;
  if (modulo < 2) {
    if (!penultimo) return false;
  } else {
    if (penultimo != 11 - modulo) return false;
  }

  return true;
}

std::string Pessoa::getNome() { return this->nome; }

void Pessoa::setNome(std::string nome) { this->nome = nome; }

unsigned short int Pessoa::getIdade() {
  return (unsigned short int)this->idade;
}

void Pessoa::setIdade(unsigned short int idade) {
  this->idade = (uint8_t)idade;
}

uint64_t Pessoa::getCpf() { return this->cpf; }

void Pessoa::setCpf(uint64_t cpf) {
  if (this->validarCPF(cpf)) {
    this->cpf = cpf;
  } else {
    this->cpf = 0;
  }
};
