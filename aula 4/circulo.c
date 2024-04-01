#include "circulo.h"
#include <malloc.h>
#include <math.h>
#define PI 3.141592


typedef struct circulo
{
    float x;
    float y;
    float r;
}Circulo;

Circulo* circ_cria(float x, float y, float r) {

    Circulo* c = (Circulo*)malloc(sizeof(Circulo));

    c->x = x;
    c->y = y;
    c->r = r;

    return c;
}

void circ_libera(Circulo* c) {
    
    free(c);
}

float circ_area(Circulo* c) {

    return PI * pow(c->r, 2);
}

int circ_concentricos(Circulo *c1, Circulo *c2) {

    if((c1->x == c2->x) && (c1->y == c2->y))
        return 1;
    return 0;
}

float circ_raio(Circulo* c) {

    return c->r;
}