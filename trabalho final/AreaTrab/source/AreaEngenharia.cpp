#include "../include/AreaEngenharia.hpp"

AreaEngenharia::AreaEngenharia(Funcionario* Engenharia) {
    getNome()="Area de desenvolvimento Engenhariaend";
    if (verificacao_de_acesso(Engenharia)==true)
        std::cout << "Bem vindo" << std::endl;
    else
        std::cout << "Entrada nao autorizada" << std::endl;
}
AreaEngenharia::~AreaEngenharia(){}

bool AreaEngenharia::verificacao_de_acesso(Funcionario* Engenharia) {
    return (Engenharia->modificadorAcesso==00)?true:false;
}