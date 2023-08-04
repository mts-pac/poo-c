#include <iostream>

#include "Retangulo.hpp"

int main() {
  Retangulo r;

  std::cout << "Digite a base e a altura do retângulo: ";
  std::cin >> r.base >> r.altura;

  std::cout << "A área do retângulo é " << r.getArea(r.base, r.altura) << '\n';

  std::cout << "Já o seu perímetro é " << r.getPerimetro(r.base, r.altura)
            << '\n';

  std::cout << "Por fim a sua diagonal é " << r.getDiagonal(r.base, r.altura)
            << '\n';
}