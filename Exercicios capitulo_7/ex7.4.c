#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lePositivo();
int somatorio();

int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
        array[i] = lePositivo(array[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("somatorio de 1 a %d: %d\n", array[i], somatorio(array[i]));
    }
    
    return 0;
}



int lePositivo(int n){
    if(n < 0){
        do{
            printf("Entre com um valor positivo: ");
            scanf("%d", &n);
        }while(n < 0);
    }
}

int somatorio(int n){
    int somatorio = 0;
    for(int i = 1; i <= n; i++){
        somatorio += i;
    }
    return somatorio;
}