#include <iostream>
using namespace std;

int main ()
{

    int maior; 
    int num; 
    int cont = 1;

    while (cont <= 10)
    {
        cout << "Digite o numero: ";
        cin >> num;

        cont++;
        if (num > maior)
        {
            maior = num;
        }
        
    }
    
    cout << "Maior numero eh: " << maior;
}