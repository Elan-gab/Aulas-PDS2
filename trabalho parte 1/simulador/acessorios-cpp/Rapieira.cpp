#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Rapieira.hpp"
#include<stdlib.h>
#include<time.h>

Rapieira::Rapieira(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Rapieira::gerarForcaAtaque()
{   
    srand(time(0));
    return rand()%(maxForca - minForca + 1) + minForca;
}

string Rapieira::gerarRuidoAtaque()
{
    return "rwui rwui rwui";
}