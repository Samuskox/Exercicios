#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float areacirculo(float r){
    const double PI = acos(-1);
    return PI*pow(r,2);
}
float circuferenciacirculo(float r){
    const double PI = acos(-1);
    return 2*PI*r;
}
int main(){
    int raio;
    printf("Raio: ");
    scanf("%d", &raio);

    printf("Area = %.2f\n", areacirculo(raio));
    printf("Circuferencia = %.2f", circuferenciacirculo(raio));

    return 0;
}