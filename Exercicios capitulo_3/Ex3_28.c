#include <stdio.h>
#include <stdlib.h>

int main(){

    float Saldo;
    printf("Saldo Inicial: ");
    scanf("%f", &Saldo);

    printf("Operacoes: \n");
    printf("1) Deposito;\n");
    printf("2) Saque;\n");
    printf("3) Fim\n");

    int operacao;
    int saque;
    int deposito;

    

    do{
    
    printf("Operacao Desejada: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
            printf("Valor a depositar: ");
            scanf("%d", &deposito);
            Saldo = Saldo + deposito;
        break;
    case 2:
            printf("Valor a Sacar: ");
            scanf("%d", &saque);
            Saldo = Saldo - saque;
    break;
    default:
        break;
    }
    }while(operacao == 1 || operacao == 2);

    
        printf("Saldo Final: R$%.2f\n", Saldo);

    if(Saldo < 0){
            printf("Conta Devedora");
        } else if(Saldo == 0){
            printf("Sem Saldo");
        } else if(Saldo > 0){
            printf("Conta Preferencial");
        }

    
    return 0;
}