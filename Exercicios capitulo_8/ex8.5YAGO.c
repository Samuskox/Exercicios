#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a, int n, int chave);

int main () {

    int array[10];
    int busca;

    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &busca);

    if(buscar(array, 10, busca) < 0){
        printf("O valor %d nao foi encontrado.", busca);
    } else {
        printf("O valor %d foi encontrado na posicao %d.", busca, buscar(array, 10, busca));
    }

    return 0;

}

int buscar(const int *a, int n, int chave){
    int resultado = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == chave){
            resultado = i;
            break;
        }
    }
    return resultado;
}