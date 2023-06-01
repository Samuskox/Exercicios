#include <stdio.h>

int main() {
    int matrizA[3][2] = { {9, 3}, {45, 9}, {-1, 4} };
    int matrizB[2][3] = { {1, 2, 22}, {-2, 0, 62} };
    int matrizC[3][3];
    int i, j, k;

   // Multiplicando as matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizC[i][j] = 0;
                for (k = 0; k < 2; k++) {
            matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

   // Exibindo a matriz resultante
    printf("Matriz resultante:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizC[i][j]);
            }
        printf("\n");
    }

    return 0;
}
