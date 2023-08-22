#include "Curso.hpp"

Curso::Curso() : nome("Bacharelado em Ciência da Computação") {
  this->setChMinima(3000);
  this->setAnoCriacao(2019);
}

Curso::Curso(std::string nome, unsigned short int chMinima,
             unsigned short int anoCriacao)
    : nome(nome), chMinima(chMinima), anoCriacao(anoCriacao) {}

std::string Curso::getNome() { return this->nome; }

void Curso::setNome(std::string nome) { this->nome = nome; }

unsigned short int Curso::getChMinima() { return this->chMinima; }

void Curso::setChMinima(unsigned short int chMinima) {
  this->chMinima = chMinima;
}

unsigned short int Curso::getAnoCriacao() { return this->anoCriacao; }

void Curso::setAnoCriacao(unsigned short int chMinima) {
  this->anoCriacao = anoCriacao;
}