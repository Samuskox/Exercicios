#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){

    int array[5];
    for(int i = 0; i <  5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int numero;
    printf("Multiplicar por: ");
    scanf("%d", &numero);

    

    for(int i = 0; i < 5; i++){
        array[i] = array[i] * numero;
        printf("arrayMult[%d] = %d\n", i, array[i]);
    }


    return 0;
}