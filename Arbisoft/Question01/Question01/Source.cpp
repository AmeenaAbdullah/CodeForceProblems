#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main(int args,char **argsv) {
	string inputFile = argsv[1]; //input file path is stored at index 1 or arguments
	fstream infile(inputFile, ios::in); //open file in read mode
	string readline;
	while (getline(infile, readline)) {
		//read a line from file
		//convert it into words
		//read word by word and perform operations according to logic
		istringstream iss(readline);
		string word;
		iss >> word;
		//aagy ki logic question k accordingly bn jaye gi
	}
}