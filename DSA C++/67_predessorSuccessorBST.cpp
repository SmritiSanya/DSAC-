#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int item) : key(item), left(nullptr), right(nullptr) {}
};

Node* minVal(Node* root){
        Node* temp=root;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        return temp;
    }

Node* maxVal(Node* root){
        Node* temp=root;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        return temp;
    }

void find(Node* root, Node*& pre, Node*& suc, int key){
    //step 1: find key
    Node* curr=root;
    while(curr!=NULL){
        if(curr->key<key){
            pre=curr;
            curr=curr->right;
        }
        else if(curr->key>key){
            suc=curr;
            curr=curr->left;
        }
        else{
            //predessor
            if(curr->left!=NULL){
                pre=maxVal(curr->left);
            }

            //successor
            if(curr->right!=NULL){
                suc=minVal(curr->right);
            }
            break;
        }
    }
}


Node* insert(Node* node, int key)
{
    if (node == nullptr) return new Node(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}


// Driver code to test the above function
int main()
{
    int key = 65;    // Key to be searched in BST

    /* Let us create the following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    Node *root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    Node* pre = nullptr;
    Node* suc = nullptr;

    find(root, pre, suc, key);

    if (pre != nullptr)
        cout << "Predecessor is " << pre->key << endl;
    else
        cout << "No Predecessor" << endl;

    if (suc != nullptr)
        cout << "Successor is " << suc->key << endl;
    else
        cout << "No Successor" << endl;

    return 0;
}