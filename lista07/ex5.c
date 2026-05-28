#include <stdio.h>
#include <stdlib.h>

int somaptr(int a, int *pb) {
  return a + (*pb);
}

int main() {
  int x = 10;
  int *y = &x;

// a)   
  int res = somaptr(x, y); // passa int a como int e int *pb como int *, o que é correto
  printf("Resultado da soma: %d\n", res);
//b) 
  int res = somaptr(y, x); // passa int *pb como int e int a como int, o que é um erro de tipo
  printf("Resultado da soma: %d\n", res);
// c) 
  int res = somaptr(&x, &y); // passa int a como int * e int pb como int **, o que é um erro de tipo
  printf("Resultado da soma: %d\n", res);
// d) 
  int res = somaptr(*y, &x); // passa int a como int e int pb como int *, o que é correto
  printf("Resultado da soma: %d\n", res);
// e) 
  int res = somaptr(*y, y); // passa int a como int e int pb como int *, o que é correto
  printf("Resultado da soma: %d\n", res);

  return 0;
}