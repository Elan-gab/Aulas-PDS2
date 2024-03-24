#include "requisitos.h"

typedef struct produto
{
    int id;
    int estoque;
    char* nome_comercial;
}Produto;

typedef struct entrega
{
    int id;           // identificador da entrega
    Produto produtos; // vetor de produtos
    char* destino;    // endereco de destino
    int status;       // status da entrega
}Entrega;

typedef struct rota
{
    int id;             // identificador da rota
    Entrega* entregas;  // ponteiro para um vetor sequenciado de entregas
    //espera-se um tipo GPS para integrar com o sistema
}Rota;


Produto* recuperar_produto_por_id(int id) {

    Produto* p;

    //algoritmo de busca

    return p;
}