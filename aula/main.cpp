#include <cstdint>
#include <iostream>

#include "Pessoa.hpp"

int main() {
  Pessoa p1;
  int idade;
  std::string nome;
  uint64_t cpf;

  std::cout << "Nome: ";
  std::getline(std::cin, nome);
  std::cout << "Idade: ";
  std::cin >> idade;
  p1.setIdade(idade);
  p1.setNome(nome);

  bool valido = false;
  while (!valido) {
    std::cout << "CPF: ";
    std::cin >> cpf;
    p1.setCpf(cpf);
    valido = (p1.getCpf() != 0);
  }
  std::cout << "Dados da pessoa: " << p1.getNome() << "\t" << p1.getIdade()
            << "\t" << p1.getCpf() << '\n';

  return 0;
}
