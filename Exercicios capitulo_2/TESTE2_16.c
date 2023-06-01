#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro entre 1 e 3999: ");
    scanf("%d", &num);

    if (num < 1 || num > 3999) {
        printf("Número fora do intervalo permitido.\n");
        return 0;
    }

    // unidades
    if (num % 10 == 1) {
        printf("I");
    } else if (num % 10 == 2) {
        printf("II");
    } else if (num % 10 == 3) {
        printf("III");
    } else if (num % 10 == 4) {
        printf("IV");
    } else if (num % 10 == 5) {
        printf("V");
    } else if (num % 10 == 6) {
        printf("VI");
    } else if (num % 10 == 7) {
        printf("VII");
    } else if (num % 10 == 8) {
        printf("VIII");
    } else if (num % 10 == 9) {
        printf("IX");
    }

    // dezenas
    num /= 10;
    if (num % 10 == 1) {
        printf("X");
    } else if (num % 10 == 2) {
        printf("XX");
    } else if (num % 10 == 3) {
        printf("XXX");
    } else if (num % 10 == 4) {
        printf("XL");
    } else if (num % 10 == 5) {
        printf("L");
    } else if (num % 10 == 6) {
        printf("LX");
    } else if (num % 10 == 7) {
        printf("LXX");
    } else if (num % 10 == 8) {
        printf("LXXX");
    } else if (num % 10 == 9) {
        printf("XC");
    }

    // centenas
    num /= 10;
    if (num % 10 == 1) {
        printf("C");
    } else if (num % 10 == 2) {
        printf("CC");
    } else if (num % 10 == 3) {
        printf("CCC");
    } else if (num % 10 == 4) {
        printf("CD");
    } else if (num % 10 == 5) {
        printf("D");
    } else if (num % 10 == 6) {
        printf("DC");
    } else if (num % 10 == 7) {
        printf("DCC");
    } else if (num % 10 == 8) {
        printf("DCCC");
    } else if (num % 10 == 9) {
        printf("CM");
    }

    // milhares
    num /= 10;
    if (num % 10 == 1) {
        printf("M");
    } else if (num % 10 == 2) {
        printf("MM");
    } else if (num % 10 == 3) {
        printf("MMM");
    }

    printf("\n");

    return 0;
}