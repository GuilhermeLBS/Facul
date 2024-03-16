#include <iostream>

using namespace std;


int main (){

    int nota;
    cout << "Informe a sua nota do exame (0-100)" << endl;
    cin >> nota;

    char letraNota;

        if (nota >= 0 && nota <= 100)
        {
            letraNota = 'A';
        }else if (nota >= 80) {
            letraNota = 'B';
        }else if (nota >= 70){
            letraNota = 'C';
        }else if (nota >= 60) {
            letraNota = 'D';
        }else {
            letraNota = 'F';
        

        cout << "Seu conceito eh: " << letraNota << endl;

                if (letraNota == 'F') {
                    cout << "Desculpa, voce nao foi aprovado"<< endl;
                }else{
                    cout << "Parabens, voce foi aprovado." << endl;
                
                }else{
                cout <<" Desculpa, " << nota << "nao esta na faixa." << endl;
            }
            

}