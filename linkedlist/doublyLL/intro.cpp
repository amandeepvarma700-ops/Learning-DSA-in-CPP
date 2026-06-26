#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    //constructor
    Node(int data,Node*next,Node*prev){
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


int main(){
    vector<int> arr = {3,4,5,4,3};

    //creating head node
    Node*head = new Node(arr[0]);
    cout<<head<<'\n';

    //printing the data stored in head node
    cout<<head->data<<'\n';

    return 0;
}


