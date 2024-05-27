#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    
    string cpf;
    int i;


    entrada:
    cin >> cpf;

    try {

        if(cpf.size() != 14)
            throw invalid_argument("Tamanho de CPF invalido!");

        if(cpf.find_first_not_of("0123456789.-") != string::npos)
            throw invalid_argument("CPF invalido!");
    }
    
    catch(invalid_argument& e) {
        cout << e.what() << endl;
        
        goto entrada;
    }

    cout << "deu certo xd" << endl;

    return 0;
}