#include <stdio.h>
#include <stdlib.h>

int main() {
  int mes = 0;

  printf("Digite um numero de 1 a 6: ");
  scanf("%d", &mes);

  switch (mes) {
    case 1:
      printf("Janeiro\n");
      break;

    case 2:
      printf("Fevereiro\n");
      break;

    case 3:
      printf("Março\n");
      break;

    case 4:
      printf("Abril\n");
      break;

    case 5:
      printf("Maio\n");
      break;

    case 6:
      printf("Junho\n");
      break;

    default:
      printf("Numero invalido\n");
  }

  return 0;
}