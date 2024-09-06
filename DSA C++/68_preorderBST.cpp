#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* solve(vector<int> &preorder, int mini, int maxi, int &i){
    //base case
    if(i>=preorder.size()){
        return NULL;
    }
    if(preorder[i]<NULL || preorder[i]>maxi){
        return NULL;
    }
    Node* root=new Node(preorder[i++]);
    root->left=solve(preorder,mini,root->data,i);
    root->right=solve(preorder,root->data,maxi,i);
    return root;
}

Node* preorderBST(vector<int>&preorder){
    int mini=INT_MIN;
    int maxi=INT_MAX;
    int i=0;
    return solve(preorder,mini,maxi,i);
}

