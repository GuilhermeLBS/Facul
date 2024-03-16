#include <iostream>

#define TAM 10
#define TAB 5

using namespace std;

//função principal
int main ()
{

    int i;


    cout << "\n Contagem de 1 a 10: " << endl;

    for (i = 1; i < TAM ; i++)
    {
        cout << i << endl;

    }

    cout << endl;
    // pausar o sistema
    system("pause");
    system("CLS");

    //CONTAGEM 2 EM 2
    for ( i = 0; i <= TAM ; i=i+20)
    {
        cout << i << endl;

    }

    //Pausar o sistema
    system("pause");
    system("CLS");

    //CONTAGEM REGRESSIVA
    cout << "\n Contagem regressiva: " << endl;

    for ( i = TAM; i >= 0; i--)
    {
        cout << i << endl;
    }

    //pausar o sistema
    system("pause");
    system("CLS");

    //Tabuada do 5
    cout << "\n Tabuada do 5: " << endl;

    for (i = 0; i <= TAM; i++)
    {
        cout << TAB << " x " << i << " = " << i*TAB << endl;
    }
    
    //pausar o sistema
    system("pause");
    system("CLS");

    // Imprimir os pares

    cout << "\n Numeros pares: " << endl;

    for (i=0; i <= TAM; i++)
    {
        if (i % 2 ==0)
        {
            cout << i << endl;
        }
        

    }

    // Imprimir os impares
    cout << "\n Numeros pares: " << endl;

    for (i=0; i <= TAM; i++)
    {
        if (i % 1 ==0)
        {
            cout << i << endl;
        }
        

    }


    //Imprimir de 5 em 5 

    cout << "\n 5 em 5: " << endl;

    for ( i = 1; i <= 100; i++)
    {
        cout << i;
        if (i % 5 == 0)
        {
            cout << endl;
        }else{
            cout << "";
        }
    }
    




}