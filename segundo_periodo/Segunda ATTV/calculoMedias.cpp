#include <iostream>

using namespace std;

int main() 
{
    float nota1, nota2, nota3, nota4, media;
    
    do {

        cout << "Digite as quatro notas do aluno, separadas por um espaço: ";
        cin >> nota1 >> nota2 >> nota3 >> nota4;
        
        media = (nota1 * 1 + nota2 * 3 + nota3 * 4 + nota4 * 5) / (1+3+4+5);
        cout << "A media anual ponderada do aluno eh: " << media << endl;
        
        if (media >= 70 && media <= 100) {

            cout << "O aluno foi aprovado." << endl;

        } else if (media >= 40 && media < 70) {

            cout << "O aluno esta em recuperacao." << endl;

        } else if (media < 40) {

            cout << "O aluno foi reprovado." << endl;

        }
        
        cout << "Deseja calcular uma nova media? Digite S para sim ou N para nao: ";
        char resposta;
        cin >> resposta;
        
        if (resposta != 'S' && resposta != 's') {
            break;
        }
    } while (true);
    

}
