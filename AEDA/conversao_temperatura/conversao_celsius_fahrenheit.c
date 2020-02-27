#include <stdio.h>

float converte(float c){
    float f;
    f = 1.8 * c + 32;
    return f;
}

int main(){
    float t1,t2;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&t1);
    t2 = converte(t1);
    printf("A temperatura em Fahrenheit eh: %0.2f\n",t2);
    return 0;
}