#include <iostream>
using namespace std;

int produtoEscalar(int vetor1[], int vetor2[], int tamanho){
    int resultado = 0;
    for (int i = 0; i < tamanho; i++){
        resultado += vetor1[i] * vetor2[i];
    }
    return resultado;
}

int main(){
    const int tamanho = 5;
    int vetor1[tamanho] = {1, 2, 3, 4, 5};
    int vetor2[tamanho] = {6, 7, 8, 9, 10};

    int escalar = produtoEscalar(vetor1, vetor2, tamanho);

    cout << "O produto escalar e: " << escalar << endl;
	
	return 0;
}
