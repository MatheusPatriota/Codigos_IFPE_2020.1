#include "interface.h"

Ponto* cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    // if(p == ){
    //     printf("Memoria insuficiente");
    // }
}
void libera(Ponto* p);
void acessa(Ponto* p, float x, float y);
void atribui(Ponto* p, float x, float y);
float distancia(Ponto* p1, Ponto* p2);