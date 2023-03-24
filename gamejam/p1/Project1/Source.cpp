
#include <iostream>
#include <vector>
#include <cstring>  
#include <string>  
#include <algorithm>
// cstdlib is needed for atoi()
#include <cstdlib>
using namespace std;


using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(TreeNode* node) {
    if (node) {
        inorder(node->left);
        cout << node->val << " ";
        inorder(node->right);
    }
}

int* str_to_int_array(string str, int node_count) {

    const int length = str.length();

    // declaring character array (+1 for null terminator)
    char* char_array = new char[length + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, str.c_str());

    int* nodes = new int[node_count];

    char* ptr; // declare a ptr pointer  
    ptr = strtok(char_array, ","); // use strtok() function to separate string using comma (,) delimiter.  
    int i = 0;
    // use while loop to check ptr is not null  
    while (ptr != NULL)
    {
        //cout << ptr  << endl; // print the string token  
        nodes[i++] = atoi(ptr);
        ptr = strtok(NULL, ",");
    }

    return nodes;
}

TreeNode* array_to_tree(int arr[], int i, int node_count) {
    /*
     * Constructs a binary tree from its array representation.
     *
     * Parameters:
     * arr (vector): The array representation of the binary tree.
     * i (int): The index of the root node in the array.
     *
     * Returns:
     * TreeNode*: The root node of the binary tree.
     */

    if (i >= node_count || arr[i] == -1) {
        return NULL;
    }
    TreeNode* root = new TreeNode(arr[i]);
    root->left = array_to_tree(arr, 2 * i + 1, node_count);
    root->right = array_to_tree(arr, 2 * i + 2, node_count);
    return root;
}


int height(TreeNode* root) {
    if (root == NULL) {
        return 1;
    }
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(TreeNode* root)
{
    // Write your code here
    if (root == NULL) {
        return 1;
    }
    int lt =height( root->left);
    int rt = height(root->right);
   
   if((lt-rt)<=1 && isBalanced(root->left) && isBalanced(root->right))
      return 1;
   return 0;
}



int main() {
    // Example array representation of a binary tree
    //int arr[7] = {1, 2, 3, 4, -1, 6, 7};

    //char str[100]; // declare the size of string     

    while (true) {
        string str;
        getline(cin, str); // use getline() function to read a string from input stream

        if (str == "0")
        {
            return 0;
        }

        int node_count = count(str.begin(), str.end(), ',');
        node_count++;


        // Construct the binary tree from the array
        TreeNode* root = array_to_tree(str_to_int_array(str, node_count), 0, node_count);

        if (isBalanced(root))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        // Traverse the binary tree to verify the result
        //inorder(root);  // Output: 4 2 1 6 3 7
        //cout << endl;
    }

    return 0;
}













