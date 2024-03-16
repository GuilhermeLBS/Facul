#include <iostream>

using namespace std;

int main() 
{

    int num;


    cout << "Ola, escreva um numero de 1 a 12 que retornaremos o mes correspondente." << endl;
    cin >> num;

    switch (num) {
    case 1:
        cout << "O numero 1 se trata do mes Janeiro."<< endl;
        break;
    case 2:
        cout << "O numero 2 se trata do mes Fevereiro."<< endl;
        break;
    case 3:
        cout << "O numero 3 se trata do mes Marco."<< endl;
        break;
    case 4:
        cout << "O numero 4 se trata do mes Abril."<< endl;
        break;
    case 5:
        cout << "O numero 5 se trata do mes Maio."<< endl;
        break;
    case 6:
        cout << "O numero 6 se trata do mes Junho."<< endl;
        break;
    case 7:
        cout << "O numero 7 se trata do mes Julho."<< endl;
        break;
    case 8:
        cout << "O numero 8 se trata do mes Agosto."<< endl;
        break;
    case 9:
        cout << "O numero 9 se trata do mes Setembro."<< endl;
        break;
    case 10:
        cout << "O numero 10 se trata do mes Outubro."<< endl;
        break;
    case 11:
        cout << "O numero 11 se trata do mes Novembro."<< endl;
        break;
    case 12:
        cout << "O numero 12 se trata do mes Dezembro." << endl;
        break;

    default:
        cout << "Mes inexistente.";
        break;
    }








}