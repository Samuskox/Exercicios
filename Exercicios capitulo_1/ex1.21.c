#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &numero);

    int numerosucessor = numero + 1;
    int numeroantecessor = numero -1;

    printf("Sucessor de %d: %d\n", numero, numerosucessor);
    printf("Antecessor de %d: %d", numero, numeroantecessor);

    return 0;
}