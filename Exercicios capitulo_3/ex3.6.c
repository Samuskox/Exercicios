#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("Valor incorreto (negativo)");
    } else {
        for(int i = numero; i >= 0; i--){
            printf("%d ", i);
        }
    }

    return 0;

}