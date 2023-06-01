#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10];

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int tamanho = 0;

    for(int i = 0; i < 10; i++){
        if(array[i] % 2 == 1){
            tamanho++;
        }
    }

    int arrayimpares[tamanho];
    int j = 0;

    for(int i = 0; i < 10; i++){
        if(array[i] % 2 == 1){
            arrayimpares[j] = array[i];
            j++;
        }
    }

    for(int i = 0; i < tamanho; i++){
        printf("array[%d]: %d\n", i, arrayimpares[i]);
    }
    return 0;
}