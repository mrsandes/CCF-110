#include <stdio.h>
 
int main() {
  int N;
  
  while (scanf("%d", &N) == 1) {
    int V, maior = 1;
    
    for (int i = 0; i < N; i++) {
      scanf("%d", &V);
      
      if (V >= 10 && V < 20 && maior < 3) {
        maior = 2;
      }
      
      if (V > 20) {
        maior = 3;
      }
    }
    
    printf("%d\n", maior);
  }

  return 0;
}