

//                      Acesso


#include <iostream>

using namespace std;

int main() {

    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    if (senha == 34567) {
        cout << "Acesso autorizado" << endl;
    } else {
        cout << "Acesso negado" << endl;
    }

    
}
