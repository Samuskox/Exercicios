#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int numero;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 2: 
            printf("O valor fornecido foi 2.");
        break;
    case 4:
        printf("O valor fornecido foi 4.");
        break;
    case  6:
        printf("O valor fornecido foi 6.");
        break;
    case 8 :
        printf("O valor fornecido foi 8.");
        break;
    default:
        printf("Valor invalido.");
        break;
    }

    return 0;
}