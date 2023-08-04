#include "Retangulo.hpp"

#include <math.h>

uint64_t Retangulo::getArea(uint32_t base, uint32_t altura) {
  return base * altura;
}

uint64_t Retangulo::getPerimetro(uint32_t base, uint32_t altura) {
  return 2 * (base + altura);
}

double Retangulo::getDiagonal(uint32_t base, uint32_t altura) {
  return sqrt(base * base + altura * altura);
}