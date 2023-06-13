#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool ehPalindromo( const char *str );

int main(){
    char palavra[41];
    printf("String: ");
    fgets(palavra, 41, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    if(ehPalindromo(palavra) == true){
        printf("\"%s\" eh um palindromo!", palavra);
    } else {
        printf("\"%s\" nao eh um palindromo!", palavra);
    }

    return 0;
}   

bool ehPalindromo( const char *str ){
    int j = 0;
    for(int i = strlen(str) - 1; i >= 0; i--){
        if(str[i] == str[j]){
            j++;
        } else {
            return false;
        }
    }

}