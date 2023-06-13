#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>   

void tornarMaiuscula( char *str );


int main (){
    char frase[41];
    printf("Frase: ");
    fgets(frase, 41, stdin);
    frase[strlen(frase) - 1] = '\0';



    tornarMaiuscula(frase);
    return 0;
}

void tornarMaiuscula( char *str ){
    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }

    printf("%s", str);
}