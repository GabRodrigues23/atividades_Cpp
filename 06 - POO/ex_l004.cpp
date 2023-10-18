#include <iostream>
using namespace std;

class Computador{
private:
	string processador;
	string placa;
	string memoria;
	string monitor;
	
public:
	Computador(string processador, string placa, string memoria, string monitor){
		this->processador = processador;
		this->placa = placa;
		this->memoria = memoria;
		this->monitor = monitor; 
	}
	
	void setProcessador(string novoProcessador){
		processador = novoProcessador;
	}
	string getProcessador(){
		return processador;
	}
	
	void setPlaca(string novaPlaca){
		placa = novaPlaca;
	}
	string getPlaca(){
		return placa;
	}
	
	void setMemoria(string novaMemoria){
		memoria = novaMemoria;
	}
	string getMemoria(){
		return memoria;
	}
	
	void setMonitor(string novoMonitor){
		monitor = novoMonitor;
	}
	string getMonitor(){
		return monitor;
	}
	
	void mostrarInfo(){
		cout << "Processador: " << processador << endl;
		cout << "Placa: " << placa << endl;
		cout << "Memoria: " << memoria << endl;
		cout << "Monitor: " << monitor << endl;
	}
};

int main(){
	Computador computador("Ryzen 7 5700X", "Radeon RX 7600 8GB", "16GB DDR4", "Mancer 180hz");

	computador.mostrarInfo();
}
