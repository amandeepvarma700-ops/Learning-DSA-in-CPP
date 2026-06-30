#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if(head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return head;

        ListNode* fast1 = head;
        ListNode* evenHead = head->next;
        ListNode* fast2 = head->next;
//Fast2 is pointing towards even node, and next to Fast2 is pointing towards odd node. 
        while(fast2 != nullptr && fast2->next != nullptr) {

            fast1->next = fast1->next->next;
            fast2->next = fast2->next->next;

            fast1 = fast1->next;
            fast2 = fast2->next;
        }

        fast1->next = evenHead;

        return head;
    }
};

// Function to print the linked list
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

    Solution obj;
    head = obj.oddEvenList(head);

    cout << "After Odd-Even Rearrangement: ";
    printList(head);

    return 0;
}