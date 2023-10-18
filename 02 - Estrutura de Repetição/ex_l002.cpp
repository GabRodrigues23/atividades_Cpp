#include <iostream>
using namespace std;

int main(){
	int num, mult;
	cout << "Digite um numero: ";
	cin >> num;
	
	for(int i = 0; i < 10; i++){
		mult = num * (i+1);
		cout << num << " x " << i+1 << " = " << mult << endl;
	}
	return 0;
}
