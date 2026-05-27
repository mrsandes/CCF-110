#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[20];
  int maior = 0, pos = 0;

  for (int i = 0; i < 20; i++) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 20; i++) {
    if (i == 0 || vetor[i] > maior) {
      maior = vetor[i];
      pos = i;
    }
  }

  printf("O maior elemento eh %d e esta na posicao %d\n", maior, pos);

  return 0;
}