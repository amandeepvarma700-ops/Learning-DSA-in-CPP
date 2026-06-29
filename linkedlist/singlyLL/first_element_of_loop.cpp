#include<bits/stdc++.h>
using namespace std;


 
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 

 //When the slow pointer had covered some x+y distance, the fast pointer must have covered twice  of x+y. As it is going one step ahead suppose the head is C. Head means head of the circular linked list. Y is the distance of the pointer from the head. X is the distance of loop head from the actual head of the linked list. 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode*fast = head;
        if(head==nullptr || head->next==nullptr) return nullptr;

        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;

            if(slow==fast){//this means the loop exists
                break;            
            }
        }
            if(fast!=nullptr && slow==fast){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
            return slow;
            }
            return nullptr;
    }
};

int main(){
    Solution sol;

    ListNode*head = new ListNode(5);
    head->next = new ListNode(7);
    head->next->next = new ListNode(8);
    head->next->next->next = new ListNode(9);
    head->next->next->next->next = new ListNode(10);
    head->next->next->next->next->next = head->next->next;

    cout<<sol.detectCycle(head)->val;

}