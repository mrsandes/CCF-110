#include <stdio.h>
#include <stdlib.h>

void main() {
  int *p, *q, i=99, j=10;
  p = &i; // aponta para o endereço de i
  p = &*&i; // aponta para o endereço de i, pois &*&i é equivalente a &i
  i = *&*&j; // i recebe o valor de j, pois *&*&j é equivalente a j
  q = p; // q aponta para o mesmo endereço que p, ou seja, para i
  i=(*p)++ + *q; // i recebe o valor de *p (que é 10) e depois incrementa *p e soma com o valor de *q (que agora é 11)
  i=(*&j); // i recebe o valor de j, pois *&j é equivalente a j

  printf( "a) p = &i: %d \n", &i); // #I001
  printf( "b) p = &*&i: %d \n", &*&i); // #I001
  printf( "c) i = (*&)j: %d \n", (*&)j); // 10 (erro no enunciado, deveria ser i = *&j)
  printf( "d) i = *&*&j: %d \n", *&*&j); // 10
  printf( "e) q = &p: %d \n", &p); // #J0F10 (erro no enunciado, deveria ser q = p: p)
  printf( "f) i = (*p)++ +*q: %d \n", (*p)++ +*q); // 21
}

// endereço da variável i é #I001 e j seja #J0F10