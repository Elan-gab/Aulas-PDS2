#include <stdio.h>
#include "circulo.h"
#include "pilha.h"

int main() {

    /* ============== saida 1 ==============

    Circulo *c = circ_cria(1, 2, 5), *cc = circ_cria(1, 2, 3);

    float area = circ_area(c);

    int b = circ_concentricos(c, cc);

    float raio = circ_raio(c);

    circ_libera(c);
    circ_libera(cc);

    printf("area: %.2f\nmesmo raio? %d\nraio: %.2f", area, b, raio);

    */

    // ============== saida 2 ==============
    
    Pilha* p = pilha_cria();

    pilha_push(p, 4);
    pilha_push(p, 6);
    pilha_push(p, 7);

    int x = pilha_pop(p);
    printf("retirei da pilha -> %d\n", x);
    x = pilha_pop(p);
    printf("retirei da pilha -> %d\n", x);
    x = pilha_pop(p);
    printf("retirei da pilha -> %d\n", x);

    printf("pilha vazia? %d\n", pilha_vazia(p));

    x = pilha_pop(p);
    printf("retirei da pilha -> %d (pilha estava vazia)\n", x);

    pilha_libera(p);
    return 0;
}