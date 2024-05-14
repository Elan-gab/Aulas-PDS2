#include "../personagens-hpp/Arqueiro.hpp"

Arqueiro::Arqueiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Arqueiro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Arqueiro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Arqueiro::pegarDescricao() 
{
    return "Nao ha como fugir!";
}