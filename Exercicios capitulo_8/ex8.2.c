#include <stdio.h>
#include <stdlib.h>

void troca(int *n1, int *n2){
  int t;
  printf("Antes: \n");
  printf("n1: %d \nn2: %d\n", *n1, *n2);

  t = *n1;
  *n1 = *n2;
  *n2 = t;

  printf("Antes: \n");
  printf("n1: %d \nn2: %d", *n1, *n2);

}

int main(){

  int n1;
  printf("n1: ");
  scanf("%d", &n1);

  int n2;
  printf("n2: ");
  scanf("%d", &n2);

  troca(&n1, &n2);
  
  return 0;
}