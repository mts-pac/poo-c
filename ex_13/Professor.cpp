#include "Professor.hpp"

#include <iostream>

Professor::Professor(const std::string& nome, const uint64_t cpf,
                     const unsigned int valorHora,
                     const unsigned short cargaHoraria)
    : Pessoa{nome, cpf}, valorHora{valorHora} {
  this->setCargaHoraria(cargaHoraria);
}

Professor::~Professor() {
  std::cerr << "[INFO] Destruindo profesor " << this->getNome() << '\n';
}

void Professor::setValorHora(const unsigned int valorHora) {
  if (valorHora > 0) this->valorHora = valorHora;
}

unsigned int Professor::getValorHora() const { return this->valorHora; }

void Professor::setCargaHoraria(const unsigned short cargaHoraria) {
  if (cargaHoraria > 0) this->cargaHoraria = cargaHoraria;
}
unsigned short Professor::getCargaHoraria() const { return this->cargaHoraria; }

unsigned int Professor::getSalario() const {
  // assumindo que um mês tem aprox 4.5 semanas
  return valorHora * cargaHoraria * 4.5;
}