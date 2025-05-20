// 144. Binary Tree Preorder Traversal -> https://leetcode.com/problems/binary-tree-preorder-traversal/
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
Node* buildTree(vector<int> TreeValues) {
    idx++;
    if(TreeValues[idx] == -1) {
        return nullptr;
    }
    Node* root = new Node(TreeValues[idx]);
    root->left = buildTree(TreeValues);
    root->right = buildTree(TreeValues);
    return root;
}

void preOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main() {
    vector<int> TreeValues = {1, -1, 2, 3, -1, -1, -1};
    Node* root = buildTree(TreeValues);
    preOrderTraversal(root);
}