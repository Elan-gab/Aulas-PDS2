#include "classe.hpp"

Pessoa::Pessoa() {

    this->nome = "User";
    this->cpf = "000.000.000-00";
}

Pessoa::Pessoa(string nome) {
    this->nome = nome;
    this->cpf = "000.000.000-00";
}


Pessoa::Pessoa(string nome, string cpf):
    nome(nome), cpf(cpf){}

string Pessoa::paraTexto() {

    return nome + "\t" + cpf;
}