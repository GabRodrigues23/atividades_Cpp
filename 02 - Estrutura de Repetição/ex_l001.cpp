#include <iostream>
using namespace std;

int main(){
	int num, soma;
	for(int i = 0; i < 5; i++){
		cout << "Digite um numero inteiro: ";
		cin >> num;
		
		if(num >= 0){
			soma+= num;
		} else{
			soma = soma;
		}
	}
	cout << "A soma dos numeros e: " << soma << endl;
	return 0;
}
