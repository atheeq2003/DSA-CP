// 572. Subtree of Another Tree -> https://leetcode.com/problems/subtree-of-another-tree/description/
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

bool isIdentical(Node* root, Node* subroot) {
    if(root == nullptr || subroot == nullptr) {
        return root == subroot;
    }
    bool left = isIdentical(root->left, subroot->left);
    bool right = isIdentical(root->right, subroot->right);
    return left && right && root->data == subroot->data;
}

bool isSubtree(Node* root, Node* subroot) {
    if(root == nullptr || subroot == nullptr) {
        return root == subroot;
    }
    if(root->data == subroot->data && isIdentical(root, subroot)) {
        return true;
    }
    return isSubtree(root->left, subroot) || isSubtree(root->right, subroot); 
}

int main() {
    vector<int> treeValues = {3,4,1,-1,-1,2,0,-1,-1,-1,5,-1,-1};
    vector<int> subtreeValues = {4,1,-1,-1,2,-1,-1};
    idx = -1;
    Node* root = buildTree(treeValues);
    idx = -1;
    Node* subroot = buildTree(subtreeValues);
    cout << isSubtree(root, subroot) << endl; 
}