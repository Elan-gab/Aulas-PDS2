#include<iostream>
#include"classe.hpp"
using std::cout;
using std::endl;

int main() {

    Pessoa p("elan", "096.174.413-81");

    cout << p.paraTexto() << endl;

    return 0;
}