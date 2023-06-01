#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][2];
    int i, j;

    // Preenchimento da matriz com valores fornecidos pelo usuário
    printf("Entre com os valores da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da matriz na forma de uma matriz
    printf("\nMatriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}