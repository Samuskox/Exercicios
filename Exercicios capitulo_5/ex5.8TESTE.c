#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número no intervalo de 1 a 100: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 100) {
        printf("Valor fora do intervalo permitido.\n");
        return 0;
    }

    printf("\n");

    // Imprime o padrão em forma de matriz
    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= numero; j++) {
            int valor = i < j ? i : j;
            if (i > numero - j + 1)
                valor = numero - i + 1;
            printf("%3d ", valor);
        }
        printf("\n");
    }

    return 0;
}