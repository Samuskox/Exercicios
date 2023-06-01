#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;

    printf("entre com um numero: ");
    scanf("%d", &numero1);

    printf("entre com outro numero: ");
    scanf("%d", &numero2);

    if(numero1 >= numero2){
        printf("%d <= %d", numero2, numero1);
    }else 
    (numero2 <= numero1);
    {
        printf("%d <= %d", numero1, numero2);
    }


    return 0;
}