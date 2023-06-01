#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void classificaTrinca(int, int, int);


int main(){

    int array1[3];
    int array2[3];
    int array3[3];

    for(int i = 0; i < 3; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &array1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &array2[i]);
        printf("n3[%d]: ", i);
        scanf("%d", &array3[i]);
    }

    for(int i = 0; i < 3; i++){
        classificaTrinca(array1[i], array2[i], array3[i]);
    }
    return 0;
}

void classificaTrinca(int n1, int n2, int n3){
    printf("%d, %d e %d: ", n1, n2, n3);
    int t;
    if(n2 < n1){
        t = n1;
        n1 = n2;
        n2 = t;
    } 

    if(n3 < n1){
        t = n1;
        n1 = n3;
        n3 = t;
    } 

    if(n3 < n2){
        t = n2;
        n2 = n3;
        n3 = t;
    } 


    printf("%d <= %d <= %d\n", n1, n2, n3);
}
