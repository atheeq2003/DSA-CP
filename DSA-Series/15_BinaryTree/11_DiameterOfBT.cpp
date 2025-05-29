// 543. Diameter of Binary Tree -> https://leetcode.com/problems/diameter-of-binary-tree/description/
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

int ans = 0;
int height(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    ans = max(leftHt + rightHt, ans);
    return max(leftHt, rightHt) + 1;
}

int diameterOfBinaryTree(Node* root) {
    height(root);
    return ans;
}

int main() {
    vector<int> treeValues = {1,2,-1,-1,-1,-1};
    Node* root = buildTree(treeValues);
    cout << diameterOfBinaryTree(root) << endl;
}