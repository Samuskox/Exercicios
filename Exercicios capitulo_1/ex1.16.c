#include <stdio.h>
#include <stdlib.h>

int main(){

    float base;
    float altura;

    printf("base: ");
    scanf("%f", &base);

    printf("altura: ");
    scanf("%f", &altura);

    float Area = (base * altura)/2;

    printf("Area = %.2f", Area);

    
    return 0;
}