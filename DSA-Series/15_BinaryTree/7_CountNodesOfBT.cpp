// 222. Count Complete Tree Nodes -> https://leetcode.com/problems/count-complete-tree-nodes/description/
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
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

// Recursive Approach to find count of nodes in a BT
int countNodesRecursive(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    int countLeft = countNodesRecursive(root->left);
    int countRight = countNodesRecursive(root->right);
    return countLeft+countRight+1;
}

// Iterative Approach to find count of nodes in a BT
int countNodesIterative(Node* root) {
    if(root == nullptr) return 0;
    queue<Node*> q;
    q.push(root);
    int count = 0;
    while(!q.empty()) {
        int levelSize = q.size();
        for(int i = 0; i < levelSize; i++) {
            count++;
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
    return count;
}

int main() {
    vector<int> treeValues = {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,-1};
    Node* root = buildTree(treeValues);
    int nodesR = countNodesRecursive(root);
    int nodesI = countNodesIterative(root);
    cout << nodesR << endl;
    cout << nodesI << endl;
}