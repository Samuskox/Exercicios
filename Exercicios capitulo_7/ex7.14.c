#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void imprimeDuplaClassificada(int, int, bool);


int main(){

    int array1[5];
    int array2[5];

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    bool OrdemCrescente;

    for(int i = 0; i < 5; i++){
        if(i % 2 == 0){
            OrdemCrescente = true;
        } else {
            OrdemCrescente = false;
        }
        imprimeDuplaClassificada(array1[i], array2[i], OrdemCrescente);
    }
    return 0;
}

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente){
    printf("%d e %d: ", n1, n2);
    if(emOrdemCrescente == true){
        if(n1 < n2){
            printf("%d <= %d\n", n1, n2);
        } else {
            printf("%d <= %d\n", n2, n1);
        }
        
    } else {
        if(n1 > n2){
            printf("%d >= %d\n", n1, n2);
        } else {
            printf("%d >= %d\n", n2, n1);
        }
    }
}

