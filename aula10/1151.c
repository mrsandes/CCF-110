#include <stdio.h>
 
int main() {
  int N;
  
  scanf("%d", &N);

  int vetor[N];
  
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      vetor[i] = 0;
    }
      
    else if (i == 1) {
      vetor[i] = 1;
    }
      
    else {
      vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
      
    printf("%d", vetor[i]);
      
    if (i != N - 1) {
      printf(" ");
    }
  }
  
  printf("\n");

  return 0;
}