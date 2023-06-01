#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor;

    printf("Valor do produto: ");
    scanf("%f", &valor);

    float desconto = valor - (valor * 0.09);
    
    printf("Preco de venda com 9%% de desconto: %.2f", desconto);

    return 0;
}