#ifndef PESSOA_HPP
#define RETANGULO_HPP

#include <cstdint>

class Retangulo {
 public:
  uint64_t getArea(uint32_t base, uint32_t altura);
  uint64_t getPerimetro(uint32_t base, uint32_t altura);
  double getDiagonal(uint32_t base, uint32_t altura);

  uint32_t base;
  uint32_t altura;
};

#endif