#ifndef REQUISITOS_H
#define REQUISITOS_H

// ================== estruturas ==================

typedef struct livro Livro;
typedef struct reserva Reserva;
typedef struct evento Evento;

// ============== prototipo das funcoes ==============

/**
 * @param id o numero identificador do livro
 * @return retorna um ponteiro para o livro pesquisado
*/
Livro* pesquisar_livro(int id);

/**
 * @param l ponteiro para o livro a ser reservado
 * @param q quantidade de reservas
 * @param t duracao da reserva
 * @param userID o identificador do requisitante
 * @return retorna a requisicao de reserva do livro
*/
Reserva* reservar_livro(Livro* l, int q, int t, int userID);


/**
 * @param r ponteiro para a reserva a ser renovada
 * @param t duracao da nova reserva
 * @return um ponteiro para a nova reserva 
*/
Reserva* renovar_emprestimo(Reserva* r, int t);

/**
 * @param evento ponteiro para o evento no qual o usuario deseja se inscrever
 * @param userID identificador do usuario
*/
void inscricao(Evento* evento, int userID);

#endif