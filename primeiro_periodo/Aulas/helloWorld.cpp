//Inserindo o biblioteca
#include <iostream> //biblioteca padão de entrada

using namespace std;

// add função principal
int main(int argc, char const *argv[])
{
    // cout<<"Hello World" << endl;
    // cout << "Ola Mundo" << endl;
    // cout << "Hello" \n "Engenharia" \n "de" \n "Software" << endl;

    //declarando variaveis
    int num1; 
    int num2;
    double num3;        //numero com ponto flutuante

    // cout << "informe o numero inteiro: ";
    // cin >> num1;

    // cout << "voce digitou : " << num1 << endl;

    // cout << "informe outro numero inteiro:";
    // cin >> num2;



    // cout << "informe um numero com virgula:";
    // cin >> num3;

    cout << "Digite dois numeros inteiros separados por espacos";
    cin >> num1 >> num2;
    cout << " voce digitou " << num1 << " e " << num2 << endl;

    cout << "informe um numero decimal: ";
    cin >> num3;

    cout << "O decimal eh: " << num3 << endl;


    return 0; 
}
