#include <stdio.h>
#include <stdlib.h>

int main() {
  char *vetor = (char *)malloc(10 * sizeof(char));

  for (int i = 0; i < 10; i++)  {
    *(vetor + i) = '0' + i;
  }

  for (int i = 0; i < 10; i++) {
    printf("%c ", *(vetor + i));
  }  

  free(vetor);

  return 0;
}