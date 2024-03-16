/*

            Operadores Lógicos

*/



#include <iostream>

using namespace std;

int main () 
{

    int num;
        const int maior = 20;
        const int menor = 10;

    cout << noboolalpha;

    // Determine se as entradas entao entre os doi inumero inteiros

    cout << "Informe o numero entre " << menor << " e " <<  maior << " : ";
    cin >> num;

    bool entreLimites = false;

    entreLimites = (num > menor) && (num < maior);

        cout << num << " esta entre " << menor << " e " << maior << " : " << entreLimites << endl;

            cout << " Informe um numero fora do limites " << menor << " e " << maior << " : ";
                cin >> num;
    
    bool foraLimites = false;

    foraLimites = (num < menor ) || (num > maior);
    cout << num << " esta fora de " << menor << " e " << maior << " : " << foraLimites << endl;



}