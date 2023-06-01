#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int numero;
    printf("Multiplicar por: ");
    scanf("%d", &numero);


    int arrayMult[3][4];

    printf("arrayMult:\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            arrayMult[i][j] = array[i][j] * numero;
            if(j > 0 && j < 4){
                printf(" ");
            }
            printf("%03d", arrayMult[i][j]);
        }
        printf("\n");
    }


    return 0;
}