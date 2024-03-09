#ifndef PONTO_H
#define PONTO_H

typedef struct ponto {
    int x;
    int y;
} Ponto;

#include "ponto.c"

Ponto criar_ponto(int x, int y);
float calcular_distancia(Ponto p, Ponto q);

#endif