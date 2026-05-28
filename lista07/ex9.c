#include <stdio.h>
#include <stdlib.h>

void main() {
  int array[5] = {1,2,3,4,5};
  int tamanho = 5;
  int i, j, temp;
  j = tamanho-1;

  for(i = 0 ; i < j; i++) {
    temp = *(array+i);
    *(array+i) = *(array+j);
    *(array+j) = temp;
    j--;
  }

  printf("%d, %d, %d, %d, %d", array[0], array[1], array[2], array[3], array[4]);
}

// a) O que vai ser impresso pelo printf na tela? 
//    5 4 3 2 1

// b) O que faz esse código? 
//    inverte a ordem dos elementos do array, ou seja, o primeiro elemento passa a ser o último, o segundo passa 
//    a ser o penúltimo, e assim por diante, até que todos os elementos estejam na ordem inversa.

// c) Para que serve a variável temp neste código?
//    A variável temp é utilizada para armazenar temporariamente o valor de um elemento do array durante a troca de posições,
//    evitando que o valor seja perdido durante a atribuição. Ela é essencial para realizar a troca de forma correta.

// d) Por que não seria correto utilizar *(array+5)?
//    Porque o array tem índices de 0 a 4, ou seja, o índice 5 está fora dos limites do array, o que pode causar um comportamento indefinido.  