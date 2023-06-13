#include <stdio.h>
#include <stdlib.h>

int main(){

    int termo;
    printf("termo desejado: ");
    scanf("%d", &termo);

    int termoAnterior = 1;
    int termoAtual = 1;
    int termoProximo = 1;

    for(int i = 1; i < termo; i++){
        termoProximo = termoAnterior + termoAtual;
        termoAnterior = termoAtual;
        termoAtual = termoProximo;
    }

    printf("Fibonacci de %d e %d", termo, termoProximo);

    return 0;

}

    
