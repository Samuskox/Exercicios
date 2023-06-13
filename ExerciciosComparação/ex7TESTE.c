#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lePositivo(int a[]){
    for(int i = 0; i < 5; i++){

    if(a[i] < 0){
        do{
            printf("Entre com um valor positivo: ");
            scanf("%d", &a[i]);
                printf("WHAT");
            }while(a[i] < 0);
        }
    }

        for(int i = 0; i < 5; i++){
            printf("DENTRO DA FUNCAO n[%d]: %d\n", i, a[i]);
    }
}



int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
        lePositivo(array);
    }

    for(int i = 0; i < 5; i++){
            printf("n[%d]: %d\n", i, array[i]);
    }


    return 0;
}

