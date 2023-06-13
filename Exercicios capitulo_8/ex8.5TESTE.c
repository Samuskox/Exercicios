#include <stdio.h>

int buscar(const int *a, int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (a[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[10];
    int valor;
    
    printf("Digite os 10 valores do array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int indice = buscar(array, 10, valor);
    
    if (indice != -1) {
        printf("O valor %d foi encontrado no índice %d do array.\n", valor, indice);
    } else {
        printf("O valor %d não foi encontrado no array.\n", valor);
    }

    return 0;
}
