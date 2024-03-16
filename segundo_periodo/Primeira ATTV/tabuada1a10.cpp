#include <iostream>

using namespace std;

int main() 
{
    int valor;
    
    cout << "Digite um valor inteiro entre 1 e 10: ";
    cin >> valor;
    
    if (valor < 1 || valor > 10) {

        cout << "Valor inválido." << endl;

    } else {
        for (int i = 1; i <= 10; i++) {
            cout << valor << " x " << i << " = " << valor*i << endl;
        }
    }
    
}
