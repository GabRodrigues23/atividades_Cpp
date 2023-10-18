#include <iostream>
using namespace std;

int main(){
	float num, fat;
	cout << "Digite um numero: ";
	cin >> num;
	
	fat = num;
	for(int i = 1; i < num; i++){
		fat = (fat * i);
	}
	cout << "O fatorial de " << num << " e: " << fat << endl;
	return 0;
}
