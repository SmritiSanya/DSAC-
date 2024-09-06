#include <iostream>
#include <vector>

using namespace std;

// A binary tree node has data, left and right pointers
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to perform the inorder traversal of the BST and store the nodes in an array
void inorderTraversal(Node* root, vector<int>& arr) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left, arr);   // Traverse the left subtree
    arr.push_back(root->data);           // Store the root's data
    inorderTraversal(root->right, arr);  // Traverse the right subtree
}

// Function to perform preorder traversal of the binary tree and
// assign values to nodes from the array (which is in sorted order)
void preorderTraversalToMinHeap(Node* root, vector<int>& arr, int& index) {
    if (root == nullptr)
        return;

    // Assign value from the array to the current node
    root->data = arr[index];
    index++;

    // Traverse left and right subtrees
    preorderTraversalToMinHeap(root->left, arr, index);
    preorderTraversalToMinHeap(root->right, arr, index);
}

// Function to convert BST to Min Heap
void convertBSTToMinHeap(Node* root) {
    vector<int> arr;

    // Step 1: Perform inorder traversal of the BST and store the values in an array
    inorderTraversal(root, arr);

    // Step 2: Convert BST to Min Heap by doing preorder traversal and assigning values
    int index = 0;
    preorderTraversalToMinHeap(root, arr, index);
}

// Utility function to print the preorder traversal of the tree
void preorder(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Creating a simple Binary Search Tree (BST)
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    cout << "Preorder traversal of the original BST: ";
    preorder(root);
    cout << endl;

    // Convert BST to Min Heap
    convertBSTToMinHeap(root);

    cout << "Preorder traversal of the converted Min Heap: ";
    preorder(root);
    cout << endl;

    return 0;
}
