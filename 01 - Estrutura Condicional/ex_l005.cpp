#include <string.h>
#include <iostream>
using namespace std;

int main(){
	char letra;
	cout << "Digite uma letra (Em Minusculo): ";
	cin >> letra;
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		cout << "A letra '"<< letra << "' e uma vogal" << endl;
	} else{
		cout << "A letra '"<< letra << "' e uma consoante" << endl;
	}
}
