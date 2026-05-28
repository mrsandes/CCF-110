#include <stdio.h>
#include <stdlib.h>

int f(int **vetor, int tam) {
  int soma = 0;

  for (int i = 0; i < tam; i++) {
    soma += **(vetor + i);
  }

  return soma;
}

int main() {
  int *vetor[10];

  for (int i = 0; i < 10; i++) {
    vetor[i] = (int *)malloc(sizeof(int));
  }
  
  printf("Soma dos valores apontados: %d\n", f(vetor, 10));

  for (int i = 0; i < 10; i++) {
    free(vetor[i]);
  }

  return 0;  
}