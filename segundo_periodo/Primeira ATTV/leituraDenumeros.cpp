#include <iostream>

using namespace std;

int main() {
    int numero, pares, impares, i;

    for (i = 1; i <= 10; i++) {
        
        cout << "Digite o " << i << "º número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;

}
