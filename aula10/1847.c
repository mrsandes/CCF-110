#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if (a < b) {
    if (b >= c) {
      printf(":(");
    } 
    
    else {
      if (c - b < b - a) {
        printf(":(");
      } 
      
      else {
        printf(":)");
      }
    }
  } 
  
  else if (a > b) {
    if (b <= c) {
      printf(":)");
    }     
    
    else {
      if (b - c < a - b) {
        printf(":)");
      } 
      
      else {
        printf(":(");
      }
    }
  } 
  
  else { 
    if (b < c) {
      printf(":)");
    } 
    
    else {
      printf(":(");
    }
  }
  
  printf("\n");
 
  return 0;
}