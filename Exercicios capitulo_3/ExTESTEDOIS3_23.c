#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;

    printf("Digite 5 numeros positivos: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if(num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num5 <= 0) {
        printf("Forneca apenas numeros positivos.");
        return 0;
    }

    printf("\n");
    for(int i = 0; i < num1; i++) {
        printf(" *\n");
    }
    printf("\n");
    for(int i = 0; i < num2; i++) {
        printf(" *\n");
    }
    printf("\n");
    for(int i = 0; i < num3; i++) {
        printf(" *\n");
    }
    printf("\n");
    for(int i = 0; i < num4; i++) {
        printf(" *\n");
    }
    printf("\n");
    for(int i = 0; i < num5; i++) {
        printf(" *\n");
    }
    return 0;
}
