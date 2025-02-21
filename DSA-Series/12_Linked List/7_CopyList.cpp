// 138. Copy List with Random Pointer -> https://leetcode.com/problems/copy-list-with-random-pointer/description/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int val) {
        data = val;
        next = nullptr;
        random = nullptr;
    }
};

class List {
public:
    Node* head;
    Node* tail;
    unordered_map<int, Node*> nodeMap; // To track nodes by value for random pointers

    List() {
        head = tail = nullptr;
    }

    Node* copyRandomList(Node* head) {
        if (head == nullptr) {
            return nullptr;
        }
        unordered_map<Node*, Node*> map;
        Node* newHead = new Node(head->data);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        map[head] = newHead;

        while (oldTemp != nullptr) {
            Node* copyNode = new Node(oldTemp->data);
            newTemp->next = copyNode;
            map[oldTemp] = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;
        while (oldTemp != nullptr) {
            newTemp->random = map[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        return newHead;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        nodeMap[val] = newNode; // Store the node for setting random pointers later
    }

    void set_random(int nodeVal, int randomVal) {
        if (nodeMap.find(nodeVal) != nodeMap.end() && nodeMap.find(randomVal) != nodeMap.end()) {
            nodeMap[nodeVal]->random = nodeMap[randomVal];
        }
    }

    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << "Value: " << temp->data << ", Random: ";
            if (temp->random)
                cout << temp->random->data;
            else
                cout << "NULL";
            cout << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    List ll;
    
    // Creating a linked list with random pointers
    ll.push_back(7);
    ll.push_back(13);
    ll.push_back(11);
    ll.push_back(10);
    ll.push_back(1);

    // Setting up random pointers
    ll.set_random(13, 7);
    ll.set_random(11, 1);
    ll.set_random(10, 11);
    ll.set_random(1, 7);

    cout << "Original List:\n";
    ll.print();

    // Copy the list
    List copiedList;
    copiedList.head = copiedList.copyRandomList(ll.head);

    cout << "Copied List:\n";
    copiedList.print();

    return 0;
}
