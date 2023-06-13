#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerSenteca(const char *senteca);

int main(){

    char senteca[41];

    printf("Senteca: ");
    fgets(senteca, 40, stdin);
    senteca[strlen(senteca)-1] = '\0';


    lerSenteca(senteca);

    return 0;
}

void lerSenteca(const char *senteca){
    int qntCaracter = strlen(senteca);
    //for(int i = 0; i < 41; i++){
    //    if(senteca[i] != '\0'){
    //        qntCaracter++;
    //    } else {
    //        break;
    //    }
    //}
    printf("Primeiro caractere: %c\n", senteca[0]);
    printf("Ultimo caractere: %c\n", senteca[qntCaracter - 1]);
    printf("Numero de caracteres: %d", qntCaracter);
}