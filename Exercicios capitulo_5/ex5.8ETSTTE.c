#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Numero entre 1 e 100: ");
    scanf("%d", &numero);

    if(numero <= 0 || numero > 100){
        printf("Numero incorreto");
    } else {
        int array[100][100] = {0};
        int soma = 0;

        for(int i = 0; i < soma; i++){
            for(int j = 0; j < soma; j++){
                array[i][j] = soma + 1;
                array[i][numero-j-1] = soma + 1;
                array[numero-i-1][j] = soma + 1;
                array[numero-i-1][numero-j-1] = soma + 1;
        }
        soma++;    
    }
        for(int i = 0; i < numero; i++){
            for(int j = 0; j < numero; j++){
                printf("%3d", array[i][j]);
        }    
        printf("\n");
    }

}

return 0;
}