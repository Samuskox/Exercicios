#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>   

int contarOcorrencias( const char *str, char c );


int main (){
    char frase[41];
    int ocorrencias = 0;

    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';

    ocorrencias = contarOcorrencias(frase, 'a');
    printf("A/a: %d\n", ocorrencias);
    ocorrencias = contarOcorrencias(frase, 'e');
    printf("E/e: %d\n", ocorrencias);
    ocorrencias = contarOcorrencias(frase, 'i');
    printf("I/i: %d\n", ocorrencias);
    ocorrencias = contarOcorrencias(frase, 'o');
    printf("O/o: %d\n", ocorrencias);
    ocorrencias = contarOcorrencias(frase, 'u');
    printf("U/u: %d", ocorrencias);
    

    return 0;
}


int contarOcorrencias( const char *str, char c ){
    int qntOcorrencia = 0;
    char Minusculo = tolower(c);
    char Maiuscula = toupper(c);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == Minusculo || str[i] == Maiuscula){
            qntOcorrencia++;
        }
    }
    return qntOcorrencia;
}