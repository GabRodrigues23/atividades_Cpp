#include <iostream>
using namespace std;

int fatorial(int i){
	if(i == 0){
		return 1;
	} else{
		return i * fatorial(i - 1);
	}
}

int main(){
	cout << "Fatorial: " << fatorial(5) << endl;
	return 0;
}
