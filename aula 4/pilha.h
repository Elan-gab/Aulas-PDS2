#ifndef PILHA_H
#define PILHA_H

typedef struct no No;
typedef struct pilha Pilha;

Pilha* pilha_cria();
int pilha_pop(Pilha* p);
void pilha_push(Pilha* p, int x);
int pilha_vazia(Pilha* p);
void pilha_libera(Pilha* p);

#endif