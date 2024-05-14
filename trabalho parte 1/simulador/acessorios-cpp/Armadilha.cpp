#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Armadilha.hpp"

Armadilha::Armadilha(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Armadilha::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Armadilha::getResistencia() 
{
    return this->resistencia;
}