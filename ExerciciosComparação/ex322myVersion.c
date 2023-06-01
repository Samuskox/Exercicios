#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, n1, n2, n3, n4, n5, nMaior = 0;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    printf("N4: ");
    scanf("%d", &n4);

    printf("N5: ");
    scanf("%d", &n5);

    if(n1 > nMaior) {
        nMaior = n1;
    }
    if(n2 > nMaior) {
        nMaior = n2;
    }
    if(n3 > nMaior) {
        nMaior = n3;
    }
    if(n4 > nMaior) {
        nMaior = n4;
    }
    if(n5 > nMaior) {
        nMaior = n5;
    }

    /*for(i = nMaior; i >= 1; i--) {
        if
    }*/

    if (n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0 && n5 > 0) {

        for(i = nMaior; i >= 1; i--) {
            printf("%04d  ", i);
            if(n1 >= i) {
                printf("*");
            } else {
                printf(" ");
            }

            if(n2 >= i) {
                printf("*");
            } else {
                printf(" ");
            }

            if(n3 >= i) {
                printf("*");
            } else {
                printf(" ");
            }

            if(n4 >= i) {
                printf("*");
            } else {
                printf(" ");
            }

            if(n5 >= i) {
                printf("*\n");
            } else {
                printf(" \n");
            }
        }
    } else {
        printf("Forneca apenas numeros positivos.");
    }

    return 0;

}