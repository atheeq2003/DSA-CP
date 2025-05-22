// 104. Maximum Depth of Binary Tree -> https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
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

// Recursive Approach to find max depth of a BT
int maxDepthRecursive(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    int leftHT = maxDepthRecursive(root->left);
    int rightHT = maxDepthRecursive(root->right);
    return max(leftHT, rightHT)+1;
}

// Iterative Appraoch to find max depth of a BT
int maxDepthIterative(Node* root) {
    if(root == nullptr) return 0;
    queue<Node*> q;
    q.push(root);
    int maxDepth = 0;
    while(!q.empty()) {
        int levelSize = q.size();
        maxDepth++;
        for(int i = 0; i < levelSize; i++) {
            Node* curr = q.front();
            q.pop();
            if(curr->left != nullptr) {
                q.push(curr->left);
            }
            if(curr->right != nullptr) {
                q.push(curr->right);
            }
        }
    }
    return maxDepth;
}

int main() {
    vector<int> treeValues = {3, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};
    Node* root = buildTree(treeValues);
    int maxDepthR = maxDepthRecursive(root);
    int maxDepthI = maxDepthIterative(root);
    cout << maxDepthR << endl;
    cout << maxDepthI << endl;
}