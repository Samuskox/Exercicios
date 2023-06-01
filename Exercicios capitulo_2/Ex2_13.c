#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1;
    float nota2;
    float media;
    float notaOptativa;

    printf("Nota Avaliacao 1: ");
    scanf("%f", &nota1);

    printf("Nota Avaliacao 2: ");
    scanf("%f", &nota2);

    printf("Nota Optativa: ");
    scanf("%f", &notaOptativa);

    if(notaOptativa <= 0){

        media = (nota1 + nota2)/2;

            if(media < 4){
                printf("%.2f\n", media);
                printf("reprovado!");
            } else if(media > 4 && media < 6){
                printf("%.2f\n", media);
                printf("Exame!");
            } else if(media > 6){
                printf("%.2f\n", media);
                printf("Aprovado!");
            }

    } else if(notaOptativa > 0){
                    if(nota1 < notaOptativa){
                    nota1 = notaOptativa;

                    media = (nota1 + nota2)/2;

                        if(media < 4){
                            printf("%.2f\n", media);
                            printf("reprovado!");
                        } else if(media > 4 && media < 6){
                            printf("%.2f\n", media);
                            printf("Exame!");
                        } else if(media > 6){
                            printf("%.2f\n", media);
                            printf("Aprovado!");
                        }
                    } else if(nota2 < notaOptativa){
                    nota2 = notaOptativa;

                    media = (nota1 + nota2)/2;

                        if(media < 4){
                            printf("%.2f\n", media);
                            printf("reprovado!");
                        } else if(media > 4 && media < 6){
                            printf("%.2f\n", media);
                            printf("Exame!");
                        } else if(media > 6){
                            printf("%.2f\n", media);
                            printf("Aprovado!");
                        }
                } else 
                
                if(notaOptativa > nota1 && notaOptativa > nota2){

            if(nota1 > nota2){
                nota2 = notaOptativa;
                media = (nota1 + nota2)/2;

                if(media < 4){
                printf("%.2f\n", media);
                printf("reprovado!");
                } else if(media > 4 && media < 6){
                printf("%.2f\n", media);
                printf("Exame!");
                } else if(media > 6){
                printf("%.2f\n", media);
                printf("Aprovado!");
                    }
                } else if(nota1 < nota2){
                nota1 = notaOptativa;
                media = (nota1 + nota2)/2;

                if(media < 4){
                printf("%.2f\n", media);
                printf("reprovado!");
                } else if(media > 4 && media < 6){
                printf("%.2f\n", media);
                printf("Exame!");
                } else if(media > 6){
                printf("%.2f\n", media);
                printf("Aprovado!");
                    }
                }
            }
        }




        return 0;

} 

    
        
