


//                  Atividade exibir mensagens de acordo com um numero inteiro


#include <iostream>

using namespace std;

int main ()
{

int numero;

cout << "digite um numero inteiro: " << endl;
cin >> numero;

if (numero < 0 )
{
    cout << "Numero negativo" << endl;
} else if (numero == 0) {
    cout << "Zero" << endl;
} else {
    cout << "Numero positivo" << endl;
}


    
}