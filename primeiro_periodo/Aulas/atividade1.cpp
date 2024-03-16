#include <iostream>
using namespace std;

// solicita ao usuario temperatura e velocidade do vento
// vento mais de 40km/h, precisa de um casaco
// temperatura abaixo de 15°, precisa de casaco


int main() 
{
    int temp; 
    int velVento;
    bool vestir_casaco = false;

    cout << "Digite a temperatura: ";
    cin >> temp;

    cout << "Digite a velocidade: ";
    cin >> velVento;

    if (temp <= 15 || velVento >= 40) {
        vestir_casaco = true;
    }

    if (vestir_casaco) {
        cout << "Eh recomendado vestir um casaco." << endl;
    } else {
        cout << "Nao eh necessario vestir um casaco." << endl;
    }

    return 0;
}