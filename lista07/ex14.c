#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[100];
  FILE *file = fopen("resultados.txt", "w");

  for (int i = 0; i < 100; i++) {
    fprintf(file, "%d\n", &vetor[i]);
  }

  fclose(file);
  return 0;  
}