#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <cstdint>
#include <string>

class Pessoa {
 public:
  ~Pessoa();
  Pessoa();
  Pessoa(std::string nome, uint64_t cpf);
  Pessoa(std::string nome, uint64_t cpf, unsigned short int idade);

  const std::string& getNome() const;
  void setNome(const std::string& nome);

  unsigned short int getIdade() const;
  void setIdade(unsigned short int idade);

  uint64_t getCpf() const;
  void setCpf(uint64_t cpf);

 protected:
  std::string nome;
  uint8_t idade;
  uint64_t cpf;

 private:
  bool validarCPF(uint64_t cpf);
};

#endif