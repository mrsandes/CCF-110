#include <stdio.h>
#include <stdlib.h>

int main() {
  float *x = (float *)malloc(sizeof(float)); 
  *x = 3.14; 
  
  float *y = x; 
  printf("Valor de x: %.2f\n", *x); 
  printf("Valor de y: %.2f\n", *y); 

  return 0;
}