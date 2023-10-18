#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Digite um numero inteiro N: ";
	cin >> n;
	
	int i = 1;
	int cont = 0;
	
	while(i <= n){
		if(i % 2 == 0){
			cont++;
		}
		++i;
	}
	cout << "Quantidade de numeros pares: " << cont << endl;
	
	return 0;
}
