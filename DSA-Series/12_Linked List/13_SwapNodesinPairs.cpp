// 24. Swap Nodes in Pairs -> https://leetcode.com/problems/swap-nodes-in-pairs/description/
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

    Node* swapPairs(Node* head) {
        if(head == nullptr) {
            return head;
        }
        Node* temp = head;
        int count = 0;
        while(count < 2) {
            if(temp == nullptr) {
                return head;
            }
            temp = temp->next;
            count++;
        }

        Node* prevNode = swapPairs(temp);
        temp = head, count = 0;
        while(count < 2) {
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
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);

    ll.head = ll.swapPairs(ll.head);
    ll.print();
}