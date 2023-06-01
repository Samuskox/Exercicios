#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int arrayinverso[5];

    int j = 0;
    

    for(int i = 4; i >= 0 ; i--){ 
        arrayinverso[j] = array[i];
        j++;
    }

    for(int i = 0; i < 5; i++){
        printf("arrayInv[%d] = %d \n", i, arrayinverso[i]);
    }
    return 0;
}