#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Digite seu numero: ";
	cin >> numero;
	
	if(numero < 0){
		cout << "Seu numero e negativo" << endl;
	} else if(numero > 0){
		cout << "Seu numero e positivo" << endl;
	} else{
		cout << "Seu numero e zero" << endl;
	}
	return 0;
}
