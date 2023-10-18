#include <iostream>
#include <string>
using namespace std;
  
class Pessoa{
private:
	string nome;
	int idade;
	string endereco;
	string profissao;
	string rg;
	string cpf;
	
public:
	Pessoa(string nome, int idade, string endereco, string profissao, string rg, string cpf){
		this->nome = nome;
		this->idade = idade;
		this->endereco = endereco;
		this->profissao = profissao;
		this->rg = rg;
		this->cpf = cpf;
	}

	void setNome(string novoNome){
		nome = novoNome;
	}
	string getNome(){
		return nome;
	}
	
	void setIdade(int novaIdade){
		idade = novaIdade;
	}
	int getIdade(){
		return idade;
	}
	
	void setEndereco(string novoEndereco){
		endereco = novoEndereco;
	}
	string getEndereco(){
		return endereco;
	}
	
	void setProfissao(string novaProfissao){
		profissao = novaProfissao;
	}
	string getProfissao(){
		return profissao;
	}
		
	void setRg(string novoRg){
		rg = novoRg;
	}
	string getRg(){
		return rg;
	}

	void setCpf(string novoCpf){
		cpf = novoCpf;
	}
	string getCpf(){
		return cpf;
	}
	
	void mostrarInfo(){
		cout << " " << " " << endl;
		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << " anos" << endl;
		cout << "Endereco: " << endereco << endl;
		cout << "Profissao: " << profissao << endl;
		cout << "Rg: " << rg << endl;
		cout << "Cpf: " << cpf << endl;
	}
};

int main(){
	Pessoa pessoa1("Joao", 30, "Rua Principal, 123", "Engenheiro", "12.345.678-9", "112.334.556-07");
	Pessoa pessoa2("Maria", 25, "Avenida Secundaria, 456", "Medica", "98.765.432-1", "998.776.554-3");
	
	pessoa1.mostrarInfo();
	pessoa2.mostrarInfo();
	
	return 0;
}
