                                                            #include <iostream>
                                                            #include <string>


using namespace std;

    int main ()
{
        const double precoCarpetespequeno = 100;
        const double precoCarpetesgrande = 150;
        const double taxas = 0.06 ;
        const double orcamentosValidos = 30;

            cout << "Bem vindo ao servico de GuiGui do mal" << endl;
                cout << "Eai bora fazer um orcamento?" << endl;
                    cout << "Bom, nossos valores sao esses : ";
                        cout << "O carpete pequeno eh: " << precoCarpetespequeno << endl;
                            cout << "O carpete grande eh: " << precoCarpetesgrande << endl;
                                cout << "E nos cobramos uma taxa de " << taxas << endl;
                                    cout << "E nossos orcamentos sao validos em ate " << orcamentosValidos << endl;

                cout << "Bom, quantos carpetes voce vai querer limpar?" << endl;
            int numeroCarpetes = 0;
                cin >> numeroCarpetes;

                cout << "OK, esses carpetes quantos sao pequenos? " << endl;
            int numeroCarpetespequenos = 0;
                cin >> numeroCarpetespequenos;
            
                cout << "Certo, e quantos desses sao grandes? " << endl;
            int numeroCarpetesgrandes = 0;
                cin >> numeroCarpetesgrandes;

                double custo  = precoCarpetespequeno * numeroCarpetespequenos;

                        double custoDois = precoCarpetesgrande * numeroCarpetesgrandes;

                                double custoGeral = custo + custoDois;

            double taxa = custoGeral * taxas;

            cout << "==============================================" << endl;

            cout << "Bom, seu orcamento geral eh: " << endl; 
                cout << numeroCarpetespequenos << " Carpetes pequenos" << endl;
                    cout << numeroCarpetesgrandes << " Carpetes grandes" << endl;
                        cout << "Assim ficando " << custoGeral << " e com uma taxa de " << taxa << endl;

            cout << "Qualquer duvida estamos a disposicao." ;    
            


        





                                                                                                    return 0;
}