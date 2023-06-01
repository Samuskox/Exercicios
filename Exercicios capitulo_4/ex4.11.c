#include <stdio.h>
#include <stdlib.h>

int main(){
    int elementos;

    printf("Quantidade de elementos (1 a 9): ");
    scanf("%d", &elementos);

    while(elementos < 1 || elementos > 9){
        printf("Quantidade incorreta, forneca novamente!\n");
        printf("Quantidade de elementos (1 a 9): ");
        scanf("%d", &elementos);
    }

    int array[elementos];

    for(int i = 0; i < elementos; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int valor;
    printf("Valor que sera inserido: ");
    scanf("%d", &valor);

    array[elementos + 1];

    int j = elementos;

    for(int i = elementos + 1; i >= 0 + 1; i--){
        array[i] = array[j];
        j--;
    }

    array[0] = valor;


    for(int i = 0; i < elementos + 1; i++){
        printf("array[%d]: %d\n", i, array[i]);
    }

    return 0;
}