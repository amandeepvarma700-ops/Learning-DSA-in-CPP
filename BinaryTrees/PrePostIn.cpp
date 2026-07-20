#include<bits/stdc++.h>
using namespace std;
//In - first left -> iteslef -> right Node
//post - first left node --> right node --> itself
//pre - iteself; --> left node --> right node
class Node{
public:

    int data;
    Node*left;
    Node*right;

    //default constructor
    Node(int value){
        data= value;
        left = nullptr;
        right = nullptr;
    }

    Node(int val,Node*left,Node*right){
        data = val;
        this->left = left;
        this->right = right;
    }


};

//traversal functions
void preorder(Node*root){
    Node*temp = root;
    if(temp==nullptr)return;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}

int main(){

}