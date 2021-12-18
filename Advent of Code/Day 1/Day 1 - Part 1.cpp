#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	int num1, num2, cont=0;
	
	ifstream f;
	
	f.open("Day 1 - Numeros.txt");
	
	f >> num1;
	f >> num2;
	
	while(!f.eof()) {
		if(num2 > num1) {
			cont++;
		}
		
		num1 = num2;
		f >> num2;
	}
	
	f.close();
	
	cout<<cont;
	
	return 0;
}
