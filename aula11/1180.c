#include <stdio.h>
 
int main() {
  int N, menor, pos;
  
  scanf("%d", &N);
  
  int vetor[N];
  
  for (int i = 0; i < N; i++) {
    scanf("%d", &vetor[i]);
    
    if (i == 0) {
      menor = vetor[i];
      pos = i;
    }
    
    if (vetor[i] < menor) {
      menor = vetor[i];
      pos = i;
    }
  }
  
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", pos);
 
  return 0;
}