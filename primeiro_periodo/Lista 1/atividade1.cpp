

//                           Atividade impar e par

#include <iostream>

using namespace std;

int main () 
{

    int num;

    cout << "Ola" << endl;
    
    cout << "Escreva um numero, ai falaremos se eh par ou impar.";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << "  eh um numero par." << endl;
    } else {
        cout << num << "  eh um numero impar." << endl;
    }
    



}