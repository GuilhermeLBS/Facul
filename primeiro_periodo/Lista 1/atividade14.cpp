

//              Media Anula Ponderada


#include <iostream>
using namespace std;

int main() {
  float n1, n2, n3, mediaAnual, notaRecuperacao, mediaFinal;

    cout << "Digite a primeira n  ota: ";
  cin >> n1;
    cout << "Digite a segunda nota: ";
  cin >> n2;
    cout << "Digite a terceira nota: ";
  cin >> n3;

  mediaAnual = (2 * n1 + 3 * n2 + 5 * n3) / 10;
  cout << "Media anual ponderada: " << mediaAnual << endl;

  if (mediaAnual >= 6) {
    cout << "Aprovado!" << endl;
  } else if (mediaAnual >= 4 && mediaAnual < 6) {
    cout << "Recuperacao!" << endl;
    cout << "Digite a nota de recuperacao: ";
    cin >> notaRecuperacao;
    mediaFinal = (mediaAnual + notaRecuperacao) / 2;

    if (mediaFinal >= 5) {
      cout << "Aprovado apos recuperacao" << endl;
    } else {
      cout << "Reprovado apos recuperacao" << endl;
    }
  } else {
    cout << "Reprovado!!!" << endl;
  }

  
}
