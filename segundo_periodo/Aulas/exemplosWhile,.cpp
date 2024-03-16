#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Digite um numero inteiro menor que 100" << endl;
    cin >> num;

    while (num >= 100)
    {
        cout << "numero invalido" << endl;
        cout << "digite um numero inteiro menor que 100." ;
        cin >> num;
        
    }
    
    //system ("pause");
    //system ("CLS");


    // verificador de intervalo 10 e 20

    num = 0;

    cout << "digite um numero interio entre 10 e 20";
    cin >> num;

    while (num <= 10 || num >= 20)
    {
        cout << "Numero invalido" << endl;
        cout << "Digite um numero entre 10 e 20: ";
        cin >> num;


    }
    
    cout << "Numero informado corretamente" << endl;


    // verificador de intervalo utilizando variavel booleana
    num = 0;

    bool fim {false};
    while (!fim)
    {
        cout << "insira um numero entre 1 e 5 ";
        cin >> num;
        if (num < 1 || num > 5)
        {
            cout << "numero informado corretamente. " << endl;
            fim = true;
        }
    }
    
    //system ("CLS");

    //contagem regressiva usando while
    num = 0;
    cout << "Digite um numero positivo inteiro e inicie a contagem regressiva. " << endl;
    cin >> num;

    while (num > 0)
    {
        cout << num << endl;
        num = num - 1;

    }

    cout << "decolar" << endl;

    // verificação de RA

    int RA;
    int RAcorreto{20236969};
    bool verificacao = false;

    do
    {
        cout << "Digite seu RA para entrar: ";
        cin >> RA;

        if (RA == RAcorreto)
        {
            verificacao = true;
        }else
        {
            cout << "RA incorreto, tente novamente. " << endl;
        }
        
        
    } while (!verificacao);

    cout << "Bem vindo ao sistema de cadastro " << endl;
    
    
    

}