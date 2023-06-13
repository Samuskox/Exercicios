#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void imprimirCentralizado( const char *str );


int main(){

    char frase[41];
    printf("String: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    imprimirCentralizado(frase);

    return 0;
}   

void imprimirCentralizado( const char *str ){

    for (int i = 0; i < ((80 - strlen(str)) / 2); i++) {
        printf(" ");
    }

    printf("%s\n", str);
}