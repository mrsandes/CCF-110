#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int vetor[5];

  printf("Digite os 5 números do vetor:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < floor(5 / 2); i++) {
    int temp = vetor[i];
    vetor[i] = vetor[4 - i];
    vetor[4 - i] = temp;
  }

  for (int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}