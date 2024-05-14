#ifndef ESTRATEGISTA
#define ESTRATEGISTA
#include "../core-simulador-hpp/Personagem.hpp"
class Estrategista : public Personagem
{
    public:
        Estrategista(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif