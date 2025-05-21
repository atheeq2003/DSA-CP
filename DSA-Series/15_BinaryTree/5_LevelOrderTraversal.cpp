// 102. Binary Tree Level Order Traversal -> https://leetcode.com/problems/binary-tree-level-order-traversal/description/
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int idx = -1;
Node* buildTree(vector<int> treeValues) {
    idx++;
    if(treeValues[idx] == -1) {
        return nullptr;
    }
    Node* root = new Node(treeValues[idx]);
    root->left = buildTree(treeValues);
    root->right = buildTree(treeValues);
    return root;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(q.size() > 0) {
        Node* curr = q.front();
        q.pop();
        if(curr == nullptr) {
            if(!q.empty()) {
                cout << endl;
                q.push(nullptr);
                continue;
            }
            else {
                break;
            }
        }
        cout << curr->data << " ";
        if(curr->left != nullptr) {
            q.push(curr->left);
        }
        if(curr->right != nullptr) {
            q.push(curr->right);
        }
    }
}

int main() {
    vector<int> treeValues = {3, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};
    Node* root = buildTree(treeValues);
    levelOrderTraversal(root);
}