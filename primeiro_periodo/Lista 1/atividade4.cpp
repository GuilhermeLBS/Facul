

//                     Atividade intervalo

#include <iostream>

using namespace std;

int main () 
{

    int num;
   
    cout << "Ola, escrva um numero por favor:" << endl;
                      cin >> num;
    
    if ((num > 5) && (num < 20))
    {
        cout << num << " esta entre o internvalo! " << endl;
    }else {
        cout << num << " nao esta entre o intervalo! " << endl;
    }
    


}