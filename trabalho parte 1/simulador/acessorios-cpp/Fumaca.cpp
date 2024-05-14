#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Fumaca.hpp"

Fumaca::Fumaca(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Fumaca::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Fumaca::getResistencia() 
{
    return this->resistencia;
}