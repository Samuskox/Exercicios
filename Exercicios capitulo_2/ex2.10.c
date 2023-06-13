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
    
    if (((a > 0) && (b > 0) && (c > 0)) &&
    (((a - b) < c && c < (a + b)) ||
    ((a - c) < b && b < (a + c)) ||
    ((b - c) < a && a < (b + c)))
    )
    {
        if ((a == c) && (c == b) && a == b){
            printf("Triangulo EQUILATERO");
        } else if((a != c) && (c != b) && a != b){
            printf("Triangulo ESCALENO");
        } else if(((a == c) && (c != b) && a != b) || ((a != c) && (c == b) && a != b) || ((a == b) && (c != b) && a != c)){
            printf("Triangulo ISOSCELES");
        }
    } else {
            printf("As medidas fornecidas dos lados nao representam um triangulo valido! ");
    }

    


    return 0;
}