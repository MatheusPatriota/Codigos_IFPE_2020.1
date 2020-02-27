#include <stdio.h>
#include "funcoes.h"
#define DIM  500

int main(){
    char str[DIM], str1[DIM], str2[DIM];
    printf("Informe uma sequencia de caracteres: ");
    scanf(" %s[^\n] ", str1);
    printf("Informe outra sequencia de caracteres: ");
    scanf(" %s[^\n] ", str2);
    copia(str,str1);
    concatena(str,str2);
    printf("A quantidade de caracteres da concatenacao eh de: %d \n", comprimento(str));

}
