#include <stdio.h>
 
int main() {
  int n = 0;
  double valor, soma = 0.0;
  char opcao;
  
  scanf("%c", &opcao);
  
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &valor);
      
      if (i + j > 11 && i + j > j * 2) {      
        soma += valor;
        n++;
      }
    }
  }
  
  if (opcao == 'S' || opcao == 's') {
    printf("%.1lf\n", soma);
  }
  
  else {
    printf("%.1lf\n", (double)soma / n);
  }

  return 0;
}