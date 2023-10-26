#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <cstdint>

#include "Pessoa.hpp"

class Aluno : public Pessoa {
 public:
  ~Aluno();

  Aluno(const std::string& nome, const uint64_t cpf, unsigned int numeroMatricula);
  Aluno(const std::string& nome, const uint64_t cpf, unsigned int numeroMatricula, float ira);

  void setNumeroMatricula(const unsigned int numeroMatricula);
  unsigned int getNumeroMatricula() const;

  void setIra(const float ira);
  float getIra() const;

 private:
  uint32_t numeroMatricula;
  float ira;
};
#endif