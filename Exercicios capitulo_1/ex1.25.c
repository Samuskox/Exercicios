#include <stdio.h>
#include <stdlib.h>

int main(){

    float fahrenheit;
    

    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32)/1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", fahrenheit, celsius);

    return 0;
}