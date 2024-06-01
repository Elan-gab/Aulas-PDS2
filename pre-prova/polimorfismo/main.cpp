#include "veiculo.hpp"
#include <vector>

using std::vector;

int main() {

    vector<Veiculo*> veiculos;

    Caminhao* caminhao = new Caminhao("mercedes?", "sla nn entendo de caminhao", 3, 3);
    Van* van = new Van("ford", "tbm nn entendo de van", 1, 10);
    // eu pesquisei pra saber se tinha van da ford

    veiculos.push_back(caminhao);
    veiculos.push_back(van);

    for(auto veiculo : veiculos)
        veiculo->exibirDados();

    return 0;
}