#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso = 0;
    float pesomaior = 0;
    int pessoa = 1;
    int peso60 = 0;
    float peso60soma = 0;

    do{
        printf("Entre com o peso da pessoa %02d: ", pessoa++);
        scanf("%f", &peso);

        if(peso > 60){
            peso60soma += peso;
            peso60 += 1; 
        }

        if(peso > pesomaior){
            pesomaior = peso;
        }
    }while(peso >= 0);

    float mediaPesos60 = (peso60soma + 0)/peso60;

    if(peso60soma == 0 && peso60 == 0){
        mediaPesos60 = 0.00;
    }

    printf("Media dos pesos acima de 60kg: %.2f\n", mediaPesos60);
    printf("A pessoa mais pesada possui %.2fkg", pesomaior);

    return 0;
}