#ifndef AREA_FRONT
#define AREA_FORNT

#include "../Core/include/Setor.hpp"
#include "../Core/include/funcionario.hpp"

class AreaFront : public Setor{
    public:
        AreaFront(Funcionario* front);
        ~AreaFront();
        bool verificacao_de_acesso(Funcionario* front) override;
};

#endif