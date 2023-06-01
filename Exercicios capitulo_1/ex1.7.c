#include <stdio.h>
#include <stdlib.h>

int main() {

    int lado;

    printf ("valor do lado: ");
    scanf ("%d", &lado);

    int P = lado * 4;
    int A = lado * lado;

    printf ("Perimetro = %d\n", P);
    printf ("Area = %d", A);

    return 0;

}