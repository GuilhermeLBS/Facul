

//                              Dia da Semana



#include <iostream>

using namespace std;

int main() 
{

    int num;


    cout << "Ola, escreva um numero de 1 a 7 que retornaremos o dia correspondente." << endl;
    cin >> num;

    switch (num) {
    case 1:
        cout << "O numero 1 se trata do dia de segunda."<< endl;
        break;
    case 2:
        cout << "O numero 2 se trata do dia de terça."<< endl;
        break;
    case 3:
        cout << "O numero 3 se trata do dia de quarta."<< endl;
        break;
    case 4:
        cout << "O numero 4 se trata do dia de quinta."<< endl;
        break;
    case 5:
        cout << "O numero 5 se trata do dia de sexta."<< endl;
        break;
    case 6:
        cout << "O numero 6 se trata do dia de sabado."<< endl;
        break;
    case 7:
        cout << "O numero 7 se trata do dia de domingo."<< endl;
        break;
    }


    }