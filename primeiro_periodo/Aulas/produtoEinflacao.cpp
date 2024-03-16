#include <iostream>

using namespace std;

int main ()
{

    int valorProduto = 0;
    cout << "Coloque o valor do produto: " << endl;
    cin >> valorProduto;

     double valorInflacao = 0.1;
     double valorInflacao2 = 0.2;

    const double menor = valorProduto * valorInflacao;
    const double maior = valorProduto * valorInflacao2;

    if (valorProduto < 100) {
        cout << "O seu valor foi inflado, o valor da inflacao eh: " << menor << endl;

    }
    if (valorProduto >= 100) {
        cout << "O seu valor foi inflado a 20%, o valor da inflacao eh: " << maior << endl;
    }


    return 0;
    

}