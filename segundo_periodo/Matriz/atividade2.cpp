#include <iostream>

using namespace std;

int main() 
{
    int matriz[3][3];


    cout << "Digite os valores da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor para a posição (" << i+1 << ", " << j+1 << "): ";
            cin >> matriz[i][j];
        }
    }

    // Imprimindo a matriz criada
    cout << "Matriz criada:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Encontrando a quantidade de números pares e ímpares
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;


}
