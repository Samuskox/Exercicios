#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarPalavras( const char *str );

int main(){
    char frase[41];
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    int qntdPalavras = contarPalavras(frase);
    printf("Quantidade de palavras: %d", qntdPalavras);
    return 0;
}

int contarPalavras( const char *str ){

    int qntespacos = 0;
    for(int i = 0; i < strlen(str);i++){
        if(str[i] == ' '){
            qntespacos++;
        }
    }
    return qntespacos + 1;
}