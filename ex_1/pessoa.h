#include <stdint.h>

struct pessoa_t {
  char nome[80];
  uint8_t idade;
  uint64_t cpf;
};

// Retorna 1 caso o cpf seja válido e 0 caso contrário;
uint8_t cpfValido(uint64_t cpf);