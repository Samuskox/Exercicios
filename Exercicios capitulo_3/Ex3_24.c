#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    int idademenor21 = 0;
    int idademaior50 = 0;

    int pessoa = 1;

    do{
        printf("Idade da pessoa %02d: ", pessoa++);
        scanf("%d", &idade);
    if(idade >= 0){
            if(idade < 21){
                idademenor21 += 1;
            } else if (idade > 50 ){
                idademaior50 += 1;
            }
    }
    } while (idade >= 0);

    printf("Total de pessoas menores de 21 anos: %02d\n", idademenor21);
    printf("Total de pessoas com mais de 50 anos: %02d", idademaior50);
    return 0;
}