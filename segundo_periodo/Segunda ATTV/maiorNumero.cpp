#include <iostream>

using namespace std;

int main() 
{
    int num, max_num = 0, count = 0;

    while (count < 10) 
    {
        cout << "Digite um numero inteiro: ";
        cin >> num;

        if (num > max_num) {
            max_num = num;
        }
        count++;
    }

    cout << "O maior numero digitado foi: " << max_num << endl;
    
}

