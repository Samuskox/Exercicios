#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero1;
    float numero2;

    printf("Entre com um numero: ");
    scanf("%f", &numero1);

    printf("Entre com outro numero: ");
    scanf("%f", &numero2);

    if(numero1 + numero2 > 10 ){
        printf("Os numeros fornecidos foram %.2f e %.2f", numero1, numero2);
    } else {
        float resultado = numero1 - numero2;
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", numero1, numero2, resultado);
    }
    return 0;
}