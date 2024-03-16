

//                  Atividade Tabuada


#include <iostream>

using namespace std;

int main()
{

    int linha;
    int coluna;

    for (linha = 1; linha <= 9; linha ++)
        { 
        cout << "\n";
        cout << "Tabuada do: " << linha << "\n";
        cout << "\n";      
        for(coluna = 1; coluna <= 10; coluna ++)
            {
            cout << linha << " * " << coluna << " = " << linha * coluna << "\n";
            }
        }

    
    
}
