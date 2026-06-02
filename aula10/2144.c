#include <stdio.h>

int main() {
  int w1, w2, r;
  double media = 0;
  int n = 0;

  while (1) {
    scanf("%d %d %d", &w1, &w2, &r);

    if (w1 == 0 && w2 == 0 && r == 0) {
      break;
    }

    double M = (w1 * (1 + (r / 30.0)) + (w2 * (1 + (r / 30.0)))) / 2;
    media += M;
    n++;

    if (M >= 1 && M < 13) {
      printf("Nao vai da nao\n");
    } 
    
    else if (M >= 13 && M < 14) {
      printf("E 13\n");
    } 
    
    else if (M >= 14 && M < 40) {
      printf("Bora, hora do show! BIIR!\n");
    } 
    
    else if (M >= 40 && M < 60) {
      printf("Ta saindo da jaula o monstro!\n");
    } 
    
    else {
      printf("AQUI E BODYBUILDER!!\n");
    }
  }

  if (media / n > 40) {
    printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
  }

  return 0;
}