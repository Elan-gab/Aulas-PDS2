#ifndef ARQUEIRO
#define ARQUEIRO
#include "../core-simulador-hpp/Personagem.hpp"
class Arqueiro : public Personagem
{
    public:
        Arqueiro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif