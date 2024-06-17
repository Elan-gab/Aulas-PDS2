#include "../../Core/include/Funcionario.hpp"
#include "../../Core/include/Setor.hpp"

class Engenheiro_de_software:public Funcionario{
    public:
        Engenheiro_de_software(string id, string cpf, string nome);
        ~Engenheiro_de_software();
        int setMod(int modificador) override;
};