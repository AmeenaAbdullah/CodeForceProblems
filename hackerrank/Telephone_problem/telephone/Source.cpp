#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {

		string output = "";
		for (int i = 0; i < s.length(); i++) {
			
			if (s[i] == '2')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '2') {
				
					flag++;
					i++;
					indexval++;
					if (flag == 3) {
						output += 'C';
						flag = 0;
					}
				
			    }
                if (flag == 1)
					output += ' A';
				else if (flag == 2)
					output += ' B';

				i--;
			}
			else if(s[i] == '3')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '3') {

					flag++;
					i++;
					indexval++;
					if (flag == 3) {
						output += 'F';
						flag = 0;
					}

				}
				if (flag == 1)
					output += ' D';
				else if (flag == 2)
					output += ' E';

				i--;
				

			}
			else if (s[i] == '4')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '4') {

					flag++;
					i++;
					indexval++;
					if (flag == 3) {
						output += 'I';
						flag = 0;
					}

				}
				if (flag == 1)
					output += ' G';
				else if (flag == 2)
					output += ' H';

				i--;
				

			}
			else if (s[i] == '5')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '5') {

					flag++;
					i++;
					indexval++;
					if (flag == 3) {
						output += 'L';
						flag = 0;
					}

				}
				if (flag == 1)
					output += ' J';
				else if (flag == 2)
					output += ' K';

				i--;
				

			}
			else if (s[i] == '6')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '6') {

					flag++;
					i++;
					indexval++;
					if (flag == 3) {
						output += 'O';
						flag = 0;
					}

				}
				if (flag == 1)
					output += ' M';
				else if (flag == 2)
					output += ' N';

				i--;
				

			}
			else if (s[i] == '7')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '7') {

					flag++;
					i++;
					indexval++;
					if (flag == 4) {
						output += 'S';
						flag = 0;
					}

				}
				if (flag == 1)
					output += ' P';
				else if (flag == 2)
					output += ' Q';
				else if (flag == 3)
					output += 'R';

				

				i--;
			}
			else if (s[i] == '8')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '8') {

					flag++;
					i++;
					indexval++;
					if (flag == 3) {
						output += 'V';
						flag = 0;
					}

				}
				if (flag == 1)
					output += ' T';
				else if (flag == 2)
					output += ' U';
			   i--;

			}
			else if (s[i] == '9')
			{
				int j = i, indexval = i, flag = 0;;
				while (indexval < s.length() && s[indexval] == '9') {

					flag++;
					i++;
					indexval++;
					if (flag == 4) {
						output += 'Z';
						flag = 0;
					}

				}
				if (flag == 1)
					output += 'W';
				else if (flag == 2)
					output += 'X';
				else if (flag == 3)
					output += 'Y';

				
				i--;

			}
			else if (s[i] == '#')
			{
				
			}
			else if (s[i] == '0')
			{
				output += ' ';


			}


		}
		cout << output;
	}


	
    return 0;
}