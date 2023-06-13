#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavras[5][2][41];

    int par = 1;
    for(int i = 0; i < 5; i++){
        int palavra = 1;
        for(int j = 0; j < 2; j++){
            printf("Par %d, palavra %d: ", par, palavra);
            fgets(palavras[i][j], 41, stdin );
            palavras[i][j][strlen(palavras[i][j]) - 1] = '\0';
            palavra++;
        }
        par++;
    }       

    //for(int i = 0; i < 5; i++){
    //    for(int j = 0 ; j < 2; j++){
    //        printf("palavra > %s\n", palavras[i][j]);
    //        printf("tamanho: %d\n", strlen(palavras[i][j]));
    //    }
    //}

    
    int ordem;
    for(int i = 0; i < 5; i++){
        ordem = strcmp( palavras[i][0], palavras[i][1]);
        if(ordem <  0){
            printf("%s - %s: ORDEM CRESCENTE", palavras[i][0], palavras[i][1]);
        } else if(ordem > 0){
            printf("%s - %s: ORDEM DECRESCENTE", palavras[i][0], palavras[i][1]);
        } else {
            printf("%s - %s: IGUAIS", palavras[i][0], palavras[i][1]);
        } 

        if(i < 5){
            printf("\n");
        }
    }

    return 0;
}