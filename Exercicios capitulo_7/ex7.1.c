#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int absoluto(int n){    
    return fabs(n);
}

int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n%d: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("absoluto(%d) = %d\n", array[i], absoluto(array[i]));
    }

    return 0;
}