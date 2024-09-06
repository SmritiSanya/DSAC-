#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int item) : data(item), left(nullptr), right(nullptr) {}
};

void inorder(Node* root,vector<int> &in ){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}


bool twoSum(Node* root, int target){
    vector<int> inorderval;
    inorder(root,inorderval);
    
    int i=0;
    int j=inorderval.size()-1;
    while(i<j){
        int sum=inorderval[i]+inorderval[j];
        if(sum==target){
            return true; 
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}