#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i = 1;
    char string1[41];
    printf("String %d: ", i);
    scanf("%s", string1);
    i++;
    char string2[41];
    printf("String %d: ", i);
    scanf("%s", string2);
    i++;
    char string3[41];
    printf("String %d: ", i);
    scanf("%s", string3);

    char temp[41];
    if(strcmp(string1, string2) > 0){
        strcpy(temp, string1);
        strcpy(string1, string2);
        strcpy(string2, temp);
    }

    if(strcmp(string1, string3) > 0){
        strcpy(temp, string1);
        strcpy(string1, string3);
        strcpy(string3, temp);
    }

    if(strcmp(string2, string3) > 0){
        strcpy(temp, string2);
        strcpy(string2, string3);
        strcpy(string3, temp);
    }

    printf("%s, %s e %s", string1, string2, string3);
    
    return 0;
}
