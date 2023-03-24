#include<iostream>
using namespace std;
string inttoRoman(int number) {
	string res;	
	while (number > 0) {
		if (number >= 4 && number < 5 || number >= 9 && number < 10) {
			res += "I";
			if (number >= 4 && number < 5)
			{
				res += "V";
				number = number - 4;
			}
			else
			{
				res += "X";
				number = number - 9;
			}
		}
		else if (number >= 40 && number < 50 || number >= 90 && number < 100)
		{
			res += "X";
			if (number >= 40 && number < 50)
			{
				res += "L";
				number = number - 40;
			}
			else
			{
				res += "C";
				number = number - 90;
			}
		}
		else if (number >= 400 && number < 500 || number >= 900 && number < 1000)
		{
			res += "C";
			if( number >= 400 && number < 500 )
			{
				res += "D";

				number = number - 400;
			}
			else
			{
				res += "M";
				number = number - 900;
			}
		}
		else if (number >= 1 && number <= 3) {
				res += "I";
				number = number - 1;

			}
			else if (number >= 5 && number <= 9) {
				res += "V";
				number = number - 5;
			}
			else if (number >= 10 && number < 50) {
				res += "X";
				number = number - 10;
			}
			else if (number >= 50 && number < 100) {
				res += "L";
				number = number - 50;
			}
			else if (number >= 100 && number < 500) {
				res += "C";
				number = number - 100;
			}
			else if (number >= 500 && number < 1000) {
				res += "D";
				number = number - 500;
			}
			else if (number >= 1000) {
				res += "M";
				number = number - 1000;
			}
		
	}
	return res;
	
}
int main() {
	
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			return 0;
		}
		string s = inttoRoman(n);
		cout << s<<endl;
	}
	return 0;
}