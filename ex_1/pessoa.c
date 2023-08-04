#include <stdint.h>
#include <stdio.h>

uint8_t cpfValido(uint64_t cpf) {
  char cpf_str[12];  // 11 dígitos + 1 para o caractere nulo '\0'
  snprintf(cpf_str, sizeof(cpf_str), "%011ld", cpf); // Le 11 dígitos de CPF, caso haja menos preenche com 0s a esquerda

  // Verifica se os dígitos são iguais
  uint8_t iguais = 1;
  for (int i = 1; i < 11; i++) {
    if (cpf_str[i] != cpf_str[0]) {
      iguais = 0;
      break;
    }
  }
  if (iguais) {
    return 0;
  }

  // Verifica primeiro dígito verificador
  int soma1 = 0;
  for (int i = 0, j = 10; i < 9; i++, j--) {
    soma1 += (cpf_str[i] - '0') * j;
  }
  int resto1 = soma1 % 11;
  int dv1 = (resto1 < 2) ? 0 : (11 - resto1);
  if (dv1 != (cpf_str[9] - '0')) {
    return 0;
  }

  // Verifica segundo dígito verificador
  int soma2 = 0;
  for (int i = 0, j = 11; i < 10; i++, j--) {
    soma2 += (cpf_str[i] - '0') * j;
  }
  int resto2 = soma2 % 11;
  int dv2 = (resto2 < 2) ? 0 : (11 - resto2);
  if (dv2 != (cpf_str[10] - '0')) {
    return 0;
  }

  return 1;
}