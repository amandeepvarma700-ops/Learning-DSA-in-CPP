//delete element without head and with only the data.
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        //For speeding up the code 
        static const auto fastIO = []() {
            ios::sync_with_stdio(false);
            cin.tie(nullptr);
            return 0;
        }();

        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create the linked list: 4 -> 5 -> 1 -> 9
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original List: ";
    printList(head);

    Solution obj;

    // Delete the node with value 5
    ListNode* node = head->next;
    obj.deleteNode(node);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}