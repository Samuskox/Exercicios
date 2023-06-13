#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias( const char *str, char c );


int main (){
    char c;
    char frase[41];
    int ocorrencias = 0;
    printf("Caractere: ");
    scanf(" %c", &c);
    getchar();
    do{
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';
    ocorrencias = contarOcorrencias(frase, c);
    if(strcmp(frase, "fim") != 0){
        printf("\"%s\" tem %d ocorrencia(s) do caractere '%c'\n", frase, ocorrencias, c);
    }
    }while(strcmp(frase, "fim") != 0);
    return 0;
}


int contarOcorrencias( const char *str, char c ){
    int qntOcorrencia = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            qntOcorrencia++;
        }
    }
    return qntOcorrencia;
}