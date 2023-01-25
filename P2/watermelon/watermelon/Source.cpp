#include <iostream>
#include <string>
using namespace std;
int getLengthofLongestSubstring(string s, int k) {
   
    int size = s.length();
    for (int i = 0; i < size; i++) {
        char *temp=new char[size - i + 1];
        int index = 0;
        int tempsize = sizeof(temp);
        for (int j = 0; j < i; j++) {
            temp[index++] = s[j];
            temp[index] = '\0';

            std::cout << temp<<endl;
            
        }
    }
    return 1;
}

#include<string>
int countNumberOfPalindromeWords(string s)
{
    int palindrome = 0;
    
    int start = 0;
    for (int i = 0; i <= s.length(); i++) {
        int flag = 0;
        int end;
        if (s[i] ==' ' || i == s.length()) {
            end = i - 1;

            string substring = s.substr(start, end-start+1);
            std::cout << substring<<" "<< substring.length() <<endl;
            int length = substring.length();
            for (int j = 0; j< length; j++) {
                if (tolower(substring[j]) != tolower(substring[length - j - 1])) {
                    flag = 1;
                    break;
                }
            }

            if (flag) {
               // 
             
            }
            else {
                cout << substring << " is palindrome"<<endl;
                palindrome++;
            }


            start = i+1;
        }
    }
    return palindrome;
}

int main() {
   std::cout<< countNumberOfPalindromeWords(" ");
   /* int w;
    std::cin >> w;
    if (w == 2) {
        std::cout << "NO";
    }
    else if (w % 2 == 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";

    }*/
 
    return 0;
}