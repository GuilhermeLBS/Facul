#include <iostream>
#include <string>
using namespace std;

int main() {
   int ra;
   string CPF;
   string nome;
   string endereco;
   char cargo;
   float data_admissao;
   float salario_base= 1302;
   float horas_extras;
   float salario_bruto;
   float desconto_inss;
   float desconto_ir;
   float desconto_previdencia;
   float salario_liquido;
   
   // Login do usuário
   cout << "Para acessar o sistema, por favor, digite o seu RA: ";
   cin >> ra;
   
   if (ra == 2022215715) {
      cout << "Bem-vindo Taci ao sistema de cadastro de funcionários!" << endl;
   } else {
      cout << "RA inválido. Acesso negado." << endl;
      return 0;
   }
   
   // Cadastro de novo funcionário
   cout << endl << "===== CADASTRO DE NOVO FUNCIONÁRIO =====" << endl;
   cout << "Digite o nome do funcionário: ";
   getline(cin.ignore(), nome);
   cout << "Digite o endereço: ";
   getline(cin.ignore(), endereco);
   cout << "Digite o CPF: ";
   getline(cin.ignore(), CPF);
   cout << "Digite o cargo ('E' efetivo, 'T' temporario ou 'G' estagio): ";
   cin >> cargo;

   
   switch (cargo)
{
case 'e':
case 'E':
 cout << " Efetivo " << endl;
break;

case 't':
case 'T':
cout  << " temporário " << endl;
break;

case 'g':
case 'G':
cout  << " Estagio " << endl;
break;

    if (cargo == 'E') {
    cout << " Efetivo" << endl;
    } else if (cargo == 'T') {
    cout << " Temporario " << endl;
    } else if (cargo == 'G') {
    cout << " Estagio " << endl;
    }else {
    cout << " tipo de pessoa invalido" << endl;
    }

default:
cout << "tipo de pessoa invalido" << endl;
break;
 }  

cout << "Digite a data de admissão: ";
   cin >> data_admissao;
   cout << "Digite a quantidade de horas extras trabalhadas: ";
   cin >> horas_extras;
   

   // Cálculo do salário bruto
   salario_bruto = salario_base + (horas_extras * 1.50);
   
   // Cálculo dos descontos
   desconto_inss = salario_bruto * 0.12;
   
   if(salario_bruto <= 1302) {
      desconto_ir = 0;
   } else if((salario_bruto>1302)&&(salario_bruto <= 3500)) {
      desconto_ir = salario_bruto * 0.15;
   } else {
      desconto_ir = salario_bruto * 0.27;
   }
   
   desconto_previdencia = salario_bruto * 0.12;
   
   // Cálculo do salário líquido
   salario_liquido = salario_bruto - desconto_inss - desconto_ir - desconto_previdencia;
   
   // Saída de dados
   cout << endl << "===== SALÁRIO DO FUNCIONÁRIO =====" << endl;
   cout << "Nome: " << nome << endl;
   cout << "Salário base: R$" << salario_base << endl;
   cout << "Horas extras trabalhadas: " << horas_extras << endl;
   cout << "Salário bruto: R$" << salario_bruto << endl;
   cout << "Desconto INSS: R$" << desconto_inss << endl;
   cout << "Desconto Imposto de Renda: R$" << desconto_ir << endl;
   cout << "Desconto Previdência: R$" << desconto_previdencia << endl;
   cout << "Salário líquido: R$" << salario_liquido << endl;
   
   return 0;
   }