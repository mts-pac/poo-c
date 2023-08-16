#include "Retangulo.hpp"

#include <math.h>

uint64_t Retangulo::getArea() { return this->base * this->altura; }

uint64_t Retangulo::getPerimetro() { return 2 * (this->base + this->altura); }

double Retangulo::getDiagonal() {
  return sqrt(this->base * this->base + this->altura * this->altura);
}

uint32_t Retangulo::getBase() { return this->base; }

void Retangulo::setBase(uint32_t base) { this->base = base; }

uint32_t Retangulo::getAltura() { return this->altura; }

void Retangulo::setAltura(uint32_t altura) { this->altura = altura; }