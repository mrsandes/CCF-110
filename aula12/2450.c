#include <stdio.h>

int main() {
  int L, C;
  
  if (scanf("%d %d", &L, &C) != 2) return 0;
  
  int matriz[L][C], somaL[L];
  
  for (int i = 0; i < L; i++) {
    somaL[i] = 0;
  }
  
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      scanf("%d", &matriz[i][j]);
      somaL[i] += matriz[i][j];
    }
  }
  
  for (int i = 0; i < L - 1; i++) {
    if (somaL[i] == 0 && somaL[i + 1] > 0) {
      printf("N\n");
      return 0;
    }
  }

  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      if (matriz[i][j] != 0) {
        for (int m = i + 1; m < L; m++) {
          for (int n = 0; n < j + 1; n++) {
            if (matriz[m][n] != 0) {
              printf("N\n");
              return 0;
            }
          }
        }
        break; 
      }
    }
  }
  
  printf("S\n");
  return 0;
}