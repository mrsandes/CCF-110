#include <stdio.h>
#include <stdlib.h>

void f(float x, float *p1, float *p2) {
  *p1 = x * x;
  *p2 = x * x * x;
}

int main() {
  float x, *p1, *p2;
  printf("Digite um número: ");
  scanf("%f", &x);

  f(x, p1, p2);

  printf("O quadrado de x é: %f\n", *p1);
  printf("O cubo de x é: %f\n", *p2);

  return 0;
}