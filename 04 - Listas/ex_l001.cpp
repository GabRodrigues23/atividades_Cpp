#include <iostream>
#include <list>
using namespace std;

int main(){
	const int size = 5;
	list<int> numList;
 	
 	int num, soma = 0, mult = 1;
 	
 	for(int i = 0; i < size; i++){
		cout << "Valor: ";
		cin >> num;
		
		soma+= num;
		mult*= num;
		numList.push_back(num);
	}
	
	cout << endl;
	
 	for(auto i: numList){
 		cout << i << " ";
	}
	cout << endl;
	cout << "Soma: " << soma << endl;
	cout << "Multiplicacao: " << mult;
	 
	return 0;
}
