#ifndef CURSO_HPP
#define CURSO_HPP

#include <cstdint>
#include <string>

class Curso {
 public:
  Curso();
  Curso(std::string nome, unsigned short int chMinima,
        unsigned short int anoCriacao);

  std::string getNome();
  void setNome(std::string nome);

  unsigned short int getChMinima();
  void setChMinima(unsigned short int chMinima);

  unsigned short int getAnoCriacao();
  void setAnoCriacao(unsigned short int chMinima);

 private:
  std::string nome;
  uint16_t chMinima;
  uint16_t anoCriacao;
};

#endif