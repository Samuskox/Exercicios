#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int obtemDigito(int);
int obtemNumero(int);
int calculaDigito(int);

bool numeroCorreto(int numero);



int main(){ 

    int numero;
    printf("Numero: ");
    scanf("%d", &numero);

    if(numero < 10 || numero > 99999){
        return 0;
    }


    printf("Numero completo: %d\n", numero);
    printf("Numero: %d\n", obtemNumero(numero));
    printf("Digito: %d\n", obtemDigito(numero));
    printf("Digito Calculado: %d\n", calculaDigito(obtemNumero(numero)));
    if(numeroCorreto(numero) == true){
        printf("O numero fornecido esta correto!");
    } else {
        printf("O numero fornecido esta incorreto!");
    }
    return 0;
}



int obtemNumero(int n){
    return n/10;
}

int obtemDigito(int n){
    return n % 10;
}

int calculaDigito(int n){
    if(n > 9999){
        n = n/10;
    }

    int array[4];
    array[0] = n % 10;              //    Unidade            
    array[1] = (n / 10) % 10;       //     Dezena
    array[2] = (n / 100)% 10;       //     Centena
    array[3] = n / 1000;            //      milhar

    int somaProdutos = 0;
    int j = 2;
    for(int i = 0; i < 4; i++){
        somaProdutos += array[i] * j;
        j++;
    }

    int Digito = 11 - (somaProdutos % 11); 

    if(Digito >= 10){
        Digito = 0;
    }
    return Digito;
}

bool numeroCorreto(int numero){
    if(calculaDigito(obtemNumero(numero)) == obtemDigito(numero)){
        return true;
    } else {
        return false;
    }
}