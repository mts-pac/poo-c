#include <iostream>

#include "Retangulo.hpp"

int main() {
  uint32_t base, altura;
  std::cout << "Digite a base e a altura do retângulo: ";
  std::cin >> base >> altura;
  Retangulo r{base, altura};

  std::cout << "Área\tPerímetro\tDiagonal\n";
  std::cout << r.getArea() << '\t' << r.getPerimetro() << "\t\t"
            << r.getDiagonal() << '\n';
}