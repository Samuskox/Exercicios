#include <stdlib.h>
#include <stdio.h>

int main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%02d]: ", i);
        scanf("%d", &array[i]);
    } 

    int busca;
    printf("Buscar por: ");
    scanf("%d", &busca);

    int ocorrencia = 0;

    for(int i = 0; i < 5; i++){
        if(array[i] == busca){
            ocorrencia += 1; 
        }
    }

    printf("O array contem %d ocorrencia do valor %d.", ocorrencia, busca);

    return 0;
}