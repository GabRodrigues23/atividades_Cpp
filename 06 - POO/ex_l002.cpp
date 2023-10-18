#include <iostream>
#include <string>
using namespace std;

class Carro{
private:
	string modelo;
	string marca;
	string cor;
	int ano;

public:
	Carro(string modelo, string marca, string cor, int ano){
		this->modelo = modelo;
		this->marca = marca;
		this->cor = cor;
		this->ano = ano;
	}
	
	void setModelo(string novoModelo){
		modelo = novoModelo;
	}
	string getModelo(){
		return modelo;
	}
	
	void setMarca(string novaMarca){
		marca = novaMarca;
	}
	string getMarca(){
		return marca;
	}
	
	void setCor(string novaCor){
		cor = novaCor;
	}
	string getCor(){
		return cor;
	}
	
	void setAno(int novoAno){
		ano = novoAno;
	}
	int getAno(){
		return ano;
	}
	
	void mostrarInfo(){
		cout << "Modelo: " << modelo << endl;
		cout << "Marca: " << marca << endl;
		cout << "Cor: " << cor << endl;
		cout << "Ano: " << ano << endl;
	}
};

int main(){
	Carro carro1("Lancer", "Mitsubishi", "Amarelo", 2023);
	carro1.mostrarInfo();
	
	return 0;
}
