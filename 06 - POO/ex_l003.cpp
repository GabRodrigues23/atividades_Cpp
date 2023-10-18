#include <iostream>
using namespace std;

class Aviao{
private:
	string modelo;
	string destino;
	string hora;
	string particular;
	
public:
	Aviao(string modelo, string destino, string hora, string particular){
		this->modelo = modelo;
		this->destino = destino;
		this->hora = hora;
		this->particular = particular; 
	}
	
	void setModelo(string novoModelo){
		modelo = novoModelo;
	}
	string getModelo(){
		return modelo;
	}
	
	void setDestino(string novoDestino){
		destino = novoDestino;
	}
	string getDestino(){
		return destino;
	}
	
	void setHora(string novaHora){
		hora = novaHora;
	}
	string getHora(){
		return hora;
	}
	
	void setParticular(string novoParticular){
		particular = novoParticular;
	}
	string getParticular(){
		return particular;
	}
	
	void mostrarInfo(){
		cout << "Modelo: " << modelo << endl;
		cout << "Destino: " << destino << endl;
		cout << "Hora: " << hora << endl;
		cout << "Particular: " << particular << endl;
	}
};

int main(){
	Aviao aviao("Boeing 777", "Franca", "19:30", "Nao");
	
	aviao.mostrarInfo();
}
