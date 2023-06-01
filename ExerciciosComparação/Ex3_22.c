#include <stdio.h>
#include <stdlib.h>

int main(){
    int  N1;
    printf("N1: ");
    scanf("%d", &N1);

    int  N2;
    printf("N2: ");
    scanf("%d", &N2);

    int  N3;
    printf("N3: ");
    scanf("%d", &N3);

    int  N4;
    printf("N4: ");
    scanf("%d", &N4);

    int  N5;
    printf("N5: ");
    scanf("%d", &N5);

        if(N1 < 0 || N2 < 0 || N3 < 0 || N4 < 0 || N5 < 0 ){
            printf("Forneca apenas numeros positivos.");
        }
        int altura;

        if(N1 >= N2 && N1 >= N3 && N1 >= N4 && N1 >= N5){
            altura = N1;
        } else if (N2 >= N1 && N2 >= N3 && N2 >= N4 && N2 >= N5){
            altura = N2;
        } else if (N3 >= N1 && N3 >= N2 && N3 >= N4 && N3 >= N5){
            altura = N3;
        } else if (N4 >= N1 && N4 >= N2 && N4 >= N3 && N4 >= N5){
            altura = N4;
        } else if (N5 >= N1 && N5 >= N2 && N5 >= N3 && N5 >= N4){
            altura = N5;
        }

        int num = altura;
        int j;

        for(int i = altura; i > 0; i--){
            for(num; num == i; num--){
                printf("%04d  ", num);
            }
            
                
            if (N1 >= i) {
                printf("*"); 
            } else {
                printf(" ");
            }
            
            
            if (N2 >= i) {
                printf("*"); 
            } else {
                printf(" ");
            }
            
            
            if (N3 >= i) {
                printf("*"); 
            } else {
                printf(" ");
            }
            
            
            if (N4 >= i) {
                printf("*"); 
            } else {
                printf(" ");
            }
            
            if (N5 >= i) {
                printf("*"); 
            } else {
                printf(" ");
            }
            
            
            printf("\n");
        }





    return 0;
}