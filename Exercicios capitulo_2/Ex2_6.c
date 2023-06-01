#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero;

    printf("Entre com um valor: ");
    scanf("%f", &numero);

    if(numero >= 20){
        float numeroM = numero / 2;
        printf("A metade de %.2f e %.2f", numero, numeroM);
    } else {
        float numeroT = numero * 3;
        printf("O triplo de %.2f e %.2f", numero, numeroT);
    }

    return 0;
}