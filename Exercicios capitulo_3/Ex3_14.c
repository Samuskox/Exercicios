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
        t = n1;
        n1 = n2;
        n2 = t;
    }

    int soma = 0;

    for(int i = n2; i <= n1; i++){
        soma += i;
    }
    printf("a soma entre %d e %d: %d", n2, n1, soma);

    return 0;
}