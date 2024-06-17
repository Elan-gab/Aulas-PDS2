#include "../include/EngenheiroS.hpp"

Engenheiro_de_software::Engenheiro_de_software(string id, string cpf, string nome):Funcionario(nome, cpf){}
Engenheiro_de_software::~Engenheiro_de_software(){};

int Engenheiro_de_software::setMod(int modificadorAcesso){
    this->modificadorAcesso=00;
}