#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, *y = &x;

  printf("Digite um numero inteiro: ");
  scanf("%d", &x);

  printf("O valor de x eh: %d\n", *y);

  return 0;
}