#include<bits/stdc++.h>
using namespace std;

//ZIG ZAG TRAVERSAL

/*
vector<vector<int>>zigzagorder(Node* root){
    vector<vector<int>>result;
    if(root==NULL){
        return result;

    }
    queue(Node*)nodesQueue;
    nodesQueue.push(root);

    bool leftToright=true;

    while(!nodesQueue.empty()){
        int size=nodesQueue.size();
        vector<int>row(size);
    }
    for(int i=0;i<size;i++){
        Node* node=nodesQueue.front();
        nodesQueue.pop();

        int index=leftToright?i:(size-i-1);

        row[index]=node->data;

        if(node->left){
            nodesQueue.push(node->left);
        }
        if(node->right){
            nodesQueue.push(node->right);
        }
        leftToright=!leftToRight;

        result.push_back(row);

    }
    return result;

}

*/

//QUESTION: Boundary traversal

/*
// Function to check
    // if a node is a leaf
    bool isLeaf(Node* root) {
        return !root->left && !root->right;
    }

    // Function to add the
    // left boundary of the tree
    void addLeftBoundary(Node* root, vector<int>& res) {
        Node* curr = root->left;
        while (curr) {
            // If the current node is not a leaf,
            // add its value to the result
            if (!isLeaf(curr)) {
                res.push_back(curr->data);
            }
            // Move to the left child if it exists,
            // otherwise move to the right child
            if (curr->left) {
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }
    }

    // Function to add the
    // right boundary of the tree
    void addRightBoundary(Node* root, vector<int>& res) {
        Node* curr = root->right;
        vector<int> temp;
        while (curr) {
            // If the current node is not a leaf,
            // add its value to a temporary vector
            if (!isLeaf(curr)) {
                temp.push_back(curr->data);
            }
            // Move to the right child if it exists,
            // otherwise move to the left child
            if (curr->right) {
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }
        // Reverse and add the values from
        // the temporary vector to the result
        for (int i = temp.size() - 1; i >= 0; --i) {
            res.push_back(temp[i]);
        }
    }

    // Function to add the
    // leaves of the tree
    void addLeaves(Node* root, vector<int>& res) {
        // If the current node is a
        // leaf, add its value to the result
        if (isLeaf(root)) {
            res.push_back(root->data);
            return;
        }
        // Recursively add leaves of
        // the left and right subtrees
        if (root->left) {
            addLeaves(root->left, res);
        }
        if (root->right) {
            addLeaves(root->right, res);
        }
    }

    // Main function to perform the
    // boundary traversal of the binary tree
    vector<int> printBoundary(Node* root) {
        vector<int> res;
        if (!root) {
            return res;
        }
        // If the root is not a leaf,
        // add its value to the result
        if (!isLeaf(root)) {
            res.push_back(root->data);
        }

        // Add the left boundary, leaves,
        // and right boundary in order
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);

        return res;
    }



*/


//Vertical order traversal


/*
vector<int> verticalOrder(Node *root){

    //step 1
    map<int,map<int,vecto<int>>> nodes;
    queue<pair<Node*,pair<int,int>>> q;
    vector<int> ans;

    //step 2
    if(root==NULL){
        return ans;
    }
    q.push(make_pair(root,make_pair(0,0)));

    //step 3
    while(!q.empty()) {
    pair<Node*, pair<int, int>> temp = q.front();
    q.pop();
    Node* frontNode = temp.first;
    int hd = temp.second.first;
    int lvl = temp.second.second;
    
    nodes[hd][lvl].push_back(frontNode->data);
    
    if(frontNode->left)
        q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
        
    if(frontNode->right)
        q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
    }

    //step 4
    for(auto i: nodes) {
    for(auto j: i.second) {
        for(auto k: j.second) {
            ans.push_back(k);
            }
        }
    }

    //step 5
    return ans;

}
*/

//TOP VIEW
/*

vector<int> topView(Node *root)
{
    vector<int> ans;
    if(root == NULL) 
    {
        return ans;
    }
    
    map<int, int> topNode;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root, 0));

    while(!q.empty()) {
    pair<Node*, int> temp = q.front();
    q.pop();
    Node* frontNode = temp.first;
    int hd = temp.second;
    

    //only if it hasnt seen before
    if(topNode.find(hd) == topNode.end())
        topNode[hd] = frontNode->data;
        
    if(frontNode->left)
        q.push(make_pair(frontNode->left, hd - 1));
    if(frontNode->right)
        q.push(make_pair(frontNode->right, hd + 1));
    }

    for(auto i: topNode) 
    {
        ans.push_back(i.second);
    }   
    return ans;



*/


//BOTTOM VIEW

/*
vector<int> bottomView(Node *root) {
    vector<int> ans;
    if(root == NULL) {
        return ans;
    }
    
    map<int, int> topNode;
    queue<pair<Node*, int>> q;
    
    q.push(make_pair(root, 0));


while(!q.empty()) {
    pair<Node*, int> temp = q.front();
    q.pop();
    Node* frontNode = temp.first;
    int hd = temp.second;
    
    topNode[hd] = frontNode->data;
        
    if(frontNode->left)
        q.push(make_pair(frontNode->left, hd - 1));
    if(frontNode->right)
        q.push(make_pair(frontNode->right, hd + 1));
}

for(auto i: topNode) {
    ans.push_back(i.second);
}
return ans;


*/



//RIGHT AND LEFT VIEW

/*
#include <vector>
using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Recursive function to solve for left or right view
void solve(Node* root, vector<int> &ans, int level, bool isLeftView) {
    // Base case
    if (root == NULL)
        return;
       
    // We entered into a new level
    if (level == ans.size())
        ans.push_back(root->data);
        
    // Traverse the tree based on the view type
    if (isLeftView) {
        // For left view: process left subtree before right subtree
        solve(root->left, ans, level + 1, isLeftView);
        solve(root->right, ans, level + 1, isLeftView);
    } else {
        // For right view: process right subtree before left subtree
        solve(root->right, ans, level + 1, isLeftView);
        solve(root->left, ans, level + 1, isLeftView);
    }
}

// Function to return the left view of the binary tree
vector<int> leftView(Node *root) {
    vector<int> ans;
    solve(root, ans, 0, true); // Pass true for left view
    return ans;
}

// Function to return the right view of the binary tree
vector<int> rightView(Node *root) {
    vector<int> ans;
    solve(root, ans, 0, false); // Pass false for right view
    return ans;
}




*/