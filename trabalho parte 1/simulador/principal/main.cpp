#include <iostream>
#include <string>

#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Rapieira.hpp"
#include "../acessorios-hpp/Adaga.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Arco.hpp"
#include "../acessorios-hpp/Machado.hpp"

#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Esquiva.hpp"
#include "../acessorios-hpp/Fumaca.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Armadilha.hpp"
#include "../acessorios-hpp/Parede.hpp"

#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Arqueiro.hpp"
#include "../personagens-hpp/Assassino.hpp"
#include "../personagens-hpp/Guerreiro.hpp"
#include "../personagens-hpp/Estrategista.hpp"
#include "../personagens-hpp/Batedor.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* adaga = new Adaga("Adaga Afiada", 7, 15);
    ArmaAtaque* rapieira = new Rapieira("Rapieira de Ferro", 10, 25);
    ArmaAtaque* espada = new Espada("Lamina de Ares", 15, 20);
    ArmaAtaque* machado = new Machado("Corta-Cranios", 20, 30);
    ArmaAtaque* arco = new Arco("Agitacao Trovejante", 15, 20);

    ArmaDefesa* armadura = new Armadura("Armadura de ferro", 5);
    ArmaDefesa* esquiva = new Esquiva("Sharingan", 4);
    ArmaDefesa* parede = new Parede("Cobertura", 3);
    ArmaDefesa* fumaca = new Fumaca("Bomba de Fumaca", 4);
    ArmaDefesa* armadilha = new Armadilha("Armadilha com fios", 3);

    Personagem* p1 = new Arqueiro(1, "Yoimiya", 50, arco, parede);
    Personagem* p2 = new Assassino(2, "Scorpion", 40, espada, esquiva);
    Personagem* p3 = new Batedor(3, "Stormtrooper", 60, adaga, fumaca);
    Personagem* p4 = new Guerreiro(4, "Leonidas", 70, machado, armadura);
    Personagem* p5 = new Estrategista(5, "Einstein", 60, rapieira, armadilha);
    
    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}