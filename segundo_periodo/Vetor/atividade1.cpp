#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    const int tamanhoVetor = 20;
    int vetor[tamanhoVetor];


    cout << "Digite os " << tamanhoVetor << " valores inteiros separados por espaço: ";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cin >> vetor[i];
    }


    int maior = numeric_limits<int>::min();
    int menor = numeric_limits<int>::max();
    int posicaoMaior = 0;
    int posicaoMenor = 0;


    for (int i = 0; i < tamanhoVetor; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }


    cout << "O maior valor informado foi " << maior << " na posição " << posicaoMaior << endl;
    cout << "O menor valor informado foi " << menor << " na posição " << posicaoMenor << endl;


}
