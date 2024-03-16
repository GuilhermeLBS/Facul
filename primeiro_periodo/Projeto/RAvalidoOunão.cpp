                                            #include <iostream>
                                                #include <string>
                                            #include <vector>

using namespace std;

int main ()
{

// vari pro ra que não vamos usar
string ra;
// --------------------------------

if (ra.size() != 8) {
                cout << "RA inválido." << endl;
                return false;
            }

            // Verifica se o RA está cadastrado no sistema

            if (ra != "36381467") {
                cout << "RA não cadastrado." << endl;
                return false;
            }
            cout << "Login realizado com sucesso." << endl;
            return true;

}
