// 21. Merge Two Sorted Lists -> https://leetcode.com/problems/merge-two-sorted-lists/description/
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

    Node* mergeTwoLists(Node* h1, Node* h2) {
        if(h1 == nullptr || h2 == nullptr) {
            return h1 == nullptr ? h2 : h1;
        }
        if(h1->data <= h2->data) {
            h1->next = mergeTwoLists(h1->next, h2);
            return h1;
        }
        else {
            h2->next = mergeTwoLists(h1, h2->next);
            return h2;
        }
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
    List ll1;
    List ll2;
    ll1.push_back(1);
    ll1.push_back(2);
    ll1.push_back(4);

    ll2.push_back(1);
    ll2.push_back(3);
    ll2.push_back(4);

    ll1.print();
    ll2.print();

    List ll3;
    ll3.head = ll3.mergeTwoLists(ll1.head, ll2.head);

    ll3.print();
}