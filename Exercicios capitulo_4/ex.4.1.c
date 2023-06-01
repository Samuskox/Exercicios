#include <stdio.h>
#include <stdlib.h>

#define N 10



int main(){

    int array[5];

    printf("array[0]: ");
    scanf("%d", &array[0]);

    printf("array[1]: ");
    scanf("%d", &array[1]);

    printf("array[2]: ");
    scanf("%d", &array[2]);

    printf("array[3]: ");
    scanf("%d", &array[3]);

    printf("array[4]: ");
    scanf("%d", &array[4]);

    array[0] = array[0] * array[0] * array[0];
    array[1] = array[1] * array[1] * array[1];
    array[2] = array[2] * array[2] * array[2];
    array[3] = array[3] * array[3] * array[3];
    array[4] = array[4] * array[4] * array[4];

    printf("arrayCubo[0]: %d\n", array[0]);
    printf("arrayCubo[1]: %d\n", array[1]);
    printf("arrayCubo[2]: %d\n", array[2]);
    printf("arrayCubo[3]: %d\n", array[3]);
    printf("arrayCubo[4]: %d\n", array[4]);


    return 0;
}