#include <stdio.h>
#include <stdlib.h>

int main() {
  int N = 0;

  printf("Digite o valor de N: ");
  scanf("%d", &N);

  printf("S = ");
  for (int i = 0; i < N; i++) {
    if (i % 3 == 0) {
      printf("%d", (i / 3) + 1);
    } 

    else {
      printf("%d", (i / 3) + 4);
    }

    if (i < N - 1) {
      printf(", ");
    }
  }

  return 0;
}