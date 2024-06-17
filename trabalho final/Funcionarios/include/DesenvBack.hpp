#ifndef DESENVOLVEDOR_BACKEND
#define DESENVOLVEDOR_BACKEND

#include "../../Core/include/Funcionario.hpp"

using std::string;

class Desenvolvedor_Backend:public Funcionario {
    public:
        Desenvolvedor_Backend(string nome, string cpf);
        ~Desenvolvedor_Backend();
        int setMod(int modificador) override;
};

#endif