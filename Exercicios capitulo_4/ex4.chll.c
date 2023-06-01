#include <stdio.h>

int main(){

    int array[9];

        for(int i = 0; i < 10; i++){
            printf("array[%d]: ", i);
            scanf("%d", &array[i]);
        }

        printf("%d", array[0]);

        for(int i = 0; i < 10; i++){
            printf("array[%d]: %d\n", i, array[i]);
        }

    return 0;
}