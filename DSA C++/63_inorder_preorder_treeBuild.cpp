#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void createMapping(int in[], map<int,int>&nodeToIndex,int n){
        for(int i=0;i<n;i++){
            nodeToIndex[in[i]]-i;
        }
    }



    Node* solve(int in[], int pre[], int& index, int inorderStart, int inorderEnd, int n, map<int,int>&nodeToIndex) {
        // Base case
        if (index >= n || inorderStart > inorderEnd) {
            return NULL;
        }

        // Create the current node
        int ele = pre[index++];
        Node* root = new Node(ele);


        // Find the position of the element in inorder array
        int position =nodeToIndex[ele];

        // Recursively construct the left and right subtrees
        root->left = solve(in, pre, index, inorderStart, position - 1, n,nodeToIndex);
        root->right = solve(in, pre, index, position + 1, inorderEnd, n,nodeToIndex);

        return root;
    }

    Node* builtTree(int in[], int pre[], int n) {
        int preorderIndex = 0;
        map<int,int>nodeToIndex;
        createMapping(in,nodeToIndex,n);
        return solve(in, pre, preorderIndex, 0, n - 1, n,nodeToIndex);
    }
};

// Helper function to print inorder traversal of the tree
void printInOrder(Node* node) {
    if (node == NULL) return;
    printInOrder(node->left);
    cout << node->data << " ";
    printInOrder(node->right);
}

int main() {
    Solution sol;
    int inorder[] = {1,6,8,7};
    int preorder[] = {1,6,7,8};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = sol.builtTree(inorder, preorder, n);

    cout << "Inorder traversal of the constructed tree: ";
    printInOrder(root);
    cout << endl;

    return 0;
}
