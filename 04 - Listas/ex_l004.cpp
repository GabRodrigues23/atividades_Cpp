#include <iostream>
#include <list>
using namespace std;

int main(){
	const int size = 10;
	list<int> numList;
	int num;
	
	for(int i = 0; i < size; ++i){
		cout <<"Digite um valor: ";
		cin >> num;
		
		numList.push_front(num);
	}
	
	numList.sort();
	numList.unique();
	for(auto i: numList){
		cout << i << " ";
	}
	
	return 0;
}
