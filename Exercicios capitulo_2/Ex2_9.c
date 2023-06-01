#include <stdio.h>
#include <stdlib.h>

int main(){

    int lados;
    float tamanhoLados;
    

    printf("entre com a quantidade de lados: ");
    scanf("%d", &lados);

    printf("entre com a medida dos lados: ");
    scanf("%f", &tamanhoLados);

    if(lados == 3){
        float perimetro = tamanhoLados * lados;
        printf("triangulo de perimetro %.2f", perimetro);
    }else if(lados == 4){
        float perimetro = tamanhoLados * lados;
        printf("quadrado de perimetro %.2f", perimetro);
    } else if (lados == 5){
        float perimetro = tamanhoLados * lados;
        printf("pentagono de perimetro %.2f", perimetro);
    } else if (lados == 6){
        float perimetro = tamanhoLados * lados;
        printf("quadrado de perimetro %.2f", perimetro);
    } else if (lados == 7){
        float perimetro = tamanhoLados * lados;
        printf("poligono de perimetro %.2f", perimetro);
    } else {
        printf("Poligono nao identificado");
    }

    return 0;
}