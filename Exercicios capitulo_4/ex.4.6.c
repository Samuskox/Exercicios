#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%02d]: ", i);
        scanf("%d", &array[i]);
    } 

    int numeroBusca;
    printf("Buscar por: ");
    scanf("%d", &numeroBusca);

    int array2[5] = {0,1,2,3,4};

    int soma = 0;
    int total = 0;

    for(int i = 0; i < 5; i++){
        if(array[i] == numeroBusca){
                total += 1;
        }
    }


    if(total == 1){

        for (int i = 0; i < 5; i++){
            if(array[i] == numeroBusca){
                printf("O valor %d foi encontrado no indice %d", numeroBusca, array2[i]);
            }
        }

    } else if (total == 2){

        for(int i = 0; i < 5; i++){
            if(array[i] == numeroBusca){
                if(soma == 0){
                    printf("O valor %d foi encontrado nos indices %d", numeroBusca, array2[i]);
                } else if (soma != 0){
                    printf(" e %d", array2[i]);
            }
            soma++;
        }
    }

    } else if(total > 2){

        for(int i = 0; i < 5; i++){
        if(array[i] == numeroBusca){
            if(soma == 0){
                printf("O valor %d foi encontrado no indice %d", numeroBusca, array2[i]);
                soma++;
            } else if (soma + 1 != total){
                printf(", %d", array2[i]);
                soma++;
            } else if(soma = total){
                printf(" e %d", array2[i]);
                soma++;
            }
        }
        }
    }

//    printf("\nTOTAL: %d", total);
//    printf("\nSOMA: %d", soma);

    return 0;
}