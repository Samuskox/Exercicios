#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Forneca os valores do primeiro array:\n");
    int array1[5];
    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Forneca os valores do segundo array:\n");
    int array2[5];
    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    int arraysoma[5];

    for(int i = 0; i < 5; i++){
        arraysoma[i] = array1[i] + array2[i];
        printf("arraySoma[%d] = %d\n", i, arraysoma[i]);
    }

    return 0;
}