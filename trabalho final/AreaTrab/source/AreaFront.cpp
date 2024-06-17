#include "../include/Areafront.hpp"

AreaFront::AreaFront(Funcionario* front) {
    getNome()="Area de desenvolvimento frontend";
    if (verificacao_de_acesso(front)==true)
        std::cout<<"Bem vindo"<< std::endl;
    else
        std::cout<<"Entrada nao autorizada"<<std::endl;
}
AreaFront::~AreaFront() {}

bool AreaFront::verificacao_de_acesso(Funcionario* front) {
    return (front->modificadorAcesso==10 || front->modificadorAcesso==11)?true:false;
}