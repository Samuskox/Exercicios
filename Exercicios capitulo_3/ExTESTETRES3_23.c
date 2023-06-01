#include <stdio.h>

int main(){

    int num;
    for(int i = 0; i < 5; i++){
        printf("digite um numero maior que zero: ");
        scanf("%d", &num);
    }
    printf("esses numeros : %d", num);
    return 0;
}