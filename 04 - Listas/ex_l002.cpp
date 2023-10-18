#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
	const int size = 5;
	string nome;

	list<string> numList;
	for(int i = 0; i < size; ++i){
		cout << "Nome: ";
		cin >> nome;
		
		numList.push_front(nome);
	}
	
	for(auto element: numList){
		cout << element << " ";
	}
	
	return 0;
}
