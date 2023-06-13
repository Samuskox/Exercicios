#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void substring( char *recorte, const char *origem, int inicio, int fim );

int main(){
    char palavra[41];
    printf("String: ");
    fgets(palavra, 41, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    int inicio;
    printf("Inicio: ");
    scanf("%d", &inicio);

    int fim;
    printf("Fim: ");
    scanf("%d", &fim);

    char recorte[41];

    substring(recorte, palavra, inicio, fim);

    return 0;
}   

void substring( char *recorte, const char *origem, int inicio, int fim ){
    if(inicio < 0 || inicio > strlen(origem) || fim > strlen(origem) || fim < inicio){
        printf("Recorte: %s", origem);
    } else {
        printf("Recorte: ");
        for (int i = inicio; i < fim; i++)
        {
            printf("%c", origem[i]);
        }
        
    }


}