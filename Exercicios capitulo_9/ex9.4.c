#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[41];
    printf("Senteca: ");
    fgets(frase, 40, stdin);
    frase[strlen(frase) - 1] = '\0';

    for(int i = 0; i < strlen(frase); i++){
        if(i % 2 == 1){
            if(frase[i] == ' '){
                printf("' '");
            } else {
                printf("%c", frase[i]);
            }
            if(i < strlen(frase) - 2){
                printf(", ");
            }
        }
    }
    return 0;
}