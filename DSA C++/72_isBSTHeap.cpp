#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to count the number of nodes
int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Function to check if the binary tree is a complete binary tree
bool isComplete(Node* root, int index, int totalNodes) {
    if (root == NULL) return true;
    if (index >= totalNodes) return false;

    return isComplete(root->left, 2 * index + 1, totalNodes) &&
           isComplete(root->right, 2 * index + 2, totalNodes);
}

// Function to check if the binary tree satisfies the heap property
bool isHeapProperty(Node* root) {
    if (root == NULL) return true;

    // Leaf nodes are always heap
    if (root->left == NULL && root->right == NULL) return true;

    // If there is only left child
    if (root->right == NULL) {
        return root->data >= root->left->data && isHeapProperty(root->left);
    }

    // If there are both children
    else {
        return (root->data >= root->left->data &&
                root->data >= root->right->data &&
                isHeapProperty(root->left) &&
                isHeapProperty(root->right));
    }
}

// Main function to check if the binary tree is a heap
bool isHeap(Node* root) {
    int totalNodes = countNodes(root);
    return isComplete(root, 0, totalNodes) && isHeapProperty(root);
}

int main() {
    // Example binary tree (Max-Heap)
    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);
    root->right->right = new Node(4);

    if (isHeap(root)) {
        cout << "The binary tree is a heap" << endl;
    } else {
        cout << "The binary tree is not a heap" << endl;
    }

    return 0;
}
