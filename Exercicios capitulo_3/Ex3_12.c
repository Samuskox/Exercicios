#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;

    printf("Numero 1: ");
    scanf("%d", &numero1);

    printf("Numero2: ");
    scanf("%d", &numero2);

    int pares = 0;

    if(numero1 >= numero2){
        int i = 0;
        for(i = numero2; i <= numero1; i++){
                
                if( i % 2 == 0){
                    pares++;
                }
        }
        printf(" %d ", pares);
    } else if (numero2 >= numero1){
        int i = 0;
        for(i = numero1; i <= numero2; i++){
                
                if( i % 2 == 0){
                    pares++;
                }
        }
        printf(" %d ", pares);
    }

    return 0;
}