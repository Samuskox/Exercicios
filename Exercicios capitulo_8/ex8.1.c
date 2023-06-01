#include <stdio.h>
#include <stdlib.h>

void somatorioMedia(float a[], int n, float *somatorio, float *media);

int main(void) {
    float array[10];

  for(int i = 0; i < 10; i++){
    printf("n[%d]: ", i);
    scanf("%f", &array[i]);
  }

  int n = 10;
  float somatorio = 0;
  float media = 0;

  somatorioMedia(array, n, &somatorio, &media);
  
  return 0;
}

void somatorioMedia(float a[], int n, float *somatorio, float *media){
    for(int i = 0; i < n; i++){
      *somatorio += a[i];
    }
  *media = *somatorio/n;
  printf("Somatorio: %.2f\n", *somatorio);
  printf("Media: %.2f", *media);
}