#include <stdio.h>
#include <stdlib.h>

int main(){

    int array1[3][2];
    int array2[2][3];
    int array3[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

        for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }




    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            array3[i][j] = (array1[i][0] * array2[0][j]) + (array1[i][1] * array2[1][j]);
        }
    }

    printf("A X B = \n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j > 0 && j < 3){
                printf(" ");
            }
            printf("%03d", array3[i][j]);
        }
        printf("\n");
    }
    return 0;
}