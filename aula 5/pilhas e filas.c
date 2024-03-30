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

typedef struct fila
{
    No* head;
    No* tail;

}Fila;

Pilha* criar_pilha(){

    Pilha* p = malloc(sizeof(Pilha));
    p->head = NULL;
    p->head->proximo = NULL;

    return p;
}

void push(Pilha* p, int valor) {

    No* no = malloc(sizeof(No));
    no->proximo = p->head;
    no->valor = valor;
    p->head = no;
}

int pop(Pilha* p) {

    if(p->head == NULL)
        return NULL;

    int valor = p->head->valor;
    No* no = p->head->proximo;
    free(p->head);
    p->head = no;

    return valor;
}

Fila* criar_fila() {

    Fila* f = malloc(sizeof(Fila));
    f->head = NULL;
    f->tail = f->head;

    return f;
}

void insere(Fila* fila, int x) {

    No* no = malloc(sizeof(No));
    no->valor = x;
    no->proximo = NULL;

    if(fila->head == NULL)
        fila->head = no;
    else
        fila->tail = no;
}

int retira(Fila* fila) {

    if(fila->head == NULL)
        return NULL;
    
    int x = fila->head->valor;
    No* prox = fila->head->proximo;
    free(fila->head);

    if(prox == NULL)
        fila->tail = NULL;
    else
        fila->head = prox;

    return x;
}