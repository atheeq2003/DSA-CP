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

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = tail = newNode;
            return;
        }
        else {
            newNode->next = head;
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
            tail = newNode;
        }
    }

    void pop_front() {
        
        if(head == nullptr) {
            return;
        }
        else {
            Node* temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
    }

    void pop_back() {
        if(head == nullptr) {
            return;
        }
        else {
            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp->next = nullptr;
            delete tail;
            tail = temp;
        }
    }

    void insert(int val, int pos) {
        if(pos < 0) {
            return;
        }
        else if(pos == 0) {
            push_front(val);
        }
        else {
            Node* temp = head;
            for(int i = 0; i < pos-1; i++) {
                if(temp == nullptr) {
                    return;
                }
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    int search(int val) {
        Node* temp = head;
        int i = 0;
        while(temp != nullptr) {
            if(temp->data == val) {
                return i;
            }
            temp = temp->next;
            i++;
        }
        return -1;
    }

    void convertArr2LL(vector<int> &arr) {
        for(int i : arr) {
            push_back(i);
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
    vector<int> arr = {4, 5, 6};
    Node* nextNode = new Node(arr[1]);
    Node* y = new Node(arr[0], nextNode);
    cout << y->data << endl;
    cout << y->next->data << endl;
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();
    ll.push_front(1);
    ll.print();
    ll.insert(4, 0);
    ll.print();
    cout << ll.search(0) << endl;
    ll.convertArr2LL(arr);
    ll.print();
}