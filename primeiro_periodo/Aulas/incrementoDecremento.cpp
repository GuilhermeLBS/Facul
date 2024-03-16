/*
    Operador de incremento ++ 
    Operador de decremento --


    prefixo ++num
    prefixo num++

*/


#include <iostream>

using namespace std;

int main () 

{

    int cont = 10;
    int result = 0;

// Exemplo 1 - Incremento simples
        cout << "Contando: " << cont << endl;

    cont = cont + 1;
    cout << "Contando: " << cont << endl;

    cont++;
    cout << "Contando: " << cont << endl;

    ++cont;
    cout << "Contando: " << cont << endl;


// Exemplo 2  - Pre incremento 

    result = ++cont;
    cout << " Contando: " << cont << endl;
    cout << " Resultado: " << result << endl;


// Exemplo 3 - Pre incremento 

    cont = 10;
    result = 0;

    cout << "Contando: " << cont << endl;
    result = ++cont + 10;
    cout << "Contando: " << cont << endl;
    cout << "Resultado: " << result << endl;

// Exemplo 4 - Pos incremento

    cont = 10;
    result = 0;


    cout << "Contando: " << cont << endl;
    result = cont++ + 10;
    cout << "Contando: " << cont << endl;
    cout << "Resultado: " << result << endl;

    



}