// 234. Palindrome Linked List -> https://leetcode.com/problems/palindrome-linked-list/description/
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }

    Node(int val, Node* next1) {
        data = val;
        next = next1;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = nullptr;
    }

    bool isPalindrome(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* mid = slow;

        Node* prev = nullptr;
        Node* curr = mid;
        Node* next = nullptr;
        while(curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        mid = prev;
        Node* temp = head;

        while(mid != nullptr && temp != nullptr) {
            if(mid->data != temp->data) {
                return false;
            }
            mid = mid->next;
            temp = temp->next;
        }
        return true;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(2);
    ll.push_back(1);
    cout << ll.isPalindrome(ll.head) << endl;
}