#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero1;
    printf("N1: ");
    scanf("%d", &numero1);

    int numero2;
    printf("N2: ");
    scanf("%d", &numero2);

    if(numero1 >= numero2){
        for(int i = numero2; i <= numero1; i++){
            printf(" %d ", i);
        }
    } else if (numero1 <= numero2){
        for(int i = numero2; i >= numero1; i--){
            printf(" %d ", i);
        }
    }


    return 0;
}