#include <stdio.h>
#include <stdlib.h>

int main(){

    int IdadeHomem1; 
    int IdadeHomem2; 
    int IdadeMulher1;
    int IdadeMulher2;

    printf("Idade do primeiro homem: ");
    scanf("%d", &IdadeHomem1);

    printf("Idade do segundo homem: ");
    scanf("%d", &IdadeHomem2);

    printf("Idade da primeira mulher: ");
    scanf("%d", &IdadeMulher1);

    printf("Idade da segunda mulher: ");
    scanf("%d", &IdadeMulher2);



    if(IdadeHomem1 >= IdadeHomem2 && IdadeMulher1 >= IdadeMulher2){

        int somaIdade = IdadeHomem1 + IdadeMulher2;
        int MultIdade = IdadeHomem2 * IdadeMulher1;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", somaIdade);
        printf("Idade homem mais novo * idade mulher mais velha: %d", MultIdade);

    }else if(IdadeHomem2 >= IdadeHomem1 && IdadeMulher2 >= IdadeMulher1){

        int somaIdade = IdadeHomem2 + IdadeMulher1;
        int MultIdade = IdadeHomem1 * IdadeMulher2;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", somaIdade);
        printf("Idade homem mais novo * idade mulher mais velha: %d", MultIdade);

    } else if(IdadeHomem2 >= IdadeHomem1 && IdadeMulher2 <= IdadeMulher1){

        int somaIdade = IdadeHomem2 + IdadeMulher2;
        int MultIdade = IdadeHomem1 * IdadeMulher1;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", somaIdade);
        printf("Idade homem mais novo * idade mulher mais velha: %d", MultIdade);

    }

    return 0;
}