#include <iostream>
using namespace std;

int main(){
	int num[5], soma;
	float media;
	
	for(int i = 0; i < 5; i++){
		cout << "Digite o " << i+1 << " numero: ";
		cin >> num[i];
		
		soma+= num[i];
	}
	media = soma/5;
	cout << "Soma: " << soma << endl;
	cout << "Media: " << media << endl;
	return 0;
}
