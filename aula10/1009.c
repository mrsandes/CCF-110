#include <stdio.h>
 
int main() {
  char nome[50];
  float salario, montante;
  
  fgets(nome, 50, stdin);
  scanf("%f %f", &salario, &montante);
  
  printf("TOTAL = R$ %.2f\n", montante * 0.15 + salario);

  return 0;
}