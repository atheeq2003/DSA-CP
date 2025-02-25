// 25. Reverse Nodes in k-Group -> https://leetcode.com/problems/reverse-nodes-in-k-group/description/
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

    Node* reverseKGroup(Node* head, int k) {
        Node* temp = head;
        int count = 0;
        while(count < k) {
            if(temp == nullptr) {
                return head;
            }
            temp = temp->next;
            count++;
        }

        Node* prevNode;
        prevNode = reverseKGroup(temp, k);

        temp = head, count = 0;
        while(count < k) {
            Node* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            count++;
        }
        return prevNode;
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
    int k = 2;
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.head = ll.reverseKGroup(ll.head, 3);
    ll.print();
}