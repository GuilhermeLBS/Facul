#include <iostream>

using namespace std;

int main ()
{

    int metros = 0;
    cout << "Escreva o valor em metros: " << endl;
    cin >> metros;

     double valorDecimetros = 10;
     double valorCentimetros = 100;
     double valorMilimetros = 1000;

    const double contaDecimetros = metros * valorDecimetros;
    const double contaCentimetros = metros * valorCentimetros;
    const double contaMilimetros = metros * valorMilimetros;


    cout << "O seu valor de metros em decimetros eh: " << contaDecimetros << endl;
    cout << "O seu valor de metros em centimetro eh: " << contaCentimetros << endl;
    cout << "O seu valor de metros em milimetros eh: " << contaMilimetros << endl;



}