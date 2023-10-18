#include <iostream>
#include <list>
using namespace std;

int main(){
	const int size = 5;
	int num;
	list<int> listaA;
	list<int> listaB;
	list<int> listaC;
	
	cout << "Lista A" << endl;
	for(int i = 0; i < size; ++i){
		cout << "Digite um valor pra lista A: ";
		cin >> num;

		listaA.push_back(num);
	}
	cout << endl;
	cout << "Lista B" << endl;
	for(int i = 0; i < size; ++i){
		cout << "Digite um valor pra lista B: ";
		cin >> num;
		
		listaB.push_back(num);
	}
	
	listaC.merge(listaA);
	listaC.merge(listaB);
	listaC.sort();
	
	cout << endl;
	cout << "Lista C" << endl;
	for(auto element: listaC){
		cout << " " << element;
	}

	return 0;
}
