//to be uploaded soon...
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node*next;
    Node*prev;

    Node(int data){
        this->val = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    Node(int val,Node*prev,Node*next){
        this->val = val;
        this->prev = prev;
        this->next = next;
    }


};

class Solution{
public:
    Node * reverseDLL(Node*head){
       
        if(head==nullptr || head->next==nullptr) return head;

        Node*curr = head;

        while(curr!=nullptr){
            Node*temp = curr->next;
            curr->next = curr->prev;
            curr->prev = temp;
            head = curr;
            curr = temp;
        }
        
        return head ;
    }
};

void print(Node* head) {
    // Traverse from head to end and print each node's data
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Connect nodes forward
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Connect nodes backward
    second->prev = head;
    third->prev = second;
    fourth->prev = third;

    cout << "Original DLL: ";
    print(head);

    Solution obj;
    head = obj.reverseDLL(head);

    cout << "Reversed DLL: ";
    print(head);

    return 0;
}
