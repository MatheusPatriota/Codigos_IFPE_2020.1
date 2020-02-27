#include <stdio.h>
#include <stdlib.h>

int  fatorial(int valor){
    if(valor ==1 ){
        return 1;
    }
    return valor * fatorial(valor-1);
}


int main(){
    int valor,result;
    printf("informe um numero para calcular o fatorial: ");
    scanf("%i", &valor);
    result = fatorial(valor);
    printf("O fatorial de %i eh %i", valor,result);
    return 0;
}