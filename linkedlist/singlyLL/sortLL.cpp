//an application of merge sort algorithm.

#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    
    int data;

    
    Node* next;

    
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


class Solution {
public:
    
    Node* mergeTwoSortedLinkedLists(Node* list1, Node* list2) {
        
        Node* dummyNode = new Node(-1);
        
        
        Node* temp = dummyNode;

        
        while (list1 != nullptr && list2 != nullptr) {
            // Choose smaller node
            if (list1->data <= list2->data) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            // Move temp pointer
            temp = temp->next;
        }

        // Attach remaining nodes
       while(list1!=nullptr){
            temp->next = list1;
            list1 = list1->next;
            temp = temp->next;
        }
        while(list2!=nullptr){
            temp->next = list2;
            list2 = list2->next;
            temp = temp->next;
        }

        // Return head of merged list
        return dummyNode->next;
    }

    // Function to find middle of linked list
    Node* findMiddle(Node* head) {
        // If list empty or single node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Slow and fast pointers
        Node* slow = head;
        Node* fast = head->next;

        // Move fast twice as fast as slow
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Return middle node
        return slow;
    }

    // Function to perform merge sort
    Node* sortLL(Node* head) {
        // Base case: empty or single node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Find middle node
        Node* middle = findMiddle(head);

        // Split into two halves
        Node* right = middle->next;
        middle->next = nullptr;
        Node* left = head;

        // Recursively sort both halves
        left = sortLL(left);
        right = sortLL(right);

        // Merge sorted halves
        return mergeTwoSortedLinkedLists(left, right);
    }
};

// Function to print linked list
void printLinkedList(Node* head) {
    // Temp pointer to traverse
    Node* temp = head;

    // Traverse and print nodes
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create linked list: 3 -> 2 -> 5 -> 4 -> 1
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);

    // Print original list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Create Solution object
    Solution obj;

    // Sort the linked list
    head = obj.sortLL(head);

    // Print sorted list
    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}
