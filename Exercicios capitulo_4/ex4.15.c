#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int array1[5];
    int array2[5];

    printf("Forneca os valores do primeiro array: \n");

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Forneca os valores do segundo array: \n");

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    int qntinter = 0;
    int arrayinter[qntinter];
    int verificador = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(array1[i] == array2[j]){
                while(qntinter == 0){
                    arrayinter[qntinter] = array1[i];
                    qntinter++;
                }
                for(int k = 0; k < qntinter; k++){
                    if(arrayinter[k] == array1[i]){
                        verificador = 1;
                    }
                }
                if(verificador == 0){
                        arrayinter[qntinter] = array1[i];
                        qntinter++;
                    }
                verificador = 0;
            }
        }
    }

if(qntinter == 0){
    printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
} else {
    for(int i = 0; i < qntinter; i++){
        printf("arrayInterseccao[%d]: %d\n", i, arrayinter[i]);
    }
}


    

    
    return 0;
}