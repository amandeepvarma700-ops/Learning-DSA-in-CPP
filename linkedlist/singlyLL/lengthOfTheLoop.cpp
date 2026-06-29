#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node*next;

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }

    Node(int val,Node*next){
        this->val = val;
        this->next = next;

    }
};

class Solution{
    public:

    int lengthOfTheCircularLL(Node*head){
        Node*slow = head;
        Node*fast = head;
        int count = 0;
        while(fast!=nullptr&&fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next; 
            if(fast==slow)break;
        }
        if(fast==slow){
            slow= fast->next;
            while(slow!=fast){
                slow = slow->next;
                count++;
            }
            return count+1;
        }
        return 0;
        
    }
};

int main(){

  Solution sol;

    Node*head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(8);
    head->next->next->next = new Node(9);
    head->next->next->next->next = new Node(10);
    head->next->next->next->next->next = head->next;

    cout<<sol.lengthOfTheCircularLL(head);
}