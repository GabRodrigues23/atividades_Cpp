#include <iostream>
using namespace std;

const int size = 5;
int res, soma;

int somar(int a){
	res+= a;
	return res;
}

int main(){
	int vetor[size];
	for(int i = 0; i < size; i++){
		cout << "Valor " << i+1 << ": ";
		cin >> vetor[i];
		
		soma = somar(vetor[i]);
	}

	cout << "O valor da soma e: " << soma;
	
	return 0;
}
