#include "../include/Areaback.hpp"

AreaBack::AreaBack(Funcionario* back) {
    getNome()="Area de desenvolvimento backend";
    if (verificacao_de_acesso(back)==true)
        std::cout << "Bem vindo" << std::endl;
    else
        std::cout << "Entrada nao autorizada" << std::endl;
}
AreaBack::~AreaBack(){}

bool AreaBack::verificacao_de_acesso(Funcionario* back) {
    return (back->modificadorAcesso==01 || back->modificadorAcesso==11)?true:false;
}