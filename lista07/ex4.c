#include <stdio.h>
#include <stdlib.h>

int incrementa(int num) {
  num++;
  return num;
}

void incrementa_pont(int* num) {
  (*num) = (*num) + 1;
}

void main() {
  int x = 10;
  int* px = &x;
  int y = 100;
  int* py = &y;

  incrementa_pont(&x); // Incrementa x usando o endereço de x
  incrementa(y); // Incrementa y usando o valor de y mas n armazena o resultado
  incrementa_pont(px); // Incrementa x usando o ponteiro px
  incrementa((*py)); // Incrementa y usando o valor apontado por py masn n armazena o resultado

  *(px) = incrementa(x); // Incrementa x usando o valor de x e armazena o resultado no endereço apontado por px
  (*py)++; // Incrementa o valor apontado por py

  printf("x = %d, *px = %d\n", x, *px); // Imprime o valor de x e o valor apontado por px que é igual a 13
  printf("y = %d, *py = %d\n", y, *py); // Imprime o valor de y e o valor apontado por py que é igual a 101
}