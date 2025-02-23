#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }

    Node(int val, Node* next1, Node* prev1) {
        data = val;
        next = next1;
        prev = prev1;
    }
};

class doublyList {
public:
    Node* head;
    Node* tail;

    doublyList() {
        head = tail = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front() {
        if(head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head != nullptr) {
            temp->next = nullptr;
        }
        head->prev = nullptr;
        delete temp;
    }

    void pop_back() {
        if(head == nullptr) {
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != nullptr) {
            tail->next = nullptr;
        }
        temp->prev = nullptr;
        delete temp;
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
    doublyList dll;
    
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(0);
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.print();
    dll.pop_front();
    dll.pop_back();

    dll.print();
}