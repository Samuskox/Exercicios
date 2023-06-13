#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int numeroCorreto(int a);
int obtemDigito(int a);
int obtemNumero(int a);

int main () {

    int num;

    printf("Numero: ");
    scanf("%d", &num);

    printf("Numero completo: %d\n", num);
    printf("Numero: %d\n", obtemNumero(num));
    printf("Digito: %d\n", obtemDigito(num));
    printf("Digito calculado: %d\n", numeroCorreto(num));
    if(obtemDigito(num) == numeroCorreto(num)){
        printf("O numero fornecido esta correto!");
    } else {
        printf("O numero fornecido esta incorreto!");
    }

    return 0;

}

int numeroCorreto(int a){
    int unidade;
    int dezena;
    int centena;
    int milhar;
    int resultado;

    unidade = (a / 10) % 10;
    dezena = (a / 100) % 10;
    centena = (a / 1000) % 10;
    milhar = (a / 10000) % 10;

    resultado = (milhar * 5) + (centena * 4) + (dezena * 3) + (unidade * 2);
    resultado = resultado % 11;
    resultado = 11 - resultado;
    if(resultado == 10 || resultado == 11){
        resultado = 0;
    }
    return resultado;
}

int obtemDigito(int a){
    return a % 10;
}
int obtemNumero(int a){
    
    int unidade = 0;
    int dezena = 0;
    int centena = 0;
    int milhar = 0;
    int numero;

    unidade = (a / 10) % 10;
    dezena = (a / 100) % 10;
    centena = (a / 1000) % 10;
    milhar = (a / 10000) % 10;

    dezena *= 10;
    centena *= 100;
    milhar *= 1000;

    numero = unidade + dezena + centena + milhar;
}