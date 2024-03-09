#include<math.h>
#include "ponto.h"

Ponto criar_ponto(int x, int y) {

    Ponto p;

    p.x = x;
    p.y = y;

    return p;
}

float calcular_distancia(Ponto p, Ponto q) {

    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}