#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ImprimeGols(char nomeA[], char nomeB[], int m, int n, char sequencia[][50], int indice) {    
  if (m == 0 && n == 0) {
    for (int i = 0; i < indice; i++) {
      printf("%s ", sequencia[i]);
    }
    printf("\n");
    return; 
  }

  if (m > 0) {
    strcpy(sequencia[indice], nomeA);    
    ImprimeGols(nomeA, nomeB, m - 1, n, sequencia, indice + 1);
  }

  if (n > 0) {
    strcpy(sequencia[indice], nomeB);    
    ImprimeGols(nomeA, nomeB, m, n - 1, sequencia, indice + 1);
  }
}

int main() {
    char timeA[] = "Flamengo";
    char timeB[] = "Vasco";
    int m = 2; 
    int n = 1;

    char sequencia[m + n][50]; 

    printf("Possiveis sucessoes de gols para %s %dx%d %s:\n", timeA, m, n, timeB);

    ImprimeGols(timeA, timeB, m, n, sequencia, 0);

    return 0;
}