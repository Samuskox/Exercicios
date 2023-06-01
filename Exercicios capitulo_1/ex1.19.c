#include <stdio.h>
#include <stdlib.h>

int main (){

    float raio;
    
    printf("Valor do raio do circulo: ");
    scanf("%f", &raio);

    float pi = 3.141592;

    float diametro = raio * 2;
    float circuferencia = 2*pi*raio;
    float area = (raio*raio)*pi;

    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circuferencia);
    printf("Area = %.2f", area);

    return 0;
}