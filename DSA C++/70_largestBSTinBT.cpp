#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int data) {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};

int maxVal (Node* root) {
	int ans = INT_MIN;
	if(root->left != NULL) {
		ans = max(ans, maxVal(root->left));
	}
	ans = max(ans, root->data);
	if(root->right != NULL) {
		ans = max(ans, maxVal(root->right));
	}
	return ans;
}
int minVal (Node* root) {
	int ans = INT_MAX;
	if(root->left != NULL) {
		ans = min(ans, minVal(root->left));
	}
	ans = min(ans, root->data);
	if(root->right != NULL) {
		ans = min(ans, minVal(root->right));
	}
	return ans;
}
bool isBst(Node* root) {
    if (root == NULL) {
		return true;
	}
	if (root->left != NULL && maxVal(root->left) >= root->data) {
		return false;
	}
	if (root->right != NULL && minVal(root->right) <= root->data) {
		return false;
	}
	if (isBst(root->left) == false || isBst(root->right) == false) {
		return false;
	}
	return true;
}
int bstSize;
int getSize(Node* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + getSize(root->left) + getSize(root->right);
}
int getLargestBstSize(Node* root) {
    if (isBst(root)) {
		bstSize = 0;
		return getSize(root);
	}
	return max(getLargestBstSize(root->left), getLargestBstSize(root->right));
}