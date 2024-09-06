#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node* next;

    Node(int d){
        this->data=data;
        left=NULL;
        right=NULL;
        next=NULL;
    }
};


//approach 1
//step 1
/*
void inorder(Node* root, vector<int>&inorderval){
    if(root==NULL)
        return;
    inorder(root->left,inorderval);
    inorderval.push_back(root->data);
    inorder(root->right,inorderval);
}
*/


//step 2
/*
vector<int> mergeArray(vector<int> &a, vector<int> &b){
    vector<int>ans(a.size()+b.size());
    int i=0,j=0,k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++]=a[i];
            i++;
        }
        else{
            ans[k++]=b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++]=a[i];
        i++;
    }

    while(i<b.size()){
        ans[k++]=b[j];
        j++;
    }
    return ans;
}

//step 3: approach 1
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
*/

//step 1:bst to sorted ll

void convertIntoDLL(Node* root, Node* head){
    //base case
    if(root==NULL){
        return;
    }
    convertIntoDLL(root->right,head);
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertIntoDLL(root->left,head);
}

//merge 2 sorted ll
Node* mergeLL(Node* head1,Node* head2){
    Node* head=NULL;
    Node* tail=NULL;

    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;

            }
        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head1=head1->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head1->right;

            }

        }
    }
    while(head1!=NULL){
        tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
    }
    while(head2!=NULL){
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head1->right;
    }
    return head;

}

//sorted LL to BST

int cnt(Node*head){
    int count=0;
    Node* temp=head;
    while (temp!=NULL){
        count++;
        temp=temp->right;
    }
    return count;
}

Node* sortedLLtoBST(Node* &head, int n){
    //base case
    if(n<=0 ||head==NULL){
        return NULL;
    }
    Node* left=sortedLLtoBST(head,n/2);
    Node* root=head;
    root->left=left;

    head=head->next;
    root->right=sortedLLtoBST(head,n-n/2-1);
    return root;

}


Node* mergeBST(Node* root1, Node*root2){
    //approach 1
    // vector<int>bst1,bst2;
    // inorder(root1,bst1);
    // inorder(root2,bst2);

    // vector<int> array=mergeArray(bst1,bst2);
    // int s=0,e=array.size()-1;
    // return inorderBST(s,e,array);


    //appraoach 2
    //step 1: convert bst into sorted dll in-place
    Node* head1=NULL;
    convertIntoDLL(root1,head1);
    head1->left=NULL;

    Node* head2=NULL;
    convertIntoDLL(root2,head2);
    head2->left=NULL;

    //step2: merge sorted LL
    Node* head=mergeLL(head1,head2);

    //step3: convert sll into bst
    return sortedLLtoBST(head,cnt(head));




};
