#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[2][3];
    for(int i = 0; i < 2;i++){
        for(int j = 0; j < 3; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int ii = 0;
    int jj = 2;

    int arrayM[3][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
                arrayM[i][j] = array[j][i];
            
        }
    }

    printf("M:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(j > 0 && j < 3){
                printf(" ");
            }
            printf("%03d", array[i][j]);
        }
        printf("\n");
    }


    printf("Mt:\n");
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 2; j++){
            if(j == 1){
                printf(" ");
            }
            printf("%03d", arrayM[i][j]);
        }
        printf("\n");
    }
    return 0;
}