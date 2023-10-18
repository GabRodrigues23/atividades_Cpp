#include <iostream>
using namespace std;

int exponencial(int a, int b){
	
	if(b == 0){
		return 1;
	} else{
		return a * exponencial(a, b - 1);
	}
}

int main(){
	cout << "Resultado: " << exponencial(5, 3) << endl;
	return 0;
}
