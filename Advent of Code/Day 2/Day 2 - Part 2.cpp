#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

int main() {
	int v, h=0, d=0, a=0, res;
	string command, line, num;
	
	ifstream i;
	
	i.open("Day 2 - Commands.txt");
	
	while( getline(i,line) ) {
		command = line.substr(0,1);
		num = line.substr(line.find(" ")+1,1);
		v = atoi(num.c_str()); 
		
		if(command == "f") {
			h = h + v;
			d = d + (a * v);
		} else if(command == "u") {
			a = a - v;
		} else if(command == "d") {
			a = a + v;
		}
	}
	
	res = h * d;
	cout<<res;
	
	return 0;
}
