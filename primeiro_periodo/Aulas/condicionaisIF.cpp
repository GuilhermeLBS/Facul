// condicional if 

#include <iostream>

using namespace std;

int main (){

    int num;

    const int min = 10;
    const int max = 100;


    cout << "Informe um numero entre " << min << " e "  << max << " : " << endl;
    cin >> num;

            if (num >= min ) {

                cout << "\n =============== if 1 =================" << endl;
                cout << num << " eh maior ou igual " << min << endl;

                int dif (num - min);
                cout << num << " eh " << dif << " maior que " << min << endl;


            }

            if (num <= max ) {

                cout << "\n =============== if 2 =================" << endl;
                cout << num << " eh menor ou igual " << max << endl;

                int dif (max  - num);
                cout << num << " eh " << dif << " menor que " << max << endl;


            }
            if (num <= max && num >= min ) {

                cout << "\n =============== if 3 =================" << endl;
                    cout << num << " esta na faixa " << endl;
                        cout << "isso signfica que if 1 e 2 vao aparecer no display " << endl;


            }
            if ((num == max) || (num == min) ) {

                cout << "\n =============== if 4 =================" << endl;
                    cout << num << " esta no limite " << endl;
                        cout << "isso signfica que if 1 e 2 vao aparecer no display " << endl;


            }







}