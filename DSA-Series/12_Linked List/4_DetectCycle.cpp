// 141. Linked List Cycle -> https://leetcode.com/problems/linked-list-cycle/description/
// 142. Linked List Cycle II -> https://leetcode.com/problems/linked-list-cycle-ii/description/
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

    void removeCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                slow = head;
                Node* temp;
                while(slow != fast) {
                    slow = slow->next;
                    temp = fast;
                    fast = fast->next;
                }
                temp->next = nullptr;
                cout << "Cycle Removed" << endl;
            }
        }
    }

    Node* detectCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                slow = head;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                cout << "Start Node of Cycle: ";
                return slow;
            }
        }
        return nullptr;
    }

    bool hasCycle(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                cout << "Has Cycle: ";
                return true;
            }
        }
        cout << "Has Cycle: ";
        return false;
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
    int n = 4;
    for(int i = 0; i < n; i++) {
        ll.push_back(i);
    }
    ll.tail->next = ll.head->next->next;
    cout << ll.hasCycle(ll.head) << endl;
    Node* temp = ll.detectCycle(ll.head);
    cout << temp->data << endl;
    ll.removeCycle(ll.head);
    cout << ll.hasCycle(ll.head) << endl;
    ll.print();
}