#include <stdio.h>

int main() {
    int array1[5], array2[5], inter[5];
    int i, j, k, exists;

    // preenche o primeiro array com valores do usuário
    printf("Digite os valores para o primeiro array:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &array1[i]);
    }

    // preenche o segundo array com valores do usuário
    printf("Digite os valores para o segundo array:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &array2[i]);
    }

    // encontra os valores comuns aos dois arrays
    k = 0;
    for (i = 0; i < 5; i++) {
        exists = 0;
        for (j = 0; j < 5; j++) {
            if (array1[i] == array2[j]) {
                // verifica se o valor já está no array de intersecção
                exists = 0;
                for (int l = 0; l < k; l++) {
                    if (inter[l] == array1[i]) {
                        exists = 1;
                        break;
                    }
                }
                // adiciona o valor ao array de intersecção se não existe ainda
                if (exists != 1) {
                    inter[k++] = array1[i];
                }
                break;
            }
        }
    }

    // imprime o array de intersecção
    printf("Valores comuns aos dois arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }
    printf("\n");

    return 0;
}
