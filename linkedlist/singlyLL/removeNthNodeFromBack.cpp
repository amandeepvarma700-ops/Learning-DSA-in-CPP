#include<bits/stdc++.h>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)return nullptr;
        ListNode*fast = head;
        ListNode*slow = head;
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        if(fast==nullptr){
            head = head->next;
            return head;
        }
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;

    }
};

void printList(ListNode* head) {
    while(head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Creating the list:
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    cout << "Original List: ";
    printList(head);

    cout<<"Answer List: ";
    Solution s;
    printList(s.removeNthFromEnd(head,2));
}