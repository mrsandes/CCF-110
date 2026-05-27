#include <stdio.h>
#include <stdlib.h>

int potencia(int a, int b) {
  int res = 1;

  for (int i = 0; i < b; i++) {
    res *= a;
  }

  return res;
}

int main() {
  int a, b;

  printf("Digite a base e o expoente: ");
  scanf("%d %d", &a, &b);

  printf("%d^%d = %d\n", a, b, potencia(a, b));

  return 0;
}