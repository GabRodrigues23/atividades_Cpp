#include <iostream>
using namespace std;

int main(){
	float salario, imposto;
	cout << "Digite o valor do seu salario anual: ";
	cin >> salario;
	
	if(salario <= 20000){
		cout << "Voce esta isento do imposto de renda!" << endl;
	} else if(salario > 20000 && salario <= 50000){
		cout << "10% de imposto de renda!" << endl;
		imposto = salario * 0.10;
		cout << "Valor do imposto: R$" << imposto << endl;
	} else{
		cout << "20% de imposto de renda!" << endl;
		imposto = salario * 0.20;
		cout << "Valor do imposto: R$" << imposto << endl;
	}
	return 0;
}
