#ifndef CURSO_HPP
#define CURSO_HPP

#include <cstdint>
#include <string>

class Curso {
 public:
  ~Curso();
  Curso();
  Curso(std::string nome, unsigned short int chMinima,
        unsigned short int anoCriacao);

  const std::string& getNome() const;
  void setNome(const std::string& nome);

  unsigned short int getChMinima() const;
  void setChMinima(unsigned short int chMinima);

  unsigned short int getAnoCriacao() const;
  void setAnoCriacao(unsigned short int chMinima);

 private:
  std::string nome;
  uint16_t chMinima;
  uint16_t anoCriacao;
};

#endif