#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Numeros pares: ");

    //varrer array pra verificar se tem numeros pares
    int verificacaopar = 0;
    for(int i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            verificacaopar += 1;
        } 
    }

    if(verificacaopar == 0){
            printf("nao ha.");
        } else if (verificacaopar != 0){
            for(int i = 0; i < 5; i++){
                if(array[i] % 2 == 0){
                    printf("%d ", array[i]);
                }
            }
        }

        printf("\n");

        printf("Numero impares: ");
    
    if(verificacaopar == 5){
            printf("nao ha.");
        } else if (verificacaopar >= 0){
            for(int i = 0; i < 5; i++){
                if(array[i] % 2 == 1){
                    printf("%d ", array[i]);
                }
            }
        }
    return 0;
}