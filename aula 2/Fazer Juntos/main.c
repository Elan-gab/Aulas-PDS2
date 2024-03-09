#include "ponto.h"
#include <stdio.h>

int main() {

    Ponto p = criar_ponto(3, 5), q = criar_ponto(4, 9);

    printf("%.2f\n", calcular_distancia(p, q));

    return 0;
}