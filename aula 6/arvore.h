#ifndef ARVORE_H
#define ARVORE_H

typedef struct No No;
typedef struct Arvore Arvore;

Arvore* cria_arvore();
void add(Arvore* a, int x);
int buscar(Arvore* a, int x);
void destroi_arvore(Arvore* a);

#endif