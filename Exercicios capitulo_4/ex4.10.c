#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int numero;

    printf("Copiar maiores que: ");
    scanf("%d", &numero);

    int total = 0;

    for(int i = 0; i < 5; i++){
        if(array[i] > numero){
            total += 1;
        }
    }

    if(total == 0){
        printf("Nao houve copia!");
    } else {
        int arrayCopia[total];

        int j = 0;

        for(int i = 0; i < 5; i++){
            if(array[i] > numero){
            arrayCopia[j] = array[i];
            j++;
        }
    }
    for(int i = 0; i < total; i++){
        printf("arrayCopia[%d] = %d\n", i, arrayCopia[i]);
    }

    }

    return 0;
}