#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[10];

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int valor;
    printf("Posicao a ser removida (0 a 9): ");
    scanf("%d", &valor);

    while(valor < 0 || valor > 9){
        printf("Posicao invalida, forneca novamente!");
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &valor);
    }

    for(int i = 0; i < 10; i++){
        if(array[valor] != array[i]){
            printf("array[%d] = %d\n", i, array[i]);
        }
    }

    return 0;
}