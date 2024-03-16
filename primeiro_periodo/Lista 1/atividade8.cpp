

//              Calculos Matematicos



#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double num1, num2;

  cout << "Digite o primeiro número: ";
  cin >> num1;

  cout << "Digite o segundo número: ";
  cin >> num2;

  double soma = num1 + num2;
  double produto = num1 * pow(num2, 2);
  double quadrado_num1 = pow(num1, 2);
  double raiz_quadrada = sqrt(pow(num1, 2) + pow(num2, 2));
  double modulo_num1 = abs(num1);

  cout << "A soma dos números é: " << soma << endl;
  cout << "O produto do primeiro número pelo quadrado do segundo é: " << produto << endl;
  cout << "O quadrado do primeiro número é: " << quadrado_num1 << endl;
  cout << "A raiz quadrada da soma dos quadrados é: " << raiz_quadrada << endl;
  cout << "O módulo do primeiro número é: " << modulo_num1 << endl;

  
}
