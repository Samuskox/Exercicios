#include <stdlib.h>
#include <stdio.h>

int main(){

    int altura;
    printf("altura: ");
    scanf("%d", &altura);

    if(altura < 0){

        altura = altura * -1;
        for(int i = altura; i > 0; i--){ 

            for(int j = i - 1; j < altura - 1 ; j++){
            printf(" ");
            } 

            for(int j = altura + i + i ; j > altura + 1; j--){
            printf("*");
            }  

        
    
        printf("\n");
    }
        
    } else if(altura > 0){
        for(int i = 0; i < altura; i++){
        for(int j = altura - 1; j > i ; j--){
            printf(" ");
        }
        for(int j = altura - 1; j < altura + i + i; j++){
            printf("*");
        }
        printf("\n");
        }
    } else if(altura == 0){
        printf("valor invalidado; nao existe altura 0");
    }
    return 0;
}