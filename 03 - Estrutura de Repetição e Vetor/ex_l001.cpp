#include <iostream>
using namespace std;

int main(){
	const int size = 5;
	int num[size], soma;
	float media;

	for(int i = 0; i < size; ++i){
		cout << "Digite o numero da " << i+1 << " posicao do vetor: ";
		cin >> num[i];
	
		soma+= num[i];
	}

	media = soma / size;
	cout << "Soma: " << soma << endl;
	cout << "Media: " << media << endl;


	return 0;
}
