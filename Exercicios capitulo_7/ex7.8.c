#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool saoAmigos(int n1, int n2){

    int divisorsoma1 = 0;
    for(int i = 1; i < n1; i++){
        if(n1 % i == 0){
            divisorsoma1 += i;
        }
    }

    int divisorsoma2 = 0;
    for(int i = 1; i < n2; i++){
        if(n2 % i == 0){
            divisorsoma2 += i;
        }
    }

    if(divisorsoma1 == n2 && divisorsoma2 == n1){
        return true;
    } else {
        return false;
    }

    

}

int main(){ 

    int array1[5];
    int array2[5];

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < 5; i++){
        if(saoAmigos(array1[i], array2[i]) == true){
            printf("%d e %d sao amigos\n", array1[i], array2[i]);
        } else {
            printf("%d e %d nao sao amigos\n", array1[i], array2[i]);
        }
        
    }


    return 0;
}