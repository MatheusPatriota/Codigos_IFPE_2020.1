#include <stdio.h>

void swap(int *r, int *s)
{
    int temp;
    temp = *r;
    *r = *s;
    *s = temp;
    return;
}
int main()
{
    int i, j, *p, *q; // declarando variaveis e ponteiros
    scanf("%d%d", &i, &j); // pedindo informacoes ao usuario
    p = &i; // ponteiro p aponta para o valor de i
    q = &j; // ponteiro q aponta para o valor de i
    printf("%d %d\n", p, q); // valor do ponteiro de p e q
    printf("%d %d\n", i, j); // valor do ponteiro de i e j antes da troca
    swap(p, q); // chamada da funcao swap
    printf("%d %d\n", i, j); // valor de i e j apos a swap
    return 0;
}
