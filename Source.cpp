#include <bits/stdc++.h> 
#include<string>
#include<cstdlib>
 template <typename T>
 class BinaryTreeNode{
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

string sortbinarytree(BinaryTreeNode<int>* root){
     if(root==nullptr){
         return " ";
     }
    string result=" ";
      result+=sortbinarytree(root->right)+" ";
      result+=to_string(root->data)+" ";
    result+= sortbinarytree(root->left)+" "; 

    return result;
}

string printLargest(BinaryTreeNode<int>* root) {
  string res=sortbinarytree(root);
 
  int start=0;
  int* out=new int[res.length()];
    int index=0;
    
  for(int i=0;i<=res.length();i++){
      
      int end;
      if(res[i]!=' ' || i==res.length()){
            
          end=i-1;
          string substr=res.substr(start,end-start+1);
        cout<<substr;
          out[index]=stoi(substr);
      
          while(res[i+1]==' '){
              i++;
          }
          start=i+1;
      }
      
      index++;

  }
    int temp;
    for(int j=0;j<sizeof(out);j++){
        for(int k=j+1;k<sizeof(out);k++){
            if(out[j]<out[k]){
               temp=out[j];
                out[j]=out[k];
                out[j]=temp;
            }
        }
    }
    string finalout;
    for(int l=0;l<finalout.length();l++){
        finalout+=to_string(l);
    }
    
    return finalout;
}





