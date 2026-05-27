#include <stdio.h>
#include <stdlib.h>

int tamString(char str[]) {
  int tam = 0;

  printf("%s", str);

  while (*str != '\n' && *str != '\0') {
    str++;
    tam++;
  }

  return tam;
}

int main() {
  char str[100];

  printf("Digite uma string: ");
  fgets(str, 100, stdin); 

  int tamanho = tamString(str);

  printf("O tamanho da string eh: %d\n", tamanho);

  return 0;
}