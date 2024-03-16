#include <iostream>

using namespace std;

int main ()
{

    int quantidadeReais = 0;

    cout << "Escreva o numero em reais para converter." << endl;
    cin >>  quantidadeReais;

    const double valorDollar = 5.25;
    const double valorEuro = 5.63;

    double dollar = quantidadeReais / valorDollar;
    double euro = quantidadeReais / valorEuro;

    cout << "OK, " << quantidadeReais << " sera, " << dollar << endl;
    cout << "E " << quantidadeReais << " sera, " << euro << endl;






}