#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//Approach 1: iterative solution
//Time complexity: O(n) where n is the number of nodes
//Space complexity: O(1)
Node* reverseLLitr(Node * head){

    //empty list and single node list
    if(head==NULL || head-> next==NULL){
        return head;
    }

    Node* curr=head;
    Node* prev=NULL;
    Node* fwd= NULL;

    while(curr!=NULL){
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    return prev;
}

//recursive approach
void reverse(Node*head, Node* curr, Node* prev){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }
    Node* fwd=curr->next;
    reverse(head,fwd,curr);
    curr->next=prev;
}

Node* reverseLL(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    reverse(head,curr,prev);
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);

    // Reversing the linked list using iterative approach
    head = reverseLLitr(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}