

//              alturas


#include <iostream>

using namespace std;

int main() {
    float altura;
    
    // ler altura da pessoa
    cout << "Digite a altura da pessoa: ";
    cin >> altura;

    // verificar a faixa de altura
    if (altura < 1.5) {
        cout << "abaixo de um metro e meio" << endl;
    } else if (altura <= 1.8) {
        cout << "entre um metro e meio e um metro e oitenta centimetros" << endl;
    } else {
        cout << "acima de um metro e oitenta centimetros" << endl;
    }

    
}
