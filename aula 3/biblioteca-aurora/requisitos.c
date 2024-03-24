#include<malloc.h>
#include "requisitos.h"

// ================== estruturas ==================

typedef struct livro
{
    int id;               // identificador do livro
    char* titulo;         // titulo do livro
    char* autor;          // autor do livro
    char* genero;         // genero do livro
    int disponibilidade;  // quantidade de copias disponiveis
}Livro;

typedef struct reserva
{
    int userID;  // identificador do usuario que requisitou a reserva
    Livro l;     // livro a ser reservado
    int timeout; // tempo limite de reserva de um livro
}Reserva;

typedef struct evento
{   
    int n;              // numero de participantes
    int* participantes; // vetor dinamico de id dos usuarios participantes
    int data;           // data do evento
    char* tema;         // tema do evento
}Evento;

// ============== implementacao das funcoes ==============

Livro* pesquisar_livro(int id) {

    Livro* p;

    //algoritmo de busca por ID

    return p;
}

Reserva* reservar_livro(Livro* l, int q, int t, int userID) {

    l->disponibilidade -= q;
    Reserva* r;
    r->timeout = t;
    r->l = *l;
    r->userID = userID;

    return r;
}

Reserva* renovar_emprestimo(Reserva* r, int t) {

    r->timeout = t;
    return r;
}

void inscricao(Evento* evento, int userID) {

    evento->n++;
    evento->participantes = (int *)realloc(evento->participantes, evento->n);
    evento->participantes[evento->n - 1];
}