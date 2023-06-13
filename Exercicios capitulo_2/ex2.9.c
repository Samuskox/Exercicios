#include <stdio.h>
#include <stdlib.h>

int main(){

    int lados;
    float tamanhoLados;
    

    printf("Entre com a quantidade de lados: ");
    scanf("%d", &lados);

    printf("Entre com a medida dos lados: ");
    scanf("%f", &tamanhoLados);

    if(lados == 3){
        float perimetro = tamanhoLados * lados;
        printf("TRIANGULO de perimetro %.2f", perimetro);
    }else if(lados == 4){
        float area = tamanhoLados * tamanhoLados;
        printf("QUADRADO de area %.2f", area);
    } else if (lados == 5){
        printf("PENTAGONO");
    } else if (lados > 5){
        printf("Poligono nao identificado");
    }

    return 0;
}