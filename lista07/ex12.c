#include <stdio.h>
#include <stdlib.h>

void substituir_caractere(char **str, char alvo) {
  char *p = *str;

  while (*p != '\0') {
    if (*p == alvo) {
      *p = ' ';
    }
    
    p++;
  }
}

int main() {
  char *string = (char *)malloc(100 * sizeof(char));
  
  sprintf(string, "abcd aaab aaabcd aaa");
  
  char caractere = 'a';

  printf("Antes:   %s\n", string);

  substituir_caractere(&string, caractere);

  printf("Depois:  %s\n", string);

  free(string);

  return 0;  
}