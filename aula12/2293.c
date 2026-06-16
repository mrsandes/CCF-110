#include <stdio.h>
 
int main() {
  int L, C;
  
  scanf("%d %d", &L, &C);
  
  int matriz[L][C];
  int somaL[L], somaC[C], maiorL = 0, maiorC = 0;
  
  for (int i = 0; i < L; i++) {
    somaL[i] = 0;
  }
  
  for (int j = 0; j < C; j++) {
    somaC[j] = 0;
  }
  
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      scanf("%d", &matriz[i][j]);
      somaL[i] += matriz[i][j];
      somaC[j] += matriz[i][j];
    }
  }

  for (int i = 0; i < L; i++) {
    if (somaL[i] > maiorL) {
      maiorL = somaL[i];
    }
  }

  for (int j = 0; j < C; j++) {
    if (somaC[j] > maiorC) {
      maiorC = somaC[j];
    }
  }

  if (maiorL > maiorC) {
    printf("%d\n", maiorL);
  }
  
  else {
    printf("%d\n", maiorC);
  }

  return 0;
}