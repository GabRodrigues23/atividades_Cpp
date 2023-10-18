#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> minhaLista;
	
	minhaLista.push_back(1);
	minhaLista.push_back(2);
	minhaLista.push_back(3);
	minhaLista.push_front(0);
	
	cout << "Lista: ";
	for(auto elemento: minhaLista){
		cout << elemento << " ";
	}
	cout << endl;

	minhaLista.pop_back();
	minhaLista.pop_front();

	cout << "Lista apos a remocao do primeiro e ultimo elementos: ";
	for(auto elemento: minhaLista){
		cout << elemento << " ";
	}

	return 0;
}

