#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Machado.hpp"
#include<stdlib.h>
#include<time.h>

Machado::Machado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Machado::gerarForcaAtaque()
{   
    srand(time(0));
    return rand()%(maxForca - minForca + 1) + minForca;
}

string Machado::gerarRuidoAtaque()
{
    return "tchain";
}