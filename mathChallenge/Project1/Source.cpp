#include <iostream>
#include<string>
#include<vector>
using namespace std;

int findPeriod(string A)
{
    int length = A.size();
    int period = -1;

    /*set two pointers one(i) at
    index 0 and other(j) at index 1. increment j till
    first character is obtained in the string*/
    int i = 0;
    for (int j = 1; j < length; j++) {
        int currChar = A[j];
        int comparator = A[i];

        /*If current character matches with first
         *character
         *update period as the difference of j and i*/
        if (currChar == comparator) {
            period = (j - i);
            i++;
        }

        /* if any mismatch occurs in between set i to
         * zero also check if current character again
         * matches
         * with starting character. If matches, update
         * period*/
        else {
            if (currChar == A[i]) {
                i = 1;
                period = j;
            }
            else {
                i = 0;
                period = -1;
            }
        }
    }

    /*check if the period is exactly dividing
     * string if not reset the period to -1
     * this eliminates partial substrings like
     * e.g string -"GEEKSFORGEEKS" */

    period = (length % period != 0) ? -1 : period;
   
    return period;
}
int main()
{
    vector<string> testStrings
        = { "EABCABC",        "ABABAB",   "ABCDABCD",
            "GEEKSFORGEEKS", "GEEKGEEK", "AAAACAAAAC",
            "ABCDABC" };
    int n = testStrings.size();
    for (int i = 0; i < n; i++) {
        if (findPeriod(testStrings[i]) == -1)
            cout << "false\n";
        else
            cout << "True\n";
    }

    return 0;
}