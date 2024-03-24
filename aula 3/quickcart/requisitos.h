#ifndef REQUISITOS_H
#define REQUISITOS_H

// ================== estruturas ==================

typedef struct produto Produto;
typedef struct entrega Entrega;
typedef struct rota Rota;

// ============== prototipo das funcoes ==============

/**
 * Recupera um produto pelo seu ID.
 *
 * @param id O ID do produto a ser recuperado.
 * @return Um ponteiro para o produto encontrado ou NULL se não existir.
 */
Produto* recuperar_produto_por_id(int id);

/**
 * Recupera todos os produtos em estoque 
 * @return Um ponteiro para a primeira posição da lista de produtos  ou NULL se não existir produto.
 */
Produto* recuperar_produtos();

/**
 * Armazena um novo produto.
 *
 * @param novo_produto O produto a ser armazenado.
 * @return 1 se o armazenamento foi bem-sucedido, 0 caso contrário.
 */
int armazenar_novo_produto(Produto novo_produto);

/**
 * Atualiza dados de um produto existente.
 *
 * @param produto O produto a ser atualizado.
 * @return 1 se o armazenamento foi bem-sucedido, 0 caso contrário.
 */
int atualizar_produto(Produto produto);


/**
 * Retira o produto do estoque.
 *
 * @param id O ID do produto a ser retirado.
 * @return 1 se a retirada foi bem-sucedida, 0 caso contrário.
 */
int retirar_produto_do_estoque(int id);


/**
 * Retira n produto(s) do estoque.
 *
 * @param id O ID do produto a ser retirado.
 * @param quantidade Quantidade de produtos a serem retirados do estoque
 * @return 1 se a retirada foi bem-sucedida, 0 caso contrário.
 */
int retirar_quantidade_produto_do_estoque(int id, int quantidade);


/**
 * Insere um produto no estoque.
 *
 * @param id O ID do produto a ser inserido.
 * @param quantidade A quantidade a ser adicionada ao estoque.
 * @return 1 se a inserção foi bem-sucedida, 0 caso contrário.
 */
int inserir_produto_no_estoque(int id, int quantidade);

/**
 * Cadastra uma nova entrega.
 *
 * @param nova_entrega A entrega a ser cadastrada.
 * @return 1 se o cadastro foi bem-sucedido, 0 caso contrário.
 */
int cadastrar_nova_entrega(Entrega nova_entrega);

/**
 * Recupera os dados de uma entrega pelo seu ID.
 *
 * @param id O ID da entrega a ser recuperada.
 * @return Um ponteiro para a entrega encontrada ou NULL se não existir.
 */
Entrega* recuperar_entrega_por_id(int id);

/**
  * Recupera todos as entregas do sistema
 * @return Um ponteiro para a primeira posição da lista de entregas  ou NULL se não existir entregas.

 */
Entrega* recuperar_todas_as_entregas();

/**
 * Cancela uma entrega.
 *
 * @param id O ID da entrega a ser cancelada.
 * @return 1 se o cancelamento foi bem-sucedido, 0 caso contrário.
 */
int cancelar_entrega(int id);

/**
 * Atualiza o status de uma entrega.
 *
 * @param id O ID da entrega a ser atualizada.
 * @param novo_status O novo status da entrega.
 * @return 1 se a atualização foi bem-sucedida, 0 caso contrário.
 */
int atualizar_status_entrega(int id, int novo_status);

/**
 * Obtém a localização de uma entrega.
 *
 * @param id O ID da entrega.
 * @return Uma string com a localização atual da entrega.
 */
char* obter_localizacao_entrega(int id);


/**
 * Aualiza a localização de uma entrega.
 *
 * @param id O ID da entrega.
 * @param localizacao Uma string com a localização atual da entrega.
 * @return 1 se a atualização foi bem-sucedida, 0 caso contrário.
 */
int atualiza_localizacao_entrega(int id, char* localizacao);


/**
 * @param entregas vetor de entregas para essa rota
 * @return retorna uma rota eficiente a partir dos destinos das entregas
*/
Rota criar_rota(Entrega* entregas);

/**
 * @param rota rota a ser atualizada
 * @param localizacao posicao em tempo real do motorista
 * @param novo_destino novo destino para a rota
*/
Rota atualizar_rota(Rota rota, char* localizacao, char* novo_destino);

/**
 * @param rota rota a ser finalizada
*/
void destruir_rota(Rota rota);

#endif