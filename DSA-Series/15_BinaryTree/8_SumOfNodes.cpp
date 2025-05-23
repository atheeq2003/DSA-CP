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

// Recursive Approach to find Sum of nodes in a BT
int sumOfNodesRecursive(Node* root) {
    if(root == nullptr) {
        return 0;
    }
    int leftSum = sumOfNodesRecursive(root->left);
    int rightSum = sumOfNodesRecursive(root->right);
    return leftSum + rightSum + root->data;
}

// Iterative Approach to find Sum of nodes in a BT
int sumOfNodesIterative(Node* root) {
    if(root == nullptr) return 0;
    queue<Node*> q;
    q.push(root);
    int sum = 0;
    while(!q.empty()) {
        int levelSize = q.size();
        for(int i = 0; i < levelSize; i++) {
            Node* curr = q.front();
            sum += curr->data;
            q.pop();
            if(curr->left != nullptr) {
                q.push(curr->left);
            } 
            if(curr->right != nullptr) {
                q.push(curr->right);
            }
        }
    }
    return sum;
}

int main() {
    vector<int> treeValues = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(treeValues);
    int sumR = sumOfNodesRecursive(root);
    cout << sumR << endl;
    int sumI = sumOfNodesIterative(root);
    cout << sumI << endl;
}