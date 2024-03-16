                                            #include <iostream>
                                                #include <string>
                                            #include <vector>


using namespace std;

int main ()
{

    bool fazerLogin() ;
                    
                    string ra;

            cout << "Informe o RA: ";
            cin >> ra;

        // Verifica se o RA é válido 

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