#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } 
  
  else {
    return n * fatorial(n - 1);
  }
}

int main() {
  int n;

  printf("Digite um numero inteiro para calcular o fatorial: ");
  scanf("%d", &n);

  printf("O fatorial de %d eh: %d\n", n, fatorial(n));
  
  return 0;
}