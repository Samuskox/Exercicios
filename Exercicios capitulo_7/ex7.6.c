#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lePositivo();
int somaDivisores(int);

int main(){
    int array[5];

    for(int i = 0; i < 5 ;i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
        lePositivo(array);
    }

    for(int i = 0; i < 5; i++){
        printf("Soma dos divisores de %d: %d\n", array[i], somaDivisores(array[i]));
    }
    
    return 0;
}

int lePositivo(int array[]){
    for(int i = 0; i < 5; i++){

    if(array[i] < 0){
        do{
                printf("Entre com um valor positivo: ");
                scanf("%d", &array[i]);
            }while(array[i] < 0);
        }
    }
}

int somaDivisores(int n){
    int divisorsoma = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            divisorsoma += i;
        }
    }

    if(divisorsoma == 0){
        divisorsoma++;
    }
    return divisorsoma;
}

