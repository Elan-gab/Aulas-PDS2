#include "pilha.h"
#include <malloc.h>


typedef struct no
{
    int valor;
    No* proximo;
}No;

typedef struct pilha
{
    No* head;
}Pilha;

Pilha* pilha_cria(){

    Pilha* p = malloc(sizeof(Pilha));
    p->head = NULL;

    return p;
}

int pilha_pop(Pilha* p) {

    if(pilha_vazia(p))
        return -1;      //melhor uma mensagem de erro
    
    int valor = p->head->valor;
    No* no = p->head->proximo;
    free(p->head);
    p->head = no;

    return valor;
}

void pilha_push(Pilha* p, int x) {

    No* no = malloc(sizeof(No));
    no->proximo = p->head;
    no->valor = x;
    p->head = no;
}

int pilha_vazia(Pilha* p) {

    if(p->head == NULL)
        return 1;
    return 0;
}

void pilha_libera(Pilha* p) {

    No* head;

    while(pilha_vazia(p) == 0) {
        head = p->head;
        p->head = p->head->proximo;
        free(head);
    }
}