#include <iostream>
using namespace std;

int main() {
    int numero{10};    
   
    //-- Multiplica o número por 2 e atribui o resultado de volta ao número
    numero = numero * 2;
    cout << numero << endl;

    //-- Adiciona 9 ao número e atribui o resultado de volta ao número
    numero = numero + 9;
    cout << numero << endl;
    //-- Subtrair 3 do número e atribuir o resultado de volta ao número
    numero = numero - 3;
    cout << numero << endl;
    //-- Divide o número por 2 e atribui o resultado de volta ao número
    numero = numero / 2;
    cout << numero << endl;
    //-- Subtrair original_number de number e atribuir o resultado de volta a number
    numero = numero - 10;
    cout << numero << endl;
    //-- Pegue o módulo 3 (%) do número e atribua-o de volta ao número
    numero = numero % 3;
    cout << numero << endl;
    return 0;
}
