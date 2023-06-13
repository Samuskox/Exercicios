#include <stdio.h>
#include <string.h>

void imprimirCentralizado(const char *str) {
    int tamanhoStr = strlen(str);
    int espacos = (80 - tamanhoStr) / 2;

    for (int i = 0; i < espacos; i++) {
        printf(" ");
    }

    printf("%s\n", str);
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    imprimirCentralizado(str);

    return 0;
}