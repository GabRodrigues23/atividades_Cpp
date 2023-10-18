#include <iostream>
using namespace std;

int main(){
	const int size = 5;
	int num[size] = {2, 4, 6, 8, 10};
	
	int sum = 0;
	for(int i = 0; i < size; ++i){
		sum+= num[i];
	}
	cout << "Soma dos elementos: " << sum << endl;
	
	return 0;
}
