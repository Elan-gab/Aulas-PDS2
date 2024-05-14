#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Parede.hpp"

Parede::Parede(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Parede::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Parede::getResistencia() 
{
    return this->resistencia;
}