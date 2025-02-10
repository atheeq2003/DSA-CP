#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
    int data;
    Node* next; //Stores pointer to the next address

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
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = nullptr;
    }
};

int main() {
    vector<int> arr = {1, 2, 3};
    Node* nextNode = new Node(arr[1]);
    Node* y = new Node(arr[0], nextNode);
    cout << y->data << endl;
    cout << y->next->data << endl;
}