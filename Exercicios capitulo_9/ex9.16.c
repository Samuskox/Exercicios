#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removerLetra( char *str, char c );

int main(){
    char c;
    char frase[41];
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';
    printf("Caractere: ");
    scanf(" %c", &c);
    getchar();

    removerLetra(frase, c);
    return 0;
}

void removerLetra( char *str, char c ){
    //printf("sakufsdifusfdiu");
    char Minusculo = tolower(c);
    char Maiuscula = toupper(c);
    for(int i = 0; i < strlen(str); i++){

        if(str[i] == Minusculo || str[i] == Maiuscula){
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j+1];
            }
        }
    }

    printf("%s", str);
}