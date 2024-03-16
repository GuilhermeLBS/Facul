#include <iostream>

using namespace std;

int main() 
{
  
  int quantidade, idade, soma;
  int i;
  double media;

  
  cout << "Quantas idades você deseja fornecer? ";
  cin >> quantidade;


  for (i = 0; i < quantidade; i++) {
    
    cout << "Digite a " << i+1 << "ª idade: ";
    cin >> idade;
    
    soma += idade;
  }

  media = (double) soma / quantidade;

  cout << "A média das idades fornecidas é: " << media << endl;

  
}
