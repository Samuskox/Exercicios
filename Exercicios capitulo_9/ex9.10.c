#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho( const char *str );

int main (){

    printf("Frase: ");
    char frase[41];
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';
    int qntCaracter = tamanho(frase);

    printf("%d caractere(s)!", qntCaracter);
    
    return 0;
}

int tamanho(const char *str){
    for(int i = 1; i <= 41; i++){
        if(str[i] == '\0'){
            return i;
        }
    }
    
}