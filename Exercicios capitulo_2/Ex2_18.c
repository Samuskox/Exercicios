#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1;
    float n2;
    char operador;
    float resultado;
    
    printf("numero 1: ");
    scanf("%f", &n1);

    printf("numero 2: ");
    scanf("%f", &n2);

    printf("Escolha uma operacao de acordo com o menu: \n");
    printf("+ Adicao\n");
    printf("- Subtracao\n");
    printf("* Multiplicacao\n");
    printf("/ Divisao\n");

    printf("Operacao: ");
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+' :
        resultado = n1 + n2;
        printf("%.2f + %.2f = %.2f", n1, n2, resultado);
        break;
    case '-' :
        resultado = n1 - n2;
        printf("%.2f - %.2f = %.2f", n1, n2, resultado);
        break;
    case '*' :
        resultado = n1 * n2;
        printf("%.2f * %.2f = %.2f", n1, n2, resultado);
        break;
    case '/' :
        resultado = n1 / n2;
        printf("%.2f / %.2f = %.2f", n1, n2, resultado);
        break;
    default:
        printf("opcao invalida");
        break;
    }

    return 0;
}