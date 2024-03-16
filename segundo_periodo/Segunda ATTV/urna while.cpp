#include <iostream>

using namespace std;

int main() 
{

    int voto, votosAntonio = 0, votosSimao = 0;

    cout << "Bem-vindo(a) a urna eletronica!" << endl << endl;
    cout << "As opcoes sao:\n";
    cout << "1. Candidato Antonio\n";
    cout << "2. Candidato Simao\n";
    cout << "3. Fim da votacao" << endl << endl;

    do {
        cout << "Digite o seu voto: ";
        cin >> voto;

        switch (voto) {
            case 1:
                votosAntonio++;
                cout << "Voto registrado para o Candidato Antonio!" << endl << endl;
                break;
            case 2:
                votosSimao++;
                cout << "Voto registrado para o Candidato Simao!" << endl << endl;
                break;
            case 3:
                cout << "Votacao encerrada!" << endl << endl;
                break;
            default:
                cout << "Opcao invalida! Digite novamente." << endl << endl;
        }

    } while (voto != 3);

    cout << "RESULTADO FINAL\n";
    cout << "Candidato Antonio: " << votosAntonio << " voto(s)\n";
    cout << "Candidato Simao: " << votosSimao << " voto(s)\n";


}
