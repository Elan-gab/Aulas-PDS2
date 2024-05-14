#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Arco.hpp"
#include<stdlib.h>
#include<time.h>

Arco::Arco(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Arco::gerarForcaAtaque()
{   
    srand(time(0));
    return rand()%(maxForca - minForca + 1) + minForca;
}

string Arco::gerarRuidoAtaque()
{
    return "tchufziu";
}