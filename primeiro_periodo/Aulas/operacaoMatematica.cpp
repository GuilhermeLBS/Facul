#include <iostream>

using namespace std;

int main() {
    int op;
    float num1, num2;

    cout << "Menu de Operacoes Matematicas" << endl;
    cout << "------------------------------" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cout << "------------------------------" << endl;

    cout << "Digite a operacao desejada (1-4): ";
    cin >> op;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch (op) {
        case 1: // Soma
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2: // Subtracao
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3: // Multiplicacao
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4: // Divisao
            if (num2 == 0) {
                cout << "Erro: Divisao por zero" << endl;
            } else {
                cout << "Resultado: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Operacao invalida!" << endl;
    }

    return 0;
}
