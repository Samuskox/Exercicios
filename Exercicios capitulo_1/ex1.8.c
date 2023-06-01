#include <stdio.h>
#include <stdlib.h>

int main(){

    int largura;
    int altura;


    printf("Valor da largura: ");
    scanf("%d", &largura );

    printf("Valor da altura: ");
    scanf("%d", &altura );

    int P = (largura * 2) + (altura * 2);
    int A = largura * altura;

    printf("Perimetro = %d\n", P);
    printf("Area = %d", A);



    return 0;
    
    }