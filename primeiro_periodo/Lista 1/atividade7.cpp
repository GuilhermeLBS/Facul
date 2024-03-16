

//                          Multiplicação ou Soma



#include <iostream>

using namespace std;

int main() {
    int valor1, valor2, resultado;
    
    cout << "Digite o primeiro valor inteiro: ";
    cin >> valor1;
    
    cout << "Digite o segundo valor inteiro: ";
    cin >> valor2;
    
    if (valor1 > valor2) {
        resultado = valor1 + valor2;
        cout << "A soma dos valores é: " << resultado << endl;
    } else {
        resultado = valor1 * valor2;
        cout << "A multiplicação dos valores é: " << resultado << endl;
    }
    
    
}
