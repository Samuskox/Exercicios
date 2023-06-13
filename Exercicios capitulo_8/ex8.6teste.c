#include <stdio.h>

void pInterno(const double *a1, const double *a2, double *pi, int n) {
    for (int i = 0; i < n; i++) {
        pi[i] = a1[i] * a2[i];
    }
}

int main() {
    double array1[5];
    double array2[5];
    double produtoInterno[5];

    printf("Digite os valores do primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &array1[i]);
    }

    printf("Digite os valores do segundo array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &array2[i]);
    }

    pInterno(array1, array2, produtoInterno, 5);

    printf("O produto interno dos dois arrays é:\n");
    for (int i = 0; i < 5; i++) {
        printf("%lf ", produtoInterno[i]);
    }
    printf("\n");

    return 0;
}
