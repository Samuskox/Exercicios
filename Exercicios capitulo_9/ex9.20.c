#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool contem( const char *fonte, const char *aPesquisar );

int main(){
    char palavra[41];
    printf("String fonte: ");
    fgets(palavra, 41, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    char palavraPesquisar[41];
    printf("String a pesquisar: ");
    fgets(palavraPesquisar, 41, stdin);
    palavraPesquisar[strlen(palavraPesquisar) - 1] = '\0';

    if(contem(palavra, palavraPesquisar) == true){
        printf("\"%s\" esta contida em \"%s\"", palavraPesquisar, palavra);
    } else {
        printf("\"%s\" nao esta contida em \"%s\"",palavraPesquisar, palavra);
    }


    return 0;
}   

bool contem( const char *fonte, const char *aPesquisar ){
    char Auxiliar[strlen(aPesquisar)];
    for(int i = 0; i < strlen(fonte);i++){
        for(int j = 0; j < strlen(aPesquisar) + i;j++){
            if(fonte[i+j] == aPesquisar[j]){
                Auxiliar[j] = fonte[i+j];
            }

            if(strcmp(Auxiliar, aPesquisar) == 0){
                return true;
            }
        }   
    }

    return false;
}