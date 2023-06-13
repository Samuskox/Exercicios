#include <stdio.h>
#include <stdbool.h>

void decompoeData(int diaDoAno, int ano, int *mes, int *dia);
bool ehBissexto(int ano);

int main(void)
{
    int diaDoAno;
    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);

    int ano;
    printf("Ano: ");
    scanf("%d", &ano);

    int mes = 1;
    int dia = 1;

    decompoeData(diaDoAno, ano, &mes, &dia);
    return 0;
}

bool ehBissexto(int ano)
{
    if (ano % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void decompoeData(int diaDoAno, int ano, int *mes, int *dia)
{
    int fevereiro;
    if (ehBissexto(ano) == true)
    {
        fevereiro = 29;
    }
    else
    {
        fevereiro = 28;
    }

    *dia = 0;
    for (int i = 1; i <= diaDoAno; i++)
    {
        *dia += 1;
        if (*mes == 2)
        {
            if (*dia == fevereiro)
            {
                *dia = 1;
                *mes += 1;
                // printf("\ndia: %d\n mes: %d", *dia, *mes);
            }
        }
        else if (*mes == 4 || *mes == 6 || *mes == 9 || *mes == 11)
        {
            if (*dia == 30)
            {
                *dia = 1;
                *mes += 1;
                // printf("\ndia: %d\n mes: %d", *dia, *mes);
            }
        }
        else
        {
            if (*dia == 31)
            {
                *dia = 1;
                *mes += 1;
            }
        }
        
        printf("\ndia: %d\n mes: %d", *dia, *mes);
    }

    printf("O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, *dia, *mes);
}