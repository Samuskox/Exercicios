#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int numero;

    printf("entre com um valor de numero inteiro: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 2 /* constant-expression */: 
            printf("o numero fornecido foi 2");
        /* code */
        break;
    case 4:
        printf("o numero fornecido foi 4");
        break;
    case  6:
        printf("o numero fornecido foi 6");
        break;
    case 8 :
        printf("o numero fornecido foi 8");
        break;
    default:
        printf("valor invalido");
        break;
    }

    return 0;
}