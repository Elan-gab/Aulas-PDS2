#include "../personagens-hpp/Estrategista.hpp"

Estrategista::Estrategista(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Estrategista::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Estrategista::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Estrategista::pegarDescricao() 
{
    return "Te peguei!!";
}