// 61. Rotate List -> https://leetcode.com/problems/rotate-list/description/
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
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = nullptr;
    }

    Node* rotateRight(Node* head, int k) {
        if(head == nullptr || k == 0) return head;
        Node* tail = head;
        int len = 1;
        while(tail->next != nullptr) {
            tail = tail->next;
            len++;
        }
        if(k % len == 0) return head;

        k = k % len;
        Node* temp = head;
        for(int i = 0; i < len-k-1; i++) {
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = nullptr;
        return head;
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
    ll.push_back(0);
    ll.push_back(1);
    ll.push_back(2);
    
    int k = 4;
    ll.head = ll.rotateRight(ll.head, k);
    ll.print();
}