#include <iostream>
using namespace std;

int main(){
	float nota;
	cout << "Digite sua nota: ";
	cin >> nota;
	
	if(nota >= 6 && nota <= 10){
		cout << "Voce foi aprovado!" << endl;
	} else if(nota < 6 && nota >= 0){
		cout << "Voce for reprovado!" << endl;
	} else{
		cout << "Numero invalido!" << endl;
	}
	return 0;
}
