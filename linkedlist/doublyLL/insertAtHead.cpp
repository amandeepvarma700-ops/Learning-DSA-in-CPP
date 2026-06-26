#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*next;
    Node*prev;

    //constructors
    Node(int data,Node*prev,Node*next){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class Solution{
    public:
    Node* insertAtHead(Node*head,int data){
        Node * newNode = new Node(data,nullptr,head);
        if(head!=nullptr)head->prev = newNode;
        return newNode;
    }

    void printDLL(Node*head){
        Node*temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" <--> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};


int main(){

    Solution s;
    Node*head = new Node(5);
    Node*newHead = s.insertAtHead(head,3);

    s.printDLL(newHead);
}