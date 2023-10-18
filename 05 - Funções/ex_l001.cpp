#include <iostream>
#include <string>
using namespace std;

string concatenar(string std1, string std2){
	return std1 + std2;
}

int main(){
	string std_1 = "Ola ";
	string std_2 = "Mundo!";
	
	cout << concatenar(std_1,std_2) << endl;
}
