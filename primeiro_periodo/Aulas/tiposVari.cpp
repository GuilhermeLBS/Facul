#include <iostream>
#include <string>



using namespace std;


int main() 
{
    //caracter
        char letraInicial = '   G';

    cout << "A letra inicial do nome eh " << letraInicial << endl;

    //inteiros

        int numerosBairrros (65); 
        long habGuarapuava(182645);
        cout << "existem cerca de " << numerosBairrros << " bairros para " << habGuarapuava << " habitantes" << endl;

        long long pessoasTerra (788800000);
        cout << "Existem cerca de " << pessoasTerra << " pessoas na terra " << endl;

    //Floating

        float pagamentoCarro = 401.23;
        cout << "O boleto do meu carro eh: " << pagamentoCarro << endl;

        float pi = 3.14159;
        cout << "o pi eh " << pi << endl;

        long double numeroGrande = 2.7e120;
        cout <<  numeroGrande << "O numero grande eh um numero grande" << endl;

        //booleana

        bool gameOver (false);
        cout << "o valor do game Over eh " << gameOver << endl;




    return 0;
}