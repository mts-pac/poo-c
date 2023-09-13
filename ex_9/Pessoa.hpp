#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <cstdint>
#include <string>

class Pessoa {
 public:
  Pessoa();
  Pessoa(std::string nome, uint64_t cpf, unsigned short int idade);

  std::string getNome();
  void setNome(std::string nome);

  unsigned short int getIdade();
  void setIdade(unsigned short int idade);

  uint64_t getCpf();
  void setCpf(uint64_t cpf);

 private:
  bool validarCPF(uint64_t cpf);
  std::string nome;
  uint8_t idade;
  uint64_t cpf;
};

#endif