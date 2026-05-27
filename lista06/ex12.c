#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

int JogaDado(int num_faces) {
  return (rand() % num_faces) + 1;  
}

int testaDados() {
  int total10 = 0, total20 = 0, total100 = 0;

  for (int i = 0; i < 100; i++) {
    total10 += JogaDado(10);
  }

  for (int i = 0; i < 50; i++) {
    total20 += JogaDado(20); 
  }

  total100 += JogaDado(100);

  // printf("Total obtido com 10 faces: %d\n", total10);
  // printf("Total obtido com 20 faces: %d\n", total20);
  // printf("Total obtido com 100 faces: %d\n", total100);

  if (total10 > total20 && total10 > total100) {
    return 10;
  } 

  else if (total20 > total10 && total20 > total100) {
    return 50; 
  } 
  
  else {
    return 100;
  }
}

int main() {
  // srand(time(NULL)); 

  printf("%d\n", testaDados());

  return 0;
}