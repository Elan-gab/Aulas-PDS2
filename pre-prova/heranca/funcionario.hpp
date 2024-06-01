#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>

class Funcionario {
    protected:
        int id;
        double salarioBase;
    public:
        std::string nome;
    protected:
        Funcionario();
        ~Funcionario();
    public:
        virtual double calcularSalarioTotal() = 0;
};

class FuncionarioRegular : public Funcionario {
    public:
        FuncionarioRegular(std::string nome, int id, double salarioBase);
        ~FuncionarioRegular();
        double calcularSalarioTotal() final;
};

class Gerente : public Funcionario {
    private:
        double bonusAnual;
    public:
        Gerente(std::string nome, int id, double salarioBase, double bonusAnual);
        ~Gerente();
        double calcularSalarioTotal() final;
};

class Estagiario : public Funcionario {
    
    public:
        Estagiario(std::string nome, int id, double salarioBase);
        ~Estagiario();
        double calcularSalarioTotal() final;
};

#endif