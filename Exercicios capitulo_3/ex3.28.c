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

    
        

    if(Saldo < 0){
            Saldo *= -1;
            printf("Saldo final: -R$%.2f\n", Saldo);
            printf("Conta devedora.");
        } else if(Saldo == 0){
            printf("Saldo final: R$%.2f\n", Saldo);
            printf("Sem saldo.");
        } else if(Saldo > 0){
            printf("Saldo final: R$%.2f\n", Saldo);
            printf("Conta preferencial.");
        }

    
    return 0;
}