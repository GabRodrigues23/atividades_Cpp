#include <iostream>
using namespace std;

int main(){
	const int size = 6;
	int nums[size], menor = 0, maior = 0, count = 0;
	
	
	for(int i = 0; i < size; ++i){
		cout << "Digite o numero da " << i+1 << " posicao do vetor: ";
		cin >> nums[i];
		
		if(count == 0 || nums[i] < menor){
			menor = nums[i];
			++count;
		}
		if(nums[i] > maior){
			maior = nums[i];
			++count;
		}
	}
	
	cout << "Menor: " << menor << endl;
	cout << "Maior: " << maior << endl;

	return 0;
}
