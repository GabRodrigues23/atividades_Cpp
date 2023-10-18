#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    int nums[size];

    cout << "Digite 10 valores reais:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> nums[i];
    }
    
    cout << endl << "Valores na ordem inversa:" << endl;
    for (int i = size - 1; i >= 0; --i) {
        cout << nums[i] << " ";
    }
    
    cout << endl;
	return 0;
}
