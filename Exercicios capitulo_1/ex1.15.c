#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura;
    float largura;

    printf("Valor da altura: ");
    scanf("%f", &altura);

    printf("Valor da Largura: ");
    scanf("%f", &largura);

    float Perimetro = (largura * 2) + (altura * 2);
    float Area = largura * altura;

    printf ("Perimetro = %.2f\n", Perimetro);
    printf ("Area = %.2f", Area);

    return 0;
}