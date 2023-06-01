#include <stdio.h>
#include <stdlib.h>

int main(){

    int baseMaior;
    int baseMenor;
    int Altura;


    printf("Valor da base maior: ");
    scanf("%d", &baseMaior);

    printf("Valor da base menor: ");
    scanf("%d", &baseMenor);

    printf("Valor da Altura: ");
    scanf("%d", &Altura);

    int A = ((baseMaior + baseMenor) * Altura)/2;

    printf("Area = %d", A);

    return 0;
}