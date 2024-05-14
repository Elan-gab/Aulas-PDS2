#include "../personagens-hpp/Batedor.hpp"

Batedor::Batedor(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Batedor::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Batedor::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Batedor::pegarDescricao() 
{
    return "Alvo encontrado!";
}