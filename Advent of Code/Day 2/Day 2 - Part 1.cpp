#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
	int h=0, d=0, res, value;
	string command;
	string line, num;
	
	ifstream i;
	
	i.open("Day 2 - Commands.txt");
	
	while( getline(i,line) ) {
		command = line.substr(0,1);
		num = line.substr(line.find(" ")+1,1);
		value = atoi(num.c_str());

		if(command == "f") {
			h = h + value;
		} else if(command == "d") {
			d = d + value;
		} else if(command == "u") {
			d = d - value;
		}
	}
	
	res = h * d;
	cout<<res;
}
