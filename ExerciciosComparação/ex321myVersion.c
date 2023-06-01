#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, j, altura;

    printf("Altura: ");
    scanf("%d", &altura);

    if(altura >= 0) {

        for (i = 0; i < altura; i++) {
            for (j = altura; j > i; j--) {
                printf(" ");
            }
            for (j = 0; j <= i; j++) {
                printf("*");
            }
            for (j = 1; j <= i; j++){
                //if (j % 2 != 0){
                printf("*");
                //}
            }
            printf("\n");
        }
    } else if (altura <= 0) {
        altura = altura * -1;

        for (i = altura; i >= 0; i--) {
            for (j = altura; j > i; j--) {
                printf(" ");
            }
            for (j = 0; j <= i; j++) {
                printf("*");
            }
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }


    return 0;

}