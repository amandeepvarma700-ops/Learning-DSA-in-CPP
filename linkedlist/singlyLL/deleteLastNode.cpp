#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor with data and ptr
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
    Node*delete_tail(Node * head){

        if(head==NULL || head->next == NULL){
            delete head;
            return NULL;
        }
        //iterate to last
        Node*temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
            
        }

        // delete tail node

        delete temp->next;
        temp->next = NULL;

        return head;
    }
};

int main(){
    Solution sol;
    
    Node*head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);

    head = sol.delete_tail(head);

    Node* temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}