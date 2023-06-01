#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );


int main(void) {

  int totalSeg;
  printf("Total de Segundos: ");
  scanf("%d", &totalSeg);

  int h;
  int m;
  int s;
  
    decompoeTempo(totalSeg, &h, &m, &s);

    //printf("\n %d %d %d", h, m , s);
  return 0;
}

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg){
  int minuto = 0;
  int hora = 0;
  for(int i = 1; i <= totalSeg; i++){
    
    if(i % 60 == 0){
      minuto++;
    }

    if(minuto == 60){
      hora++;
      minuto = 0;
    }
  }
  printf("%d segundo(s) corresponde(m) a: \n", totalSeg);
  *horas =  hora;     //(totalSeg/60)/60;
  printf("%d hora(s)\n", *horas);
  *minutos = minuto;    //totalSeg / 60;
  printf("%d minuto(s)\n", *minutos);
  *seg = totalSeg % 60;
  printf("%d segundo(s)", *seg);
}