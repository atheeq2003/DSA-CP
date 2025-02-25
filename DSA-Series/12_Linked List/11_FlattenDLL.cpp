// 430. Flatten a Multilevel Doubly Linked List -> https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/description/
#include <bits/stdc++.h>
using namespace std;

// Node definition for the multilevel doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node* child;

    Node(int val) {
        data = val;
        next = prev = child = nullptr;
    }
};

// Function to flatten the multilevel doubly linked list
Node* flatten(Node* head) {
    if (head == nullptr) {
        return head;
    }
    Node* curr = head;
    while (curr != nullptr) {
        if (curr->child != nullptr) {
            Node* next = curr->next;
            curr->next = flatten(curr->child);
            curr->next->prev = curr;
            curr->child = nullptr;

            while (curr->next != nullptr) {
                curr = curr->next;
            }

            if (next != nullptr) {
                curr->next = next;
                next->prev = curr;
            }
        }
        curr = curr->next;
    }
    return head;
}

// Function to print the flattened list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to create a sample multilevel linked list
Node* createTestList() {
    /*
        Example List:
        1 - 2 - 3 - 4
            |
            5 - 6
                |
                7 - 8

        Flattened Output: 1 2 5 6 7 8 3 4
    */

    Node* head = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);

    head->next = n2;
    n2->prev = head;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;

    n2->child = n5;
    n5->next = n6;
    n6->prev = n5;
    n6->child = n7;
    n7->next = n8;
    n8->prev = n7;

    return head;
}

// Main function
int main() {
    Node* head = createTestList();
    cout << "Original List (with child pointers):\n";
    printList(head); // Won't show child levels properly

    head = flatten(head);
    
    cout << "Flattened List:\n";
    printList(head); // Should print a single-level list

    return 0;
}
