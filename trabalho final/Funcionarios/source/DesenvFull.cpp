#include "../include/DesenvFull.hpp"

Desenvolvedor_Fullstack::Desenvolvedor_Fullstack(string id, string cpf, string nome):Funcionario(nome, cpf){}
Desenvolvedor_Fullstack::~Desenvolvedor_Fullstack(){};

int Desenvolvedor_Fullstack::setMod(int modificadorAcesso){
    this->modificadorAcesso=11;
}