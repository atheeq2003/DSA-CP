// 100. Same Tree -> https://leetcode.com/problems/same-tree/description/
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

bool isSameTree(Node* p, Node* q) {
    if(p == nullptr || q == nullptr) {
        return p == q;
    }
    bool left = isSameTree(p->left, q->left);
    bool right = isSameTree(p->right, q->right);
    return left && right && p->data == q->data;
}

int main() {
    vector<int> treeValues1 = {1, 2, -1, -1, 1, -1, -1};
    vector<int> treeValues2 = {1, 1, -1, -1, 2, -1, -1};
    idx = -1;
    Node* p = buildTree(treeValues1);
    idx = -1;
    Node* q = buildTree(treeValues2);
    cout << isSameTree(p, q) << endl;
}