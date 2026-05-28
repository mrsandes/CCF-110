#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file = fopen("ex13.txt", "r");

  int linhas;
  fscanf(file, "%d", &linhas);
  int valores[linhas];

  for (int i = 0; i < linhas; i++) {
    fscanf(file, "%d", &valores[i]);
  }

  for (int i = 0; i < linhas; i++) {
    printf("%d ", valores[i]);
  }

  fclose(file);
  return 0;  
}