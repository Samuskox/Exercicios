#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero1;
    int numero2;

    printf("entre com o primeiro numero: ");
    scanf("%d", &numero1);

    printf("entre com o segundo numero: ");
    scanf("%d", &numero2);

    if(numero1 < numero2){
        printf("Ordem Descrescente: %d >= %d", numero2, numero1);
    }else{
        printf("Ordem Descrescente: %d >= %d", numero1, numero2);
    }
    return 0;
}
