#include <iostream>
#include<string>
using namespace std;

int issuccessive_numbers(char c,  int current,string str) {
    int count = 0;

    for (int i = current+1; i < str.length(); i++) {
        if (str[i] != c) {
            break;
        }
        count++;
    }
    return count;
}
int main() {
    string digits;
    getline(cin, digits);
    
    string numbers[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string successive_numbers[] = {"double","triple","quadruple","quintuple","sextuple","septuple","octuple","nonuple","decuple"};

        
    string res = "";
    int count = 0;
    for (int i = 0; i < digits.length(); i++) {
        
        if (digits[i] >= '0' && digits[i] <= '9') {
            count = issuccessive_numbers(digits[i], i, digits);
            if(count!=0)
              res += successive_numbers[count-1] + " ";
            int digit = digits[i] - '0';
            res += numbers[digit] + " ";
            i = count + i;
            
        }
    }
    for (int i = 0; i < res.length(); i++) {

    }
    
    cout << res;
    return 0;
}


