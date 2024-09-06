#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int item) : data(item), left(nullptr), right(nullptr) {}
};

void inorder(Node* root, vector<int> &in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

Node* flattenBST(Node* root){
    vector<int> inorderval;
    inorder(root,inorderval);
    Node* newRoot= new Node(inorderval[0]);
    Node* curr=newRoot;
    for(int i=1;i<inorderval.size();i++){
        Node* temp=new Node(inorderval[i]);
        curr->left=NULL;
        curr->right=temp;
    }
    curr->left=NULL;
    curr->right=NULL;

    return newRoot;
}