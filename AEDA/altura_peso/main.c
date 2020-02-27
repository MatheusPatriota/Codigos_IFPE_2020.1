#include <stdio.h>
#include "altura_peso.h"
#define alturaMaxima 225

int main()
{
    PesoAltura pessoa;
    pessoa.peso = 80;
    pessoa.altura = 185;

    printf("Peso: %i, Altura: %i\n", pessoa.peso, pessoa.altura);
    if (pessoa.altura > alturaMaxima)
    {
        printf("Altura acima da Maxima");
    }
    else
    {
        printf("Altura abaixo da Maxima");
    }
    return 0;
}