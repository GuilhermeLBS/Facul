

//              Inflação de Preco


#include <iostream>

using namespace std;

int main() {
    float preco, novo_preco;

    cout << "Digite o preco do produto: ";
    cin >> preco;

    if (preco < 100) {
        novo_preco = preco * 1.1; // inflaciona em 10%
    } else {
        novo_preco = preco * 1.2; // inflaciona em 20%
    }

    cout << "O novo preco do produto eh: " << novo_preco << endl;

    
}
