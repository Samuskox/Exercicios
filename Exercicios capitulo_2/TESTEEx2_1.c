#include <stdio.h>
#include <stdlib.h>

int main (){

        int numero;

        printf("entre com um numero: ");
        scanf("%d", &numero);
        
        numero % 2 == 0 ? printf("O numero %d e par", numero) : printf("O numero %d e impar", numero);

    return 0;
}