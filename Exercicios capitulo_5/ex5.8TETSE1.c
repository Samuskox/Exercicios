#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Valor fora do intervalo permitido.\n");
        return 0;
    }

    int array[100][100];

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            int x = i < j ? i : j;
            x = x < n-i+1 ? x : n-i+1;
            x = x < n-j+1 ? x : n-j+1;
            array[i][j] = x;
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;// chatgpt
}