                                            #include <iostream>
                                                #include <string>
                                            #include <vector>


using namespace std;

int main ()
{

                                                    bool fazerLogin() ;
                                                                    
                                                                    string ra;

                                                            cout << "Informe o RA: ";
                                                            cin >> ra;


                                                            // Verifica se o RA é válido 

                                                            if (ra.size() != 8) {
                                                                cout << "RA inválido." << endl;
                                                                return false;
                                                            }

                                                            // Verifica se o RA está cadastrado no sistema

                                                            if (ra != "36381467") {
                                                                cout << "RA não cadastrado." << endl;
                                                                return false;
                                                            }
                                                            cout << "Login realizado com sucesso." << endl;
                                                            return true;
                                                            }





                                                            
struct Funcionario {
    string nome;
    string endereco;
    string cpf;
    string tipo;  // efetivo, temporário ou estagiário
double salarioBase;
int diasTrabalhados;
int horasExtras;
    // Adicione aqui outros campos específicos de cada tipo de funcionário, se necessário
};

void cadastrarFuncionario(vector<Funcionario>& funcionarios) {
    Funcionario f;
cout << "Informe o nome do funcionário: ";
    getline(cin, f.nome);
cout << "Informe o endereço do funcionário: ";
    getline(cin, f.endereco);
cout << "Informe o CPF do funcionário: ";
    getline(cin, f.cpf);
cout << "Informe o tipo do funcionário (efetivo, temporário ou estagiário): ";
    getline(cin, f.tipo);



    // Solicita informações específicas de acordo com o tipo de funcionário
if (f.tipo == "efetivo") {
    cout << "Informe o salário base do funcionário: ";
    cin >> f.salarioBase;
    cout << "Informe o número de dias trabalhados no mês: ";
    cin >> f.diasTrabalhados;
    // Adicione aqui outras informações específicas de um funcionário efetivo, se necessário
    }
else if (f.tipo == "temporário") {
        cout << "Informe o valor da hora do funcionário: ";
    double valorHora;
        cin >> valorHora;
        cout << "Informe o número de horas trabalhadas no mês: ";
    int horasTrabalhadas;
        cin >> horasTrabalhadas;
        f.salarioBase = valorHora * horasTrabalhadas;
    // Adicione aqui outras informações específicas de um funcionário temporário, se necessário
    }
else if (f.tipo == "estagiário") {
        cout << "Informe o valor da bolsa-auxílio do estagiário: ";
        cin >> f.salarioBase;
        cout << "Informe o número de horas extras trabalhadas no mês: ";
        cin >> f.horasExtras;
        // Adicione aqui outras informações específicas de um estagiário, se necessário
    }
else {
    cout << "Tipo de funcionário inválido." << endl;
    return;
    }

funcionarios.push_back(f);
    cout << "Funcionário cadastrado com sucesso." << endl;



}