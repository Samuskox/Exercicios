#include <stdio.h>
#include <stdlib.h>

int main (){

    float ValorLado;

    printf("Valor do Lado: ");
    scanf("%f", &ValorLado);

    float Perimetro = ValorLado * 4;
    float Area = ValorLado * ValorLado;

    printf("Perimetro = %.2f\n", Perimetro);
    printf("Area = %.2f", Area);

    return 0;
}