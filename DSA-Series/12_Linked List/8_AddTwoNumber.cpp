// 2. Add Two Numbers -> https://leetcode.com/problems/add-two-numbers/description/
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

    Node* addTwoNumbers(Node* l1, Node* l2) {
        Node* dummyNode = new Node(-1);
        Node* curr = dummyNode;
        Node* temp1 = l1;
        Node* temp2 = l2;

        int carry = 0;
        while(temp1 != nullptr || temp2 != nullptr) {
            int sum = carry;
            if(temp1 != nullptr) sum += temp1->data;
            if(temp2 != nullptr) sum += temp2->data;
            Node* newNode = new Node(sum % 10);
            carry = sum / 10;
            curr->next = newNode;
            curr = newNode;
            if(temp1 != nullptr) temp1 = temp1->next;
            if(temp2 != nullptr) temp2 = temp2->next;
        }
        if(carry == 1)
        {
            Node* newNode = new Node(carry);
            curr->next = newNode;
        }
        return dummyNode->next;
    }

    void print() {
        Node* temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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

    void updateTail() {
        tail = head;
        while (tail && tail->next) {
            tail = tail->next;
        }
    }

};
int main() {
    List ll1;
    List ll2;
    List ll3;
    int l1 = 7;
    for(int i=1; i <= l1; i++) {
        ll1.push_back(9);
    }
    int l2 = 4;
    for(int i=1; i <= l2; i++) {
        ll2.push_back(9);
    }

    ll3.head = ll3.addTwoNumbers(ll1.head, ll2.head);
    ll3.updateTail();
    ll3.print();

}