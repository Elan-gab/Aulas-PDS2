#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Adaga.hpp"
#include<stdlib.h>
#include<time.h>

Adaga::Adaga(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Adaga::gerarForcaAtaque()
{   
    srand(time(0));
    return rand()%(maxForca - minForca + 1) + minForca;
}

string Adaga::gerarRuidoAtaque()
{
    return "katchau";
}