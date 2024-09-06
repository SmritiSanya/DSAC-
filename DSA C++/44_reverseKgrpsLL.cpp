#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to reverse k nodes of the linked list
Node* kReverse(Node* head, int k) {

    //empty list
    if(head == NULL) {
        return NULL;
    }

    //reversing once    
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    
    while(curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //baaki recursion dekh lega
    if(next != NULL) {
        head->next = kReverse(next, k);
    }
    
    //head of reversed list
    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test kReverse
int main() {
    // Creating a linked list 1->2->3->4->5->6->7->8->9
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    
    int k = 3; // Set the value of k
    cout << "Original List: ";
    printList(head);
    
    head = kReverse(head, k);
    
    cout << "Reversed List in groups of " << k << ": ";
    printList(head);
    
    return 0;
}
