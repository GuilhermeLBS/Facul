#include <iostream>


using namespace std;

int main() {
    int senha_correta = 1234;
    int senha;

    while (true) {
        cout << "Digite a senha (4 números inteiros): ";
        cin >> senha;
        if (senha == senha_correta) {
            cout << "Senha Correta" << endl;
            break;
        } else {
            cout << "Senha Incorreta" << endl;
        }
    }

}
