#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int *x, *y;

  printf("Digite um numero inteiro: ");
  scanf("%d", x);

  printf("Digite outro numero inteiro: ");
  scanf("%d", y);

  printf("Antes da troca: x = %d, y = %d\n", *x, *y);

  troca(x, y);

  printf("Depois da troca: x = %d, y = %d\n", *x, *y);

  return 0;
}