#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <cstdint>

class Retangulo {
 public:
  Retangulo(uint32_t base = 30, uint32_t altura = 20);

  uint64_t getArea();
  uint64_t getPerimetro();
  double getDiagonal();

  uint32_t getBase();
  void setBase(uint32_t base);

  uint32_t getAltura();
  void setAltura(uint32_t altura);

 private:
  uint32_t base;
  uint32_t altura;
};

#endif