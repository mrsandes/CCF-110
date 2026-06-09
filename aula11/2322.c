#include <stdio.h>
 
int main() {
  int N;
  
  scanf("%d", &N);
  
  int pecas[N];
  
  for (int i = 0; i < N; i++) {
    pecas[i] = 0;
  }
  
  int peca;
  
  while (scanf("%d", &peca) == 1) {
    pecas[peca - 1] = 1;
  }
  
  for (int i = 0; i < N; i++) {
    if (pecas[i] == 0) {
      printf("%d\n", i + 1);
    }
  }

  return 0;
}