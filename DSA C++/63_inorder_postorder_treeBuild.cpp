#include <iostream>
#include <map>
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
    void createMapping(int in[], map<int, int>& nodeToIndex, int n) {
        for (int i = 0; i < n; i++) {
            nodeToIndex[in[i]] = i;
        }
    }

    Node* solve(int in[], int post[], int& postIndex, int inorderStart, int inorderEnd, int n, map<int, int>& nodeToIndex) {
        // Base case
        if (postIndex < 0 || inorderStart > inorderEnd) {
            return NULL;
        }

        // The current node is the last element in postorder array
        int ele = post[postIndex--];
        Node* root = new Node(ele);

        // Find the position of the element in inorder array
        int position = nodeToIndex[ele];

        // Recursively construct the right and left subtrees
        // Note that we construct the right subtree before the left subtree
        root->right = solve(in, post, postIndex, position + 1, inorderEnd, n, nodeToIndex);
        root->left = solve(in, post, postIndex, inorderStart, position - 1, n, nodeToIndex);

        return root;
    }

    Node* builtTree(int in[], int post[], int n) {
        int postIndex = n - 1;
        map<int, int> nodeToIndex;
        createMapping(in, nodeToIndex, n);
        return solve(in, post, postIndex, 0, n - 1, n, nodeToIndex);
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
    int inorder[] = {1, 6, 7, 8};
    int postorder[] = {6, 8, 7, 1};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = sol.builtTree(inorder, postorder, n);

    cout << "Inorder traversal of the constructed tree: ";
    printInOrder(root);
    cout << endl;

    return 0;
}
