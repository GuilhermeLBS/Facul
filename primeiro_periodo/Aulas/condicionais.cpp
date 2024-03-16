#include <iostream>

using namespace std;

int main(){

    char letraGrande{};
    cout << "Informe a letra do conceito que voce espera obter no exame" << endl;
    cin >> letraGrande;

    switch (letraGrande) 
    {
    case 'a':
    case 'A':
        cout <<"Voce quer tirar acima de 90, ESTUDE MUITOOOOO." << endl;
        break;
    case 'b':
    case 'B':
        cout <<"Voce quer tirar entre 80 e 90, ESTUDE!!!" << endl;
        break;
    case 'c':
    case 'C':
        cout <<"Voce quer tirar entre 70 e 90, Mediano." << endl;
        break;
    case 'd':
    case 'D':
        cout << "Hmmmmmmm, voce vai ficar abaixo da media entre 60 e 69" << endl;
        break;
    case 'f':
    case 'F':
        //cout << "xxxxxxxxxxxxxXxxxxxxxxxx" << endl;
        {
            char confirma {};
            cout << "Voce tem certeza? (s/n)";
            cin >> confirma;

            if ((confirma == 'S') || (confirma == 's'))
                cout << "OK, acho que voce nao quer estudar...";
            else if ((confirma== 'N')||(confirma == 'n'))
                cout << "Boaaa, bora estudar";
            else
                cout << "Escolha incorreta.";
            break;
        }
        break;
    default:
        cout << "Sorry, valor nao eh valido" << endl;
        break;
    }
    
}