/*
        Operadores Relacionais
            (;

*/

#include <iostream>

using namespace std;

int main () 
{

    int num1, num2;

    cout << boolalpha;

    // cout << " Informe dois numero inteiros separados por espaco: " << endl;
    //     cin >> num1 >> num2;
    
    // cout << num1 << " < " << num2 << ":" << (num1<num2) << endl;
    // cout << num1 << " >= " << num2 << ":" << (num1>=num2) << endl;
    // cout << num1 << " > " << num2 << ":" << (num1>num2) << endl;
    // cout << num1 << " =< " << num2 << ":" << (num1 <= num2) << endl;
    
    const int maior = 20; 
    const int menor = 10;

        cout << "\n Informe um valor maior que " << maior << endl;
        cin >> num1;
        cout << num1 << " > " << maior << " eh " << (num1>maior) << endl;

        cout << "\n Informe um valor menor ou igual que " << menor << " : " << endl;
        cin >> num2;
        cout << num2 << " <= " << menor << " eh " << (num2 <= menor) << endl;





}

