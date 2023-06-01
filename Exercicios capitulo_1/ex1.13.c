#include <stdio.h>
#include <stdlib.h>

int main (){

    float primeiroNumero;
    float segundoNumero;

    printf ("insira o primeiro numero: ");
    scanf ("%f", &primeiroNumero);

    printf ("insira o segundo numero: ");
    scanf ("%f", &segundoNumero);

    float resultSoma = primeiroNumero + segundoNumero;
    float resultSub = primeiroNumero - segundoNumero;
    float resultMult = primeiroNumero * segundoNumero;
    float resultDiv = primeiroNumero / segundoNumero;

    printf ("%.2f + %.2f = %.2f\n", primeiroNumero, segundoNumero, resultSoma);
    printf ("%.2f - %.2f = %.2f\n", primeiroNumero, segundoNumero, resultSub);
    printf ("%.2f * %.2f = %.2f\n", primeiroNumero, segundoNumero, resultMult);
    printf ("%.2f / %.2f = %.2f\n", primeiroNumero, segundoNumero, resultDiv);

    return 0;

}