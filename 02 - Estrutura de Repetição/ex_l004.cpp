#include <iostream>
using namespace std;

int main(){
	int n1, n2, pares;
	
	cout << "Digite o 1° numero: ";
	cin >> n1;
	cout << "Digite o 2° numero: ";
	cin >> n2;
	
	for(int i = n1+1; i < n2; i++){
		if(i % 2 == 0){
			cout << "Par: " << i << endl;
		}
	}
	return 0;
}
