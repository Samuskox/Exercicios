#include <stdlib.h>
#include <stdio.h>

int main(){

    float soma = 0;
    float somatorio = 0;
    int quantidade = 0;
    float media = 0;
    

    while(soma >= 0){
        printf("entre com um valor: ");
        scanf("%f", &soma);
        
        if(soma >= 0){
            somatorio += soma;
            quantidade++;
        }
    }

    media = somatorio + 0/quantidade; 

    printf("somatorio: %.2f\n", somatorio);
    printf("media: %.2f\n", media);
    printf("quantidade: %d\n", quantidade);
    
    return 0;
}