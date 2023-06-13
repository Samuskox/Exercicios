#include <stdio.h>
#include <stdlib.h>


int buscar(const int *a, int n, int chave);

int main(){
    int array[10];
    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int n;
    int chave;
    printf("buscar por: ");
    scanf("%d", &n);
    
    int posicao = buscar(array, 10, n);

    if(posicao == -1){
        printf("O valor %d nao foi encontrado.", n);
    } else {
        printf("O valor %d foi encontrado na posicao %d.", n, posicao);
    }

    return 0;
}

int buscar(const int *a, int n, int chave){

    for(int i = 0; i < n; i++){
        if(a[i] == chave){
            return i;
        } 
    }

    return -1;
}