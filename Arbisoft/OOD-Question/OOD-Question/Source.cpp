#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
//Steps for an OOD problem
/*
#####Step 1: Identify the class names
The first step is to identify the primary objects of the system.

#####Step 2: Distinguish relationships
Next step is to determine how each of the classes or objects are 
related to one another. Look out for commonalities and abstractions 
among them; this will help you when grouping them when drawing the class diagram.

#####Step 3: Create the Structure
First, add the class names and link them with the appropriate connectors.
You can add attributes and functions/ methods/ operations later.
*/
class ABC {
	//According to logic
};
int main(int args, char** argsv) {
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