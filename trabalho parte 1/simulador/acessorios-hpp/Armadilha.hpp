#ifndef ARMADILHA
#define ARMADILHA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Armadilha : public ArmaDefesa
{
    public:
        Armadilha(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif