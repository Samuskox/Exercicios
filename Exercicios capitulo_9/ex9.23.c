#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void imprimirCaixa( const char *str );


int main(){

    char frase[41];
    printf("String: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    imprimirCaixa(frase);

    return 0;
}   

void imprimirCaixa( const char *str ){

    printf("++=");
    for(int i = 0; i < strlen(str); i++){
        printf("=");
    }
    printf("=++\n");

    printf("|| ");
    printf("%s", str);
    printf(" ||\n");

    printf("++=");
    for(int i = 0; i < strlen(str); i++){
        printf("=");
    }
    printf("=++");

}