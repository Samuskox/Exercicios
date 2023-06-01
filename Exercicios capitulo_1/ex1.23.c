#include <stdio.h>
#include <stdlib.h>

int main(){

    int anoAtual;
    int anoNasc;
    int idade;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNasc);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;

    printf("Idade aproximada: %d anos", idade);

    return 0;
}