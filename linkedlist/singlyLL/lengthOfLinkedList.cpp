#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node * next;

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
    //Length of linked list
public:
    int SizeOfLinkedList(Node *head){
        int count = 0;
        Node*temp = head;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main(){
    Solution s;

    Node* head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);
    head->next->next->next->next = new Node(8);

    cout<<s.SizeOfLinkedList(head)<<endl;
}