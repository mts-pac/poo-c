#include <iostream>

#include "FilaCircular.hpp"

int main() {
  FilaCircular<int, 2> fila;
  int elemento;

  fila.push(1);
  fila.push(2);
  fila.push(3);
  fila.pop(elemento);

  std::cout << "Frente: " << fila.getFrente() << '\n';
  std::cout << "Fundo: " << fila.getFundo() << '\n';

  return 0;
}