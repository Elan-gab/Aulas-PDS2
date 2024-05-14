#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../core-simulador-hpp/Simulador.hpp"
#include "../core-simulador-hpp/Personagem.hpp"

using std::cout;
using std::endl;



bool Simulador::adicionarPersonagem(Personagem* personagem, int equipe)
{
    switch (equipe)
    {
        case 1:
            equipe1.push_back(personagem);
            return true;
        
        case 2:
            equipe2.push_back(personagem);
            return true;

        default:
            return false;
    }
}

bool Simulador::removerPersonagem(Personagem* personagem, vector<Personagem*> equipe)
{
    int posicoes = 0;
    for(auto p : equipe)
    {
        if(p->getId() == personagem->getId())
        {
            equipe.erase(equipe.begin()+posicoes);
            return true;
        }
        posicoes++;
    }
    return false;
}

bool Simulador::removerPersonagem(Personagem* personagem, int equipe)
{
    if (equipe == 1)
    {
        return removerPersonagem(personagem, equipe1);
    }

    if(equipe == 2)
    {
        return removerPersonagem(personagem, equipe2);
    }
    
    return false;
}

int Simulador::calcularVidaEquipe(int seletorDeEquipe)
{   
    vector<Personagem*> equipe = seletorDeEquipe == 1 ? equipe1 : equipe2;
    int soma = 0;
    for (auto personagem : equipe)
    {
        soma += personagem->getVida();
    }
    return soma;
}

Personagem* Simulador::proximoPersonagem(vector<Personagem*> equipe, int c)
{
    int tamanho = equipe.size();
    if (tamanho == 0)
    {
        return nullptr;
    }

    // Define a semente baseada no numero de loops do simulador
    std::srand(c);

    int n = rand() % tamanho;

    return equipe[n];
}

int Simulador::criarCombate(Personagem* personagem1, Personagem* personagem2)
{
    int ataque = personagem1->gerarAtaque();
    int defesa = personagem2->criarDefesa();
    int dano = ataque - defesa < 0 ? 0 : ataque - defesa;
    int nova_vida = personagem2->getVida() - dano > 0 ? personagem2->getVida() - dano : 0;
    personagem2->setVida(nova_vida);
    return dano;
}

string Simulador::criarSaida(Personagem* personagem1, Personagem* personagem2, int dano)
{
    string saida = "---------------------------------------------------------\n";
    saida += "O personagem " + personagem1->getNome() + " irá atacar o personagem " + personagem2->getNome() + "\n";
    saida += "com a sua arma " + personagem1->getArmaAtaque()->getDescricaoArma() + "\n";
    saida += personagem1->getArmaAtaque()->gerarRuidoAtaque() + "\n";
    saida += "Dano causado = " + std::to_string(dano) + "\n";
    saida += dano > 0 ? personagem1->getNome() + ": " : "";
    saida += dano > 0 ? personagem1->pegarDescricao() : "";
    saida += "\nVIDA:\n" + personagem1->getNome() + " [" + std::to_string(personagem1->getVida()) + "] " + personagem2->getNome() + " [" + 
             std::to_string(personagem2->getVida()) + "]";
    saida += "\nEquipe 1 " + std::to_string(calcularVidaEquipe(1)) + " x " + 
             std::to_string(calcularVidaEquipe(2)) + " Equipe 2";
    saida += "\n---------------------------------------------------------\n";
    return saida;
}

void Simulador::iniciarSimulacao()
{
    
    int dano = 0, c = 0;
    Personagem* personagemAtacante;
    Personagem* personagemDefensor;
    while(calcularVidaEquipe(1) > 0 && calcularVidaEquipe(2) > 0)
    {   
        c++;
        // Define a semente baseada no numero de loops do simulador
        std::srand(c);
        int equipeQueAtaca =  (std::rand() % 2) == 0 ? 1 : 2;

        if (equipeQueAtaca == 1)
        {
            personagemAtacante = proximoPersonagem(equipe1, c);
            personagemDefensor = proximoPersonagem(equipe2, c);
        }

        if (equipeQueAtaca == 2)
        {
            personagemAtacante = proximoPersonagem(equipe2, c);
            personagemDefensor = proximoPersonagem(equipe1, c);
        }

        dano = criarCombate(personagemAtacante, personagemDefensor);
        if(personagemDefensor->getVida() == 0)
            if(removerPersonagem(personagemDefensor, equipeQueAtaca == 1 ? 2 : 1) == false)
                cout << endl << "nao foi possivel remover personagem" << endl;
        cout << criarSaida(personagemAtacante, personagemDefensor, dano) << endl;
    }
}