#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include<stdlib.h>
#include<time.h>

Espada::Espada(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Espada::gerarForcaAtaque()
{   
    srand(time(0));
    return rand()%(maxForca - minForca + 1) + minForca;
}

string Espada::gerarRuidoAtaque()
{
    return "Shin Swin";
}