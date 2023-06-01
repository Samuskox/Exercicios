#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    if(a == 0){
        printf("Nao existe equacao do segundo grau!");
    } else {
        float delta = pow(b,2) - (4 * a * c);

        printf("Delta: %.2f\n", delta);

        if(delta < 0){
            printf("S = {}");
        } else {    

        float s1 = (-(b) + sqrt(delta))/ 2 * a;
        float s2 = (-(b) - sqrt(delta))/ 2 * a;

        if(s1 == s2){
            printf("S = {%.2f}", s1);
        } else {
            printf("S = {%.2f, %.2f}", fmax(s1, s2), fmin(s1, s2));
        }

        
        }
    }

    return 0;
}