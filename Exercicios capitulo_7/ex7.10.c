#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculaDigito(int n){

    int milhar;
    int centena;
    int dezena;
    int unidade;
    int arrayDigitos[4];
    int Produto;
    

    milhar = n/1000;
    centena = (n % 1000)/100;
    dezena = (n % 100)/10;
    unidade = n % 10; 

    arrayDigitos[0] = unidade;
    arrayDigitos[1] = dezena;
    arrayDigitos[2] = centena;
    arrayDigitos[3] = milhar;

    int j = 2;

    for(int i = 0; i < 4; i++){
        Produto += arrayDigitos[i] * j;
    j++;
    }

    Produto = Produto % 11;
    Produto = 11 - Produto;

    if(Produto == 10 || Produto == 11){
        Produto = 0;
    }

    return Produto;
}

int main(){

    int numero;
    printf("Numero: ");
    scanf("%d", &numero);

    if(numero < 1 || numero > 9999){
        return 0;
    }

    printf("digito verificador de %d: %d", numero, calculaDigito(numero));
    return 0;   
}