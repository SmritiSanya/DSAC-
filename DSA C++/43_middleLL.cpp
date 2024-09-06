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

//approach 1

int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

Node* middle(Node* head){
    int len=getLength(head);
    int mid=len/2;
    Node* temp=head;
    int cnt=0;
    while(cnt<mid){
        temp=temp->next;
        cnt++;
    }
    return temp;
}

//approach 2
Node* getMiddle(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }

    //2 nodes neede or not?
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printList(head);

    //Node* midNode = getMiddle(head);
    Node* midNode = middle(head);
    cout << "Middle Node: " << midNode->data << endl;

    return 0;
}
