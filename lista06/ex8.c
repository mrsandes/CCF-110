#include <stdio.h>
#include <stdlib.h>

int valorMedio(int tam, int vetor[tam]) {
  int valorMedio = 0;

  for (int i = 0; i < tam; i++) {
    valorMedio += vetor[i];
  }

  return valorMedio / tam;
}

int main() {
  int tam = 5;
  int vetor[tam];

  printf("Digite os %d valores do vetor: ", tam);
  for (int i = 0; i < tam; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("O valor médio é: %d\n", valorMedio(tam, vetor));

  return 0;
}