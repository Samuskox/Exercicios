#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2; 



    printf ("insira o primeiro numero: ");
    scanf ("%d", &numero1);

    printf ("insira o segundo numero: ");
    scanf ("%d", &numero2);

    int resultsoma = numero1 + numero2;
    int resultsub = numero1 - numero2;
    int resultmult = numero1 * numero2;
    int resultdiv = numero1 / numero2;

    printf ("%d + %d = %d\n", numero1, numero2, resultsoma );
    printf ("%d - %d = %d\n", numero1, numero2, resultsub);
    printf ("%d * %d = %d\n", numero1, numero2, resultmult);
    printf ("%d / %d = %d\n", numero1, numero2, resultdiv);

    return 0;

}