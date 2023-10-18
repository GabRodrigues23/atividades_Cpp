#include <iostream>
using namespace std;

const int size = 5;

int somar(int a, int &resSum){
	resSum+= a;
	return resSum;
}

int subtrair(int a, int &resSub){
    if (resSub == 0) {
        resSub = a;
    } else {
        resSub -= a;
    }
    return resSub;
}

int multiplicar(int a, int &resMult){
	resMult*= a;
	return resMult;
}

int main(){
	int soma = 0, subtracao = 0, mult = 1;
	int vetor[size];
	
	for(int i = 0; i < size; i++){
		cout << "Valor " << i+1 << ": ";
		cin >> vetor[i];
		
		soma = somar(vetor[i],soma);
		subtracao = subtrair(vetor[i],subtracao);
		mult = multiplicar(vetor[i],mult);
	}

	cout << "O valor da soma e: " << soma << endl;
	cout << "O valor da subtracao e: " << subtracao << endl;
	cout << "O valor da multiplicacao e: " << mult;
	
	return 0;
}
