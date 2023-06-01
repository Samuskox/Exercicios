#include <stdlib.h>
#include <stdio.h>

int main(){

    int numero;
    printf("N1: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("Nao ha fatorial de numero negativo.");
    } else {

        int fatorial = 1;

    for(int i = 1; i <= numero; i++){
        fatorial *= i;
    }

    printf("%d! = %d", numero, fatorial);

    }

    return 0;
}