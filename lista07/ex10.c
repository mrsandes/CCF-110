#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;

  printf("Digite o número de elementos do vetor: ");
  scanf("%d", &N);

  int *vetor = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++) {
    *(vetor + i) = 0;
  }

  return 0;  
}
