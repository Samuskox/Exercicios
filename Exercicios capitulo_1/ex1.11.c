#include <stdio.h>
#include <stdlib.h>

int main(){
    int diagonalMaior;
    int diagonalMenor;

    printf("Valor da diagonal maior: ");
    scanf("%d", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf("%d", &diagonalMenor);

    int A = (diagonalMaior*diagonalMenor)/2;

    printf("Area = %d", A);
    
    return 0;
}