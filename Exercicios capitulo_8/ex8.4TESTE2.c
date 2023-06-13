#include <stdio.h>

int main() {
    int dia, ano, mes;
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite o dia do ano (1 a 365): ");
    scanf("%d", &dia);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        diasPorMes[1] = 29; // Fevereiro tem 29 dias em anos bissextos
    }

    // Encontra o mês correspondente
    for (mes = 0; mes < 12; mes++) {
        if (dia <= diasPorMes[mes]) {
            break;
        }
        dia -= diasPorMes[mes];
        printf("\ndias: %d", dia);
    }

    printf("Data correspondente: %02d/%02d/%04d\n", dia, mes + 1, ano);

    return 0;
}