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

Node* inorderBST(int s, int e,vector<int>inorderval){
    //base case
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;
    Node* root=new Node(inorderval[mid]);
    root->left=inorderBST(s,mid-1,inorderval);
    root->right=inorderBST(mid+1,e,inorderval);
    return root;
    
}

Node* balancedBST(Node* root){
    vector <int> inorderval;
    inorder(root,inorderval);
    return inorderBST(0,inorderval.size()-1,inorderval);
}