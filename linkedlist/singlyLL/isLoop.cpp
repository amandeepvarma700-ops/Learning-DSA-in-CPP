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
    public:
    bool isLoop(Node*head){
        Node*slow = head;
        Node*fast = head->next;

        while(fast !=nullptr &&fast->next!=nullptr ){
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast)return true;
        }
        return false;
    }
};


int main(){
    Solution sol;
    Node*head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    // head->next->next->next->next = head->next->next;
    head->next->next->next->next = head;

    cout<<sol.isLoop(head);

}