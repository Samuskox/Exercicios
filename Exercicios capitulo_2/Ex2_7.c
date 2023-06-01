#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero1;
    float numero2;

    printf("entre com um numero: ");
    scanf("%f", &numero1);

    printf("entre com um segundo numero: ");
    scanf("%f", &numero2);

    if(numero1 + numero2 > 10 ){
        printf("Os numero fornecidos foram %.2f e %.2f", numero1, numero2);
    } else {
        float resultado = numero1 - numero2;
        printf("a subtracao entre %.2f e %.2f e igual %.2f", numero1, numero2, resultado);
    }
    return 0;
}