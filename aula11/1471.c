#include <stdio.h>

int main() {
  int N, R;

  while (scanf("%d %d", &N, &R) == 2) {
    if (N == R) {
      for (int i = 0; i < N; i++) {
        scanf("%*d");
      }

      printf("*");
    }

    else {
      int mergulhadores[N], mergulhador;

      for (int i = 0; i < N; i++) {
        mergulhadores[i] = 0;
      }

      for (int i = 0; i < R; i++) {
        if (scanf("%d", &mergulhador) == 1) {
          mergulhadores[mergulhador - 1] = 1;
        }
      }

      for (int i = 0; i < N; i++) {
        if (mergulhadores[i] == 0) {
          printf("%d ", i + 1);
        }
      }
    }

    printf("\n");
  }

  return 0;
}