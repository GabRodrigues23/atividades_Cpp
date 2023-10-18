#include <iostream>
using namespace std;

bool ehPar(int numero){
	return numero % 2 == 0;
}

int main(){
	int numero = 7;
	
	if(ehPar(numero)){
		cout << numero << " e um numero par." << endl;
	} else{
		cout << numero << " nao e um numero par." << endl;
	}
	
	return 0;
}
