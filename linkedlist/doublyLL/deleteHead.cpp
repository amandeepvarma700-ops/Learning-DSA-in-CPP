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
    Node* deleteHead(Node*head){
        Node*temp = head;
        head = head->next;
        head->prev = nullptr;
        delete temp;
        return head;
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
    Node*head = new Node(54);
    head->next = new Node(44);
    head->next->next = new Node(34);
    head->next->next->next = new Node(24);
    s.printDLL(head);
    Node *newHead = s.deleteHead(head);
    s.printDLL(newHead);
}