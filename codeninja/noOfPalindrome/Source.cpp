#include <iostream> 
#include<string>
#include<cstring>
using namespace std;
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

string sortbinarytree(BinaryTreeNode<int>* root) {
    if (root == NULL) {
        cout <<"fghjkl" << endl;
        return "";
    }
    string result = "";
    cout << result << endl;
    result += sortbinarytree(root->left);
    result += to_string(root->data);
    result += sortbinarytree(root->right);
}
string printLargest(BinaryTreeNode<int>* root) {
    string res = sortbinarytree(root);

    return res;
}

int main() {

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(5);
    root->left.data = 4;
    cout << "dtyujkfghjkl;'";
    root->right->data = 2;
    cout << "rtyuik"<<sortbinarytree(root);
    return 0;
}












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
