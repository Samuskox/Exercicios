#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter( char *destino, const char *origem );

int main(){

    char String[41];
    printf("String: ");
    fgets(String, 41, stdin);
    String[strlen(String) - 1] = '\0';

    char StringInvertida[41];

    inverter(StringInvertida, String);
}

void inverter( char *destino, const char *origem ){

    int qntCaracter = strlen(origem);
    //printf("%d\n", qntCaracter);
    int j = 0;

    for(int i = qntCaracter - 1; i >= 0; i--){
        destino[j] = origem[i];
        j++;
    }

    printf("Invertida: %s", destino);
}