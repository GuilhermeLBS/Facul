#include <iostream>

using namespace std;

int main() 
{
    const int SIZE = 5;  
    int valores[SIZE];   
    int soma = 0;        


    cout << "Digite 5 valores inteiros:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> valores[i];
    }


    for (int i = 0; i < SIZE; i++) {
        soma += valores[i];
    }


    cout << "A soma dos valores é: " << soma << endl;


}
