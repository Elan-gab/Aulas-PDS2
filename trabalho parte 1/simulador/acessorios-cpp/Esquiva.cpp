#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Esquiva.hpp"

Esquiva::Esquiva(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Esquiva::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Esquiva::getResistencia() 
{
    return this->resistencia;
}