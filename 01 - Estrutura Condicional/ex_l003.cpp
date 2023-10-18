#include <iostream>
using namespace std;

int main(){
	int l1, l2, l3;
	cout << "Digite o 1° lado: ";
	cin >> l1;
	cout << "Digite o 2° lado: ";
	cin >> l2;
	cout << "Digite o 3° lado: ";
	cin >> l3;

	if(l1 == l2 && l2 == l3){
		cout << "Esse e um triangulo equilatero" << endl;
	} else if(l1 != l2 && l1 != l3 && l2 != l3){
		cout << "Esse e um triangulo escaleno" << endl;
	} else{
		cout << "Esse e um triangulo isosceles" << endl;
	}
	return 0;
}
