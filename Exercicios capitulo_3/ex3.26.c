#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor = 0;
    int maior = 0;
    int menor = 0;

    printf("Entre com um valor: ");
    scanf("%d", &valor);

    if(valor >= 0){
        maior = valor;
        menor = valor;
    }

    while(valor >= 0){
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        if(valor >= 0){

            if(valor >= maior){
                maior = valor;
            }

            if(valor <= menor){
                menor = valor;
            }
            
        }
    }
    
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d", maior);

    return 0;
}