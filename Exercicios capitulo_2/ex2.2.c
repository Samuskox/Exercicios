#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;

    printf("Entre com um numero: ");
    scanf("%d", &numero1);

    printf("Entre com outro numero: ");
    scanf("%d", &numero2);

    if(numero1 >= numero2){
        printf("Ordem crescente: %d <= %d", numero2, numero1);
    }else if(numero2 >= numero1){
        printf("Ordem crescente: %d <= %d", numero1, numero2);
    }


    return 0;
}