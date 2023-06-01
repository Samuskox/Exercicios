#include <stdio.h>
#include <stdlib.h>


int main(){

    float a;
    float b;
    float c;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);
    
    if ((a <= 0) || (b <= 0) || c <= 0){
        printf("As medidas fornecidas dos lados nao representam um triangulo valido! ");
    } else

    if ((a == c) && (c == b) && a == b){
        printf("triangulo Equilatero");
    } else if((a != c) && (c != b) && a != b){
        printf("triangulo escaleno");
    } else if(((a == c) && (c != b) && a != b) || ((a != c) && (c == b) && a != b) || ((a == b) && (c != b) && a != c)){
        printf("triangulo isosceles");
    }

    return 0;
}