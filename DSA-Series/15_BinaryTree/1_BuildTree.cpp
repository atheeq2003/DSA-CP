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
Node* buildTree(vector<int> preOrderSeq) {
    idx++;
    if(preOrderSeq[idx] == -1) {
        return nullptr;
    }
    Node* root = new Node(preOrderSeq[idx]);
    root->left = buildTree(preOrderSeq); 
    root->right = buildTree(preOrderSeq);
    return root;
}

int main() {
    vector<int> preOrderSeq = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preOrderSeq);
}