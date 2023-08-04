#include <stdint.h>
#include <stdio.h>

#include "pessoa.h"

int main() {
  struct pessoa_t pessoas[3];

  printf("Digite os dados de 3 pessoas...\n");
  for (int i = 0; i < 3; i++) {
    printf("\nPessoa %d:\n", i + 1);

    printf("Digite o nome (máximo de 80 caracteres): ");
    scanf("%79s", pessoas[i].nome);


    printf("Digite o CPF (apenas números): ");
    scanf("%ld", &pessoas[i].cpf);
    while (!cpfValido(pessoas[i].cpf)) {
      printf("O cpf digitado é invalido, digite novamente: ");
      scanf("%ld", &pessoas[i].cpf);
    }

    printf("Digite a idade: ");
    scanf("%hhd", &pessoas[i].idade);
  }

  printf("\n");
  for (int i = 0; i < 3; i++) {
    printf("\nOs dados da pessoa %d são:\n", i + 1);

    printf("Nome: %s\n", pessoas[i].nome);

    printf("CPF: %ld\n", pessoas[i].cpf);

    printf("Idade: %hhd\n", pessoas[i].idade);
  }
}