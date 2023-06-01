#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int lePositivo(int n){
    if(n < 0){
        do{
            printf("Entre com um valor positivo: ");
            scanf("%d", &n);
        }while(n < 0);
    }
}

int tipoTriangulo(int, int, int);


int main(){ 

    int ladoA[5];
    int ladoB[5];
    int ladoC[5];

    for(int i = 0; i < 5; i++){
        printf("LadoA[%d]: ", i);
        scanf("%d", &ladoA[i]);
        ladoA[i] = lePositivo(ladoA[i]);
        printf("LadoB[%d]: ", i);
        scanf("%d", &ladoB[i]);
        ladoB[i] = lePositivo(ladoB[i]);
        printf("LadoC[%d]: ", i);
        scanf("%d", &ladoC[i]);
        ladoC[i] = lePositivo(ladoC[i]);
    }

    for(int i = 0; i < 5; i++){
        if(tipoTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 0){
            printf("Valores %d, %d e %d: nao formam um triangulo\n", ladoA[i], ladoB[i], ladoC[i]);
        } else if(tipoTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 1){
            printf("Valores %d, %d e %d: triangulo equilatero\n", ladoA[i], ladoB[i], ladoC[i]);
        } else if(tipoTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 2){
            printf("Valores %d, %d e %d: triangulo isosceles\n", ladoA[i], ladoB[i], ladoC[i]);
        } else if(tipoTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 3){
            printf("Valores %d, %d e %d: triangulo escaleno\n", ladoA[i], ladoB[i], ladoC[i]);
        }
    }

    return 0;
}

int tipoTriangulo(int LadoA, int LadoB, int LadoC){
    if(LadoA == LadoB && LadoB == LadoC){
        return 1;
    }

    if(LadoA < LadoB && LadoB < LadoC){
        return 3;
    }

    if((LadoA == LadoB && LadoB != LadoC) || 
        (LadoA == LadoC && LadoC != LadoB) || 
        (LadoC == LadoB && LadoB != LadoA)){
        return 2;
    }

    return 0;
}