#ifndef RAPIEIRA
#define RAPIEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Rapieira : public ArmaAtaque {

    public:
        Rapieira(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif