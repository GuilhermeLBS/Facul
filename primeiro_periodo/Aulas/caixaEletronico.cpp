#include <iostream>
using namespace std;

int main() {
    
    int reais;
    int centavos;

    cout << "Digite o valor em reais: ";
    cin >> reais;
    cout << "Digite o valor em centavos: ";
    cin >> centavos;

    
    int notas100 = reais / 100;
    reais %= 100;
    int notas50 = reais / 50;
    reais %= 50;
    int notas20 = reais / 20;
    reais %= 20;
    int notas10 = reais / 10;
    reais %= 10;
    int notas5 = reais / 5;
    reais %= 5;
    int notas2 = reais / 2;
    reais %= 2;

    int moeda1R = centavos / 100;
    centavos %= 100;
    int moeda50 = centavos / 50;
    centavos %= 50;
    int moeda25 = centavos / 25;
    centavos %= 25;
    int moeda10 = centavos / 10;
    centavos %= 10;
    int moeda5 = centavos / 5;
    centavos %= 5;
    int moeda1 = centavos / 1;
    centavos %= 1;



    
    cout << "Notas de 100: " << notas100 << endl;
    cout << "Notas de 50: " << notas50 << endl;
    cout << "Notas de 20: " << notas20 << endl;
    cout << "Notas de 10: " << notas10 << endl;
    cout << "Notas de 5: " << notas5 << endl;
    cout << "Notas de 2: " << notas2 << endl;
    cout << "Moedas de 1R: " << moeda1R << endl;
    cout << "Moedas de 50: " << moeda50 << endl;
    cout << "Moedas de 25: " << moeda25 << endl;
    cout << "Moedas de 10: " << moeda10 << endl;
    cout << "Moedas de 5: " << moeda5 << endl;
    cout << "Moedas de 1: " << moeda1 << endl;
    

    return 0;
}