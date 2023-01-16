#include <iostream> 
#include<string>
#include<cstring>
using namespace std;
int countNumberOfPalindromeWords(string s)
{
    int palindrome = 0;
    int start = 0;
    if (s.empty()) {
        return 0;
    }
    for (int i = 0; i <= s.length(); i++) {
        int flag = 0;
        int end;

        if (s[i] == ' ' || i == s.length()) {
            end = i - 1;
            string substring = s.substr(start, end - start + 1);
            int size = substring.length();


            for (int j = 0; j < size; j++) {
                if (tolower(substring[j]) != tolower(substring[size - j - 1])) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {

            }
            else {
                palindrome++;
            }
            while (s[i + 1] == ' ') {
                i++;
            }
            start = i + 1;

        }
    }
    return palindrome;
}
int main() {


    return 0;
}