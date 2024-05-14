#ifndef ARCO
#define ARCO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Arco : public ArmaAtaque {

    public:
        Arco(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif