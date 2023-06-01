#include <stdio.h>
#include <stdlib.h>

int main(){

    int alfa;
    int beta;
    int gama;

        printf("alfa: ");
        scanf("%d", &alfa);

        printf("beta: ");
        scanf("%d", &beta);

        printf("gama: ");
        scanf("%d", &gama);

        if(((alfa + beta + gama) > 180) || ((alfa + beta + gama) < 180)){
            printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
        } else if (alfa == 90 || beta == 90 || gama == 90){
            printf("Triangulo retangulo");
        } else if(alfa > 90 || beta > 90 || gama > 90){
            printf("Triangulo obtuso");
        } else if(alfa < 90 || beta < 90 || gama < 90){
            printf("Triangulo acutangulo");
        }

    return 0;
    }