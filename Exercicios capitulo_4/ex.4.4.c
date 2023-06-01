#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%02d]: ", i);
        scanf("%d", &array[i]);
    }

    int busca;
    printf("Buscar por: ");
    scanf("%d", &busca);

    for(int i = 0; i < 5; i++){
        printf("indice %d: ", i);
        if(array[i] != busca){
            printf("NAO ACHEI\n");
        } else {
            printf("ACHEI\n");
        }
    }
    return 0;
}