

//                          Valores Multiplos

#include <iostream>
using namespace std;

int main() {
  int a, b;

    cout << "Digite o valor de a: ";
  cin >> a;

    cout << "Digite o valor de b: ";
  cin >> b;

  if (a % b == 0 || b % a == 0) {
    cout << "Sao multiplos" << endl;
  } else {
    cout << "Nao sao multiplos" << endl;
  }

}
