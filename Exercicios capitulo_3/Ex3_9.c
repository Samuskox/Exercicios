#include <stdlib.h>
#include <stdio.h>

int main(){

    int numero;

    printf("Tabuada do numero: ");
    scanf("%d", &numero);

    for(int i = 0; i <= 10; i++){
        int resultado = numero * i;
        printf("%d X %d = %d\n", numero, i, resultado);
    }

    return 0; 
}