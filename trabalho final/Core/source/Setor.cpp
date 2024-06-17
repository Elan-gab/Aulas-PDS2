#include "../include/Setor.hpp"

int Setor::count = 0;

Setor::Setor(){
    
    this->setorID = count;
    count ++;
};

Setor::~Setor(){};

void Setor::addFuncionario(Funcionario* Funcionario){

    this->Funcionarios_setor.push_back(Funcionario);
}

string Setor::getNome()
{
    return this->nome;
}

int Setor::getSetorID()
{
    return this->setorID;
}

std::vector<Funcionario *> Setor::getFuncionarios() {
    
    return this->Funcionarios_setor;
}