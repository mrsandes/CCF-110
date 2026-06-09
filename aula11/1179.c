#include <stdio.h>
 
int main() {
  int valor;
  int par[5], impar[5];
  int tamPar = 0, tamImpar = 0;
  
  while (scanf("%d", &valor) == 1) {
    if (tamPar == 5) {
      for (int i = 0; i < 5; i++) {
        printf("par[%d] = %d\n", i, par[i]);
        par[i] = 0;
      }
      
      tamPar = 0;
    }
    
    if (tamImpar == 5) {
      for (int i = 0; i < 5; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
        impar[i] = 0;
      }
      
      tamImpar = 0;
    }
    
    if (valor % 2 == 0) {
      par[tamPar] = valor;
      tamPar++;
    }
    
    else {
      impar[tamImpar] = valor;
      tamImpar++;
    }
  }
  
  for (int i = 0; i < tamImpar; i++) {
    printf("impar[%d] = %d\n", i, impar[i]);
  }
  
  for (int i = 0; i < tamPar; i++) {
    printf("par[%d] = %d\n", i, par[i]);
  }
  
  return 0;
}