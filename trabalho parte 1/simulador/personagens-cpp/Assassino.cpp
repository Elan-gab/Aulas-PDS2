#include "../personagens-hpp/Assassino.hpp"

Assassino::Assassino(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Assassino::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Assassino::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Assassino::pegarDescricao() 
{
    return "Voce ja esta morto!!";
}