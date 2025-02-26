// 92. Reverse Linked List II -> https://leetcode.com/problems/reverse-linked-list-ii/description/
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

    Node* reverseBetween(Node* head, int left, int right) {
        Node* dummyNode = new Node(-1);
        dummyNode->next = head;
        Node* leftPrevNode = dummyNode;
        Node* currNode = head;
        for(int i = 0; i < left-1; i++) {
            leftPrevNode = leftPrevNode->next;
            currNode = currNode->next;
        }
        
        Node* sublistHead = currNode;
        Node* prevNode = nullptr;
        for(int i = 0; i <= right-left; i++) {
            Node* next = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = next;
        }
        leftPrevNode->next = prevNode;
        sublistHead->next = currNode;
        return dummyNode->next;
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
            cout << temp->data <<  " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    int left = 2;
    int right = 4;
    ll.head = ll.reverseBetween(ll.head, left, right);
    ll.print();
}