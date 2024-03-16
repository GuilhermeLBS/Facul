#include <iostream>
#include <string>


using namespace std;

    int main ()
    {



        cout << "Ola, Bem vindo ao nosso servico!! " << endl;
        cout << "Esse é o serviço do GuiGui, então cola aqui pra fazer um orçamento!!" << endl;

    cout << "Quantos quartos voce gostaria de da um grau? " << endl;

        int numeroQuarto (0);
        cin >> numeroQuarto;

        const double precoPorquarto = 150 ;
        const double precoTaxas = 0.06 ;
        const int validadeOrcamento = 30 ; //dias

            double custo  =  (precoPorquarto * numeroQuarto); 


    cout<< "\n Orcamento de servico de grau." << endl;
    cout<< "Numero de quartos: " << numeroQuarto << endl;
    cout<< "preco por quarto R$ " << precoPorquarto << endl;
    cout<< "Custos: R$ " <<custo << endl;
    cout<< "Taxas: R$ " << custo * precoTaxas << endl;
    cout<<"==============================================" << endl;

    cout<< "Total do orcamento: R$ " << (custo)+(custo * precoTaxas) << endl;

    cout<< "orcamento valido por " << validadeOrcamento << " dias " << endl;
    cout<< endl;






    return 0;
}