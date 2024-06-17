#include "../include/Estagiario.hpp"
#include <iostream>

Estagiario::Estagiario(string id, string cpf, string nome):Funcionario(nome, cpf){}
Estagiario::~Estagiario(){}

int Estagiario::setMod(int modificadorAcesso){
    try
    {
        modificadorAcesso=-1;
        if(modificadorAcesso!=01 || modificadorAcesso!=10 || modificadorAcesso!=00){
            std::cin>>modificadorAcesso;
            return modificadorAcesso;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        

}