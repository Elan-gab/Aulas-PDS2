#ifndef BATEDOR
#define BATEDOR
#include "../core-simulador-hpp/Personagem.hpp"
class Batedor : public Personagem
{
    public:
        Batedor(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif