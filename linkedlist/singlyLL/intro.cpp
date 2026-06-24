// #creating a linked list

/*A node refers to the structure that contains data and the pointer to the next node. In contrast, Node* (Node pointer) specifically denotes a pointer variable that stores the address of the Node it is pointing to.*/


#include<bits/stdc++.h>
using namespace std;

//Node class represent a node in a linked list

class Node{
public:
    int data;
    Node* next; //pointer to the next value

    //constructor with data and next
    Node(int data,Node*next){
        this->data = data;
        this->next = next;
    }

    //constructor with only data
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

// Solution class to handle linked list operations

class Solution {
public:

    //function to insert a new node at  head
    Node* insertAtHead(Node*head,int data){
        //creating a newNode whose next points to the current head.
        Node*newNode = new Node(data,head);
        //returning the new node as the head.
        return newNode;
    }

    //to print the linked list
    void printList(Node*head){
        Node*temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){


    Solution sol;

    //create an array
    vector<int>arr = {2,5,8,7};

    //create first Node
    Node*y = new Node(arr[0]);

    Node*head = new Node(3);
    head->next = y;

    
    cout<<"Original list: ";
    sol.printList(head);

    //inserting new element at head or making a new head
    head = sol.insertAtHead(head,1);

    cout<<"New list: ";
    sol.printList(head);



    return 0;
}

/*Tc and Oc - O(1)*/



