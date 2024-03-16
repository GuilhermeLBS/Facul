#include <iostream>
#include <string>

using namespace std;

const int NUM_PESSOAS = 5;
const int TAM_NOME = 50;
const int TAM_CPF = 12;

int main() 
{
    
    string pessoas[NUM_PESSOAS][2]; 


    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i][0]);

        cout << "Digite o CPF da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i][1]);
    }

    cout << "\nDados das pessoas:\n";


    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "Pessoa " << i + 1 << ":\n";
        cout << "Nome: " << pessoas[i][0] << endl;
        cout << "CPF: " << pessoas[i][1] << endl;
        cout << endl;
    }


}

