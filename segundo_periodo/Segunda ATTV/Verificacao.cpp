#include <iostream>

using namespace std;

int main () 
{

    int num;

    cout << "Digite um numero inteiro, que falaremos se esta entre 23 e 47." << endl;
    cin >> num;

    while (num >= 23 && num <= 47 ) 
    {
        cout << "O numero " << num << " esta entre os valores 23 e 47." << endl;
        cout << "Digite um numero inteiro, que falaremos se esta entre 23 e 47." << endl;
        cin >> num;
    }

    cout << "O numero " << num << " nao esta entre os valores 23 e 47.";
    

}