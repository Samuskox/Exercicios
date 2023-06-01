#include <stdio.h>

int main() {
    int nums[5], i, j, max = 0;
    
    // Pedimos ao usuário para digitar 5 números positivos
    for (i = 0; i < 5; i++) {
        printf("Digite um numero positivo: ");
        scanf("%d", &nums[i]);
        
        // Verificamos se o número digitado é positivo
        if (nums[i] <= 0) {
            printf("Forneca apenas numeros positivos.\n");
            return 0;
        }
        
        // Encontramos o maior número digitado para definir a altura do gráfico
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    
    // Imprimimos as barras na vertical, de cima para baixo
    for (i = max; i > 0; i--) {
        for (j = 0; j < 5; j++) {
            // Se o número armazenado em nums[j] for maior ou igual a i, imprimimos um asterisco
            if (nums[j] >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    // Imprimimos os números na base do gráfico
    for (i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}
