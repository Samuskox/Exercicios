#include <stdio.h>
#include <stdlib.h>

int main(){

    float diagMaior;
    float diagMenor;

    printf("Valor da diagonal maior: ");
    scanf("%f", &diagMaior);

    printf("Valor da diagonal menor: ");
    scanf("%f", &diagMenor);

    float Area = (diagMaior*diagMenor)/2;

    printf("Area = %.2f", Area);
    return 0; 
}