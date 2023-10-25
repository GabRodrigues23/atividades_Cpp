#include <iostream>
#include <stack>
using namespace std;

int main(){		
	stack<string> pilha1;
	pilha1.push("Laranja");		// 0
	pilha1.push("Pera"); 		// 1
	pilha1.push("Maca"); 		// 2
	pilha1.push("Banana"); 		// 3
	pilha1.push("Uva"); 		// 4
	pilha1.push("Manga");		// 5
	
	stack<string> pilha2;
	pilha2.push("Abacaxi"); 	// 0
	pilha2.push("Morango");		// 1
	pilha2.push("Kiwi");		// 2
	pilha2.push("Melancia");	// 3
	pilha2.push("Mamao");		// 4
	pilha2.push("Abacate");		// 5
	
	stack<string> pilha1Nova;
	stack<string> pilha2Nova;
	
	while(!pilha1.empty()){
	    if(pilha1.top() == "Uva" || pilha1.top() == "Manga"){
	        pilha2Nova.push(pilha1.top());
	    } else {
	        pilha1Nova.push(pilha1.top());
	    }
	    pilha1.pop();
	}
	
	while(!pilha2.empty()){
	    if(pilha2.top() != "Abacaxi" && pilha2.top() != "Morango"){
	        pilha2Nova.push(pilha2.top());
	    } else {
	        pilha1Nova.push(pilha2.top());
	    }
	    pilha2.pop();
	}
	
	cout << "Pilha 1" << endl;
	while(!pilha1Nova.empty()){
	    cout << pilha1Nova.top() << endl;
	    pilha1Nova.pop();
	}

	cout << " " << endl;

	cout << "Pilha 2" << endl;
	while(!pilha2Nova.empty()){
	    cout << pilha2Nova.top() << endl;
	    pilha2Nova.pop();
	}
	
	return 0;
}
