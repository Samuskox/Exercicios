#include <stdlib.h>
#include <stdio.h>

int main(){

    float array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }

    float soma;
    float produto = 1;

    for(int i = 0; i < 5; i++){
        soma += array[i];
        produto *= array[i];
    }

    printf("Somatorio: %.2f\n", soma);
    printf("Produtorio: %.2f", produto);

    return 0;
}