#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1;
    printf("N1: ");
    scanf("%d", &n1);

    int n2;
    printf("N2: ");
    scanf("%d", &n2);

    if(n2 > n1){
        int t;
        t = n2;
        n2 = n1;
        n1 = t;
    }

    int pares = 0;
    int impares = 0;
    int quadriples = 0;

    for (int i = n2; i <= n1; i++){

        if(i % 2 == 0){
            pares++;
        }

        if(i % 2 == 1){
            impares++;
        }

        if(i % 4 == 0){
            quadriples++;
        }

    }

    printf("Multiplos de 2: %d\n", pares);
    printf("Multiplos de 3: %d\n", impares);
    printf("Multiplos de 4: %d", quadriples);


    return 0;
}