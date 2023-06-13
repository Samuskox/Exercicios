#include <stdlib.h>
#include <stdio.h>

int main(){

    float soma = 0.00;
    float somatorio = 0.00;
    int quantidade = 0;
    float media = 0.00;
    

    while(soma >= 0){
        printf("entre com um valor: ");
        scanf("%f", &soma);
        
        if(soma >= 0){
            somatorio += soma;
            quantidade++;
        }
    }

    media = somatorio/quantidade; 

    if(quantidade == 0){
        media = 0.00;
    }

    
    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d\n", quantidade);
    
    return 0;
}