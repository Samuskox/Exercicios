#include <stdio.h>
#include <stdlib.h>

int main(){

        int termoante = 1;
        int termoatual = 1;
        int termoprox;

    printf("%d %d ", termoante, termoatual);

    for(int i = 1; i <= 18; i++){
        termoprox = termoante + termoatual;
        termoante = termoatual;
        termoatual = termoprox;
        printf("%d ", termoprox);
    }

    return 0;
}