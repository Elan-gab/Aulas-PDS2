#include "arvore.h"
#include <stdio.h>
#include <malloc.h>

typedef struct No
{
    No* menor;
    No* maior;
    int valor;
}No;

typedef struct Arvore
{
    No* raiz;
}Arvore;

Arvore* cria_arvore() {

    Arvore* a = malloc(sizeof(Arvore));
    a->raiz = NULL;
    return a;
}

void add(Arvore* a, int x) {

    int flag;
    No* n2, *n = a->raiz, *novo = malloc(sizeof(No));
    novo->valor = x;
    novo->menor = NULL;
    novo->maior = NULL;

    while(n != NULL) {
        if(n->valor == x) {
            printf("valor ja esta na arvore");
            goto end;
        }
        else if(n->valor > x) {

            n2 = n;
            n = n->maior;
            flag = 0;
        }
        else {

            flag = 1;
            n2 = n;
            n = n->menor;
        }
    }

    n = novo;

    if(flag)
        n2->menor = n;
    else
        n2->maior = novo;

    end:
}

int buscar(Arvore* a, int x) {

    No* busca = a->raiz;

    while(busca != NULL) {

        if(busca->valor == x)
            return 1;
        else if(busca->valor > x)
            busca = busca->maior;
        else
            busca = busca->menor;
    }

    return 0;
}

void destroi_arvore(Arvore* a) {

    free(a);
}