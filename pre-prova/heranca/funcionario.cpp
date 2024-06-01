#include "funcionario.hpp"

Funcionario::Funcionario() {}

FuncionarioRegular::FuncionarioRegular(std::string nome, int id, double salarioBase) {
    Funcionario::nome = nome;
    Funcionario::id = id;
    Funcionario::salarioBase = salarioBase;
}

Gerente::Gerente(std::string nome, int id, double salarioBase, double bonusAnual)
: bonusAnual(bonusAnual) {
    Funcionario::nome = nome;
    Funcionario::id = id;
    Funcionario::salarioBase = salarioBase;
}

Estagiario::Estagiario(std::string nome, int id, double salarioBase) {
    Funcionario::nome = nome;
    Funcionario::id = id;
    Funcionario::salarioBase = salarioBase;
}

double FuncionarioRegular::calcularSalarioTotal() {

    return salarioBase;
}

double Gerente::calcularSalarioTotal() {

    return salarioBase + bonusAnual;
}

double Estagiario::calcularSalarioTotal() {

    return 0.6 * salarioBase;
}

Funcionario::~Funcionario() {}
FuncionarioRegular::~FuncionarioRegular() {}
Gerente::~Gerente() {}
Estagiario::~Estagiario() {}