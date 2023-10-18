#include <iostream>
using namespace std;

int main(){
	const int size = 10;
	int nums[size], qtdPar=0, somaPar=0;
	float media;
	
	for(int i = 0; i < size; ++i){
		cout << "Digite o numero da " << i+1 << " posicao do vetor: ";
		cin >> nums[i];
		
		if(nums[i] % 2 == 0){
			++qtdPar;
			somaPar+= nums[i];
		}
	}
	if(qtdPar > 0){
		media = somaPar / qtdPar;
	} else{
		media = 0;
	}
	
	cout << "Quantidade de pares: " << qtdPar << endl;
	cout << "Media dos pares: " << media << endl;
	
	return 0;
}
