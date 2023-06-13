#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[41];

    printf("String: ");
    scanf("%s", string);

    for(int i = 0; i < 4; i++){
        printf("%c", string[i]);
        if(i < 3){
            printf(", ");
        }
    }

    printf(".");
    return 0;
}