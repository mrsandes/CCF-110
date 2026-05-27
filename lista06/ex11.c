#include <stdio.h>
#include <stdlib.h>

int diff(int H1, int M1, int H2, int M2) {
  int total1 = H1 * 60 + M1;
  int total2 = H2 * 60 + M2;

  if (total1 > total2) {
    return total1 - total2;
  } 
  
  else {
    return total2 - total1;
  }
}

int main() {
  int H1, M1, H2, M2;

  printf("Digite a hora e os minutos do primeiro horario: ");
  scanf("%d %d", &H1, &M1);

  printf("Digite a hora e os minutos do segundo horario: ");
  scanf("%d %d", &H2, &M2);

  printf("A diferenca entre os dois horarios eh: %d minutos\n", diff(H1, M1, H2, M2));

  return 0;
}