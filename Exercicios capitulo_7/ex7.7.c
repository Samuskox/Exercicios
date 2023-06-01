#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool ehPrimo(int n){
    int verificador = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            verificador++;
        }
    }
    if(verificador == 1){
        return true;
    } else {
        return false;
    }
}


int main(){
    int n = 1;
    for(int i = 0; i < 20; i++){
        printf("%d: ", n);
        if(ehPrimo(n) == true){
            printf("eh primo\n");
        } else {
            printf("nao eh primo\n");
        }
        n++;
    }
    return 0;
}