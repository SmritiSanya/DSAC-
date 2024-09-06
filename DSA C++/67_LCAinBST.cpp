#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int item) : data(item),  left(nullptr), right(nullptr) {}
};

Node* lca(Node* root ,Node<int> n1 , Node<int> n2 ){
    if(root==NULL)
        return NULL;
    
    if(root->data< n1->data  && root->data < n2->data){
        return lca(root->right,n1,n2);
    }
    if(root->data> n1->data  && root->data > n2->data){
        return lca(root->left,n1,n2);
    }

    return root;
    
}