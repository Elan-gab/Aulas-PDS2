#ifndef AREA_BACK
#define AREA_BACK

#include "../Core/include/Setor.hpp"
#include "../Core/include/funcionario.hpp"

class AreaBack : public Setor{
    public:
        AreaBack(Funcionario* back);
        ~AreaBack();
        bool verificacao_de_acesso(Funcionario* back) override;
};

#endif