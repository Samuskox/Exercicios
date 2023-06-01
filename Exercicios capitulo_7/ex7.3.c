#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float maiorNumero(float n1, float n2){
    return fmax(n1, n2);
}

int main(){
    float array[5][2];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
                printf("n%d[%d]: ", j+1, i);
                scanf("%f", &array[i][j]);
            while(array[i][j] < 0){
                printf("Entre com um valor positivo!\n");
                printf("n%d[%d]: ", j+1, i);
                scanf("%f", &array[i][j]);
            }
            
        }
    }

    for(int i = 0; i < 5; i++){
                printf("%.2f, %.2f: O maior valor e %.2f\n", array[i][0], array[i][1], maiorNumero(array[i][0], array[i][1]) );
    }

    return 0;
}