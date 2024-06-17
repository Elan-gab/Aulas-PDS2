#include "../include/DesenvFront.hpp"

Desenvolvedor_Frontend::Desenvolvedor_Frontend(string id, string cpf, string nome):Funcionario(nome, cpf){}
Desenvolvedor_Frontend::~Desenvolvedor_Frontend(){};

int Desenvolvedor_Frontend::setMod(int modificadorAcesso){
    this->modificadorAcesso=10;
}