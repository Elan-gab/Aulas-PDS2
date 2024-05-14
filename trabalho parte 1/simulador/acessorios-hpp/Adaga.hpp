#ifndef ADAGA
#define ADAGA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Adaga : public ArmaAtaque {

    public:
        Adaga(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif