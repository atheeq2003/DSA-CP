// 876. Middle of the Linked List -> https://leetcode.com/problems/middle-of-the-linked-list/description/
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

    Node* middleNodeOptimal(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* middleNodeBrute(Node* head) {
        int count = 0;
        Node* temp = head;
        while(temp != nullptr) {
            temp = temp->next;
            count++;
        }
        Node* mid = head;
        for(int i = 0; i < count/2; i++) {
            mid = mid->next;
        }
        return mid;
    }
    
};

int main() {
    List ll;
    int n = 5;
    for(int i = 1; i <= n; i++) {
        ll.push_back(i);
    }
    ll.head = ll.middleNodeBrute(ll.head);
    ll.print();
    ll.head = ll.middleNodeOptimal(ll.head);
    ll.print();
}