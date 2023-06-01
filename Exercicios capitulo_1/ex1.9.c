#include <stdio.h>
#include <stdlib.h>

int main(){

        int base;
        int altura;

        printf( "Valor da base: ");
        scanf("%d", &base);

        printf ("Valor da altura: ");
        scanf("%d", &altura);

        int A = (base * altura)/2;

        printf ( "Area = %d", A );

    return 0;
}