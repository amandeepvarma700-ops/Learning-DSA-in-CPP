#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node*next;

        Node(int val, Node*next){
            this->val = val;
            this->next = next;
        }
        
        Node(int val){
            this->val = val;
            this->next = nullptr;
        }
};

class Solution{
    bool isLoop(Node*head){
        
    }
}