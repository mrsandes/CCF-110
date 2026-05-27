#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[50];
  int soma = 0;

  for (int i = 0; i < 50; i++) {
    vetor[i] = i + 1;
    soma += vetor[i];
  }

  printf("A soma dos numeros de 1 a 50 eh: %d\n", soma);

  return 0;
}