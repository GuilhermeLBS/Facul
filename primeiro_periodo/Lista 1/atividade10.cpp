

//              Tipo Pessoa



#include <iostream>

using namespace std;

int main() {

    char tipoPessoa;

    cout << "Digite 'F' para pessoa física ou 'J' para pessoa jurídica: ";
    cin >> tipoPessoa;

    if (tipoPessoa == 'F') {
        cout << "Pessoa física" << endl;
    } else if (tipoPessoa == 'J') {
        cout << "Pessoa jurídica" << endl;
    } else {
        cout << "Tipo de pessoa inválido" << endl;
    }

    
}
