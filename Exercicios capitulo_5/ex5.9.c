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

        int somaj = 1;
        int somai = 1;

        for(int i = 0; i < numero; i++){
        somaj = somai;
            for(int j = 0; j < numero; j++){
                    array[i][j] = somaj--;
        }  
        somai++;
    }



        somaj = 1;
        somai = 1;

        for(int i = 0; i < numero; i++){
        somaj = 1;
            for(int j = i; j <= numero; j++){
                    array[i][j] = somaj++;
        }  
        somai++;
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