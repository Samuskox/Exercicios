#include <stdio.h>
#include <stdlib.h>

int main(){

    float valorHoraAula;
    float qntdAula;
    float descontoINSS;

    printf ("Valor da hora/aula: ");
    scanf ("%f", &valorHoraAula);

    printf ("Quantidade de aulas: ");
    scanf ("%f", &qntdAula);

    printf ("Porcetagem de desconto do INSS: ");
    scanf ("%f", &descontoINSS);

    float salarioLiquido = (valorHoraAula * qntdAula) - ( (valorHoraAula * qntdAula) *( descontoINSS / 100 ) );

    printf("Salario Liquido: %.2f", salarioLiquido);

    return 0;
}