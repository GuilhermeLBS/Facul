#include <iostream>
                                                #include <string>
                                            #include <vector>

using namespace std;

int main ()
{

    struct Funcionario {
    string nome;
    string endereco;
    string cpf;
    string tipo;  // efetivo, temporário ou estagiário
    double salarioBase;
    int diasTrabalhados;
    int horasExtras;
    };
    // Adicione aqui outros campos específicos de cada tipo de funcionário, se necessário

    void cadastrarFuncionario(vector<Funcionario>& funcionarios); {
    Funcionario f;
    cout << "Informe o nome do funcionário: ";
    getline(cin, f.nome);
    cout << "Informe o endereço do funcionário: ";
    getline(cin, f.endereco);
    cout << "Informe o CPF do funcionário: ";
    getline(cin, f.cpf);
    cout << "Informe o tipo do funcionário (efetivo, temporário ou estagiário): ";
    getline(cin, f.tipo);
    }
    
    

}