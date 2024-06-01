#include "funcionario.hpp"
#include <iostream>
#include <vector>

#define SALARIO 1500
#define BONUS 1000

using namespace std;

int main() {

    vector<Funcionario*> funcionarios;

    FuncionarioRegular* regular = new FuncionarioRegular("zezin", 0, SALARIO);
    Gerente* gerente = new Gerente("boss", 1, SALARIO, BONUS);
    Estagiario* estagiario = new Estagiario("escravo", 2, SALARIO);

    funcionarios.push_back(regular);
    funcionarios.push_back(gerente);
    funcionarios.push_back(estagiario);

    for(auto funcionario : funcionarios)
        cout << funcionario->calcularSalarioTotal() << endl;

    return 0;
}