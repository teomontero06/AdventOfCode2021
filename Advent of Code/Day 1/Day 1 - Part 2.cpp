#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int n1, n2, n3, suma, ant, cont=0;
	
	ifstream i;
	
	i.open("Day 1 - Numeros.txt");
	
	i >> n1;
	i >> n2;
	i >> n3;
	
	while(!i.eof()) {
		suma = n1 + n2 + n3;
		
		if(suma > ant) {
			cont++;
		}
		
		n1 = n2;
		n2 = n3;
		i >> n3;
		
		ant = suma;
	}
	
	cout<<cont;
}
