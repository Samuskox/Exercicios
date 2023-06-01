#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float peso;
    float altura;

    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Entre com sua altura em metros: ");
    scanf("%f", &altura);

    float IMC = peso/(altura * altura);

    if(IMC < 17){
        printf("IMC: %.2f\n", IMC);
        printf("Voce esta muito abaixo do peso ideal!");
    } else if(IMC >= 17 && IMC < 18.5){
        printf("IMC: %.2f\n", IMC);
        printf("Voce esta abaixo do peso ideal!");
    } else if(IMC >= 18.5 && IMC < 25){
        printf("IMC: %.2f\n", IMC);
        printf("Parabens! Voce esta em seu peso normal!");
    } else if(IMC >= 25 && IMC < 30){
        printf("IMC: %.2f\n", IMC);
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!");
    } else if(IMC >= 30 && IMC < 35){
        printf("IMC: %.2f\n", IMC);
        printf("Cuidado! Obesidade grau I!");
    } else if(IMC >= 35 && IMC < 40){
        printf("IMC: %.2f\n", IMC);
        printf("Cuidado! Obesidade grau II!");
    } else if(IMC >= 45){
        printf("IMC: %.2f\n", IMC);
        printf("Muito Cuidado! Obesidade grau III!");
    } 

    return 0;
}