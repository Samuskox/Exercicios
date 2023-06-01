#include <stdio.h>
#include <stdlib.h>

int main(){

    float baseMaior;
    float baseMenor;
    float Altura;


    printf("Valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Valor da Altura: ");
    scanf("%f", &Altura);

    float Area = ((baseMaior + baseMenor) * Altura)/2;

    printf("Area = %.2f", Area);

    return 0;
}