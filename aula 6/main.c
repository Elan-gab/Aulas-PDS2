#include "arvore.h"
#include <stdio.h>

int main() {

    Arvore* a = cria_arvore();


    add(a, 3);
    add(a, 3);
    add(a, 4);

    if(buscar(a, 3))
        printf("deu bom\n");
    else
        printf("deu ruim\n");

    destroi_arvore(a);
    return 0;
}