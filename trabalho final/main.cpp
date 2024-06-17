#include "Core/include/Funcionario.hpp"
#include "Core/include/Setor.hpp"

#include <iostream>
using namespace std;

int main(){
    
    Funcionario *f = new Funcionario("3123", "arnaldo");
    cout << f->getCPF() << endl;
    
}