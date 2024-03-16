#include <iostream>
using namespace std;

int main () 
{

    int idade;
    int permissaoPais;
    int numeroValido;
    int acidente;


                cout << "Ola, bem vindo a candidatura para motorista. "<< endl;
                cout << "Bom, primeiramente precisamos saber alguns dados sobre voce." << endl;
    
    cout << "Qual sua idade? " << endl;
    cin >> idade;
                    if (idade >= 18) {
                        idade = true;
                    }else {
                        cout << "OK, prescisamos saber se voce tem permisao de seu pais? " << endl;
                        cout << "0 - para nao \n1 - sim" << endl;
                        cin >> permissaoPais;
                    }
                    if (permissaoPais = 0) {
                        permissaoPais = false;
                    }else {
                        permissaoPais = true;
                    }
    cout << "Voce tem o numero de seguranca social valido?\n responda com: \n 0 - nao \n 1 - sim " << endl;
    cin >> numeroValido;
                    if (numeroValido = 0 ) {
                        numeroValido = false;
                    }else {
                        numeroValido = true;
                    }
    cout << "E por final, voce ja sofreu algum acidente?\n responda com: \n 0 - nao \n 1 - sim "  << endl;
    cin >> acidente;
                    if (acidente = 0 ) {
                        acidente = false;
                    }else {
                        acidente = true;
                    }
    cout << "Bom voce " << endl;

                    if (idade = true || (idade = false && (permissaoPais= true) ) && (numeroValido = true) &&  (acidente = false)) {
                        cout << "Sim, voce pode dirigir." << endl;
                    }else {
                        cout << "Nao, voce nao pode dirigir" << endl;
                    }
    





}