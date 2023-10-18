#include <iostream>
using namespace std;

const int size = 5;

int maior(int num, int &numMaior){
    if(num > numMaior) {
        numMaior = num;
    }
    return numMaior;
}


int main(){
	int numMaior = 0;
	int vetor[size];
	
	for(int i = 0; i < size; i++){
		cout << "Valor " << i+1 << ": ";
		cin >> vetor[i];
	
		numMaior = maior(vetor[i], numMaior);
	}
	
	cout << "O maior numero do vetor e: " << numMaior;
	
	return 0;
}
