#include <stdio.h>
#include <stdlib.h>

int main(){

    float celsius;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (1.8 * celsius)+ 32;

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", celsius, fahrenheit);

    return 0;
}