#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[41];
    printf("Nome: ");
    gets(nome);

    for(int i = 0; i < 5; i++){
        printf("%s\n", nome);
    }

    return 0;
}