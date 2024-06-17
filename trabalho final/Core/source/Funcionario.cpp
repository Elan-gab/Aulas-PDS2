#include "../include/Funcionario.hpp"
#include <iostream>

Funcionario::~Funcionario(){};

int Funcionario::count = 0;

void Funcionario::setCPF(string cpf) {

    if(cpf.size() != 14)
        throw InvalidCPF("Tamanho");
    if(cpf.find_first_not_of("0123456789.-") != string::npos)
        throw InvalidCPF("Formato");
    this->cpf = cpf;
}

Funcionario::Funcionario(string nome, string cpf) : nome(nome) {

    this->id = count;
    count ++;

    try {

        setCPF(cpf);
    }

    catch(InvalidCPF &e) {

        std::cout << e.what() << std::endl;
    }

}

string Funcionario::getCPF() {

    return this->cpf;
}



string Funcionario::getNome()
{
    return this->nome;
}


int Funcionario::getId()
{
    return this->id;
}