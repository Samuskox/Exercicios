#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 3999) {
        printf("O numero invalido");
    }
    
    if(numero <= 3999){

        int casamilhar = numero / 1000;

            if(casamilhar == 1){
                printf("M");
            }else if(casamilhar == 2){
                printf("MM");
            }else if(casamilhar == 3){
                printf("MMM");
            }

        int numeroresto1 = numero % 1000;

                if(numeroresto1 >= 100 || numeroresto1 <= 999){

                    int casacentena = numeroresto1 / 100;

                        if(casacentena == 1){
                            printf("C");
                        } else if(casacentena == 2){
                            printf("CC");
                        } else if(casacentena == 3){
                            printf("CCC");
                        } else if(casacentena == 4){
                            printf("CD");
                        } else if(casacentena == 5){
                            printf("D");
                        } else if(casacentena == 6){
                            printf("DC");
                        } else if(casacentena == 7){
                            printf("DCC");
                        } else if(casacentena == 8){
                            printf("DCCC");
                        } else if(casacentena == 9){
                            printf("CM");
                        }

                    int numeroresto2 = numeroresto1 % 100;

                            if(numeroresto2 >= 10 || numeroresto2 <= 99){

                                int casadezena = numeroresto2 / 10;

                                if(casadezena == 1){
                                    printf("X");
                                } else if(casadezena == 2){
                                    printf("XX");
                                } else if(casadezena == 3){
                                    printf("XXX");
                                } else if(casadezena == 4){
                                    printf("XL");
                                } else if(casadezena == 5){
                                    printf("L");
                                } else if(casadezena == 6){
                                    printf("LX");
                                } else if(casadezena == 7){
                                    printf("LXX");
                                } else if(casadezena == 8){
                                    printf("LXXX");
                                } else if(casadezena == 9){
                                    printf("XC");
                                }

                                int numeroresto3 = numeroresto2 % 10;

                                if(numeroresto3 == 1){
                                    printf("I");
                                } else if(numeroresto3 == 2){
                                    printf("II");
                                } else if(numeroresto3 == 3){
                                    printf("III");
                                } else if(numeroresto3 == 4){
                                    printf("IV");
                                } else if(numeroresto3 == 5){
                                    printf("V");
                                } else if(numeroresto3 == 6){
                                    printf("VI");
                                } else if(numeroresto3 == 7){
                                    printf("VII");
                                }  else if(numeroresto3 == 8){
                                    printf("VIII");
                                }  else if(numeroresto3 == 9){
                                    printf("IX");
                                }

                            }
                }
        
}
    


    return 0;
}