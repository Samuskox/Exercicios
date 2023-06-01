#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota;
    float notas;

    printf("Forneca a nota de 10 alunos: \n");

    for(int i = 1; i <= 10; i++){
        printf("Nota %d: ", i);
        scanf("%f", &nota);

        notas += nota;
    }

    notas = notas/10;
    printf("A media aritmetica das dez notas e: %.2f", notas);
    return 0;
}