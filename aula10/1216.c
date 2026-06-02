#include <stdio.h>

int main() {
  double total = 0, distancia;
  int i = 0;
  char nome[50];
  
  while (1) {
    if (fgets(nome, 50, stdin) == NULL){
      break;
    }         

    scanf("%lf", &distancia);
    getchar();
    
    total += distancia;
    i++;
  }
  
  printf("%.1lf\n", total / i);

  return 0;
}