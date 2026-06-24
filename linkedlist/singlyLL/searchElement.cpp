#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int data,Node*next){
        this->data = data;
        this->next = next;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Solution{
public:
    //search for the element.
    bool searchLL(Node*head,int k){
        Node *curr = head;
        while(curr!=nullptr){
            if(curr->data==k)return true;
            curr = curr->next;
        }
        return false;
        
    }
};


int main(){

Solution sol;

Node*head = new Node(22);
head->next = new Node(23);
head->next->next = new Node(24);
head->next->next->next = new Node(25);
head->next->next->next->next = new Node(26);

cout<<sol.searchLL(head,25);
}