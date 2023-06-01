#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Numero entre 1 e 100: ");
    scanf("%d", &numero);

    if(numero <= 0 || numero > 100){
        printf("Numero incorreto");
    } else {
        int array[100][100];
        int soma = 1;

        for(int i = 0; i < numero; i++){
            for(int j = 0; j < numero; j++){

                if(i <= j){
                    array[i][j] = i;
                } else {
                    array[i][j] = j;
                }
            
                printf("%3d", array[i][j]);

        }    
        printf("\n");
        soma++;
    }
}

return 0;
}