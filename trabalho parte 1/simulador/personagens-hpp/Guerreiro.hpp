#ifndef GUERREIRO
#define GUERREIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Guerreiro : public Personagem
{
    public:
        Guerreiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif