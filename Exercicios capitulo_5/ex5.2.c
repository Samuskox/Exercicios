#include <stdio.h>
#include <stdlib.h>

int main(){

    int array1[3][3];
    int array2[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    int arraysoma[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arraysoma[i][j] = array1[i][j] + array2[i][j];
        }
    }

    int i = 0;

    printf("array1:       array2:       arraySoma:\n");
    //1 linha
    for(int j = 0; j < 3; j++){
        printf("%03d ", array1[i][j]);
    }

    printf("  ");

    for(int j = 0; j < 3; j++){
        printf("%03d ", array2[i][j]);
    }

    printf("  ");

    for(int j = 0; j < 3; j++){
        if(j > 0 && j < 3){
                printf(" ");
            }
        printf("%03d", arraysoma[i][j]);
    }
    printf("\n");
    //2 linha

    i++;

    for(int j = 0; j < 3; j++){
        printf("%03d ", array1[i][j]);
    }

    printf("+ ");

    for(int j = 0; j < 3; j++){
        printf("%03d ", array2[i][j]);
    }

    printf("= ");

    for(int j = 0; j < 3; j++){
        if(j > 0 && j < 3){
                printf(" ");
            }
        printf("%03d", arraysoma[i][j]);
    }
    printf("\n");

    //3 linha
    i++;
    for(int j = 0; j < 3; j++){
        printf("%03d ", array1[i][j]);
    }

    printf("  ");

    for(int j = 0; j < 3; j++){
        printf("%03d ", array2[i][j]);
    }

    printf("  ");

    for(int j = 0; j < 3; j++){
        printf("%03d ", arraysoma[i][j]);
    }

    return 0;
}