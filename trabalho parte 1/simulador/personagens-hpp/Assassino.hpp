#ifndef ASSASSINO
#define ASSASSINO
#include "../core-simulador-hpp/Personagem.hpp"
class Assassino : public Personagem
{
    public:
        Assassino(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif