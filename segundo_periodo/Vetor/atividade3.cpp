#include <iostream>
using namespace std;

int main() 

{
    
const int tamanhoVetor = 10;

    int vetor[tamanhoVetor];
    int valorReferencia;

    cout << "Digite 10 números inteiros:" << endl;

    for (int i = 0; i < tamanhoVetor; i++) {
        cin >> vetor[i];
    }


    cout << "Digite um valor de referência inteiro: ";
    cin >> valorReferencia;


    cout << "Números maiores que " << valorReferencia << ": ";

    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] > valorReferencia) {
            cout << vetor[i] << " ";
        }
    }
    cout << endl;


    int countMenores = 0;

    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] < valorReferencia) {
            countMenores++;
        }
    }
    cout << "Quantidade de números menores que " << valorReferencia << ": " << countMenores << endl;


    int countOcorrencias = 0;
    
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == valorReferencia) {
            countOcorrencias++;
        }
    }
    cout << "Quantidade de vezes que " << valorReferencia << " aparece no vetor: " << countOcorrencias << endl;


}
