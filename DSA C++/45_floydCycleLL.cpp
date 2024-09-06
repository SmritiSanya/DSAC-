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

// Function to detect a loop in the linked list
Node* floydDetectLoop(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return slow; // Loop detected, return the meeting point
        }
    }

    return NULL; // No loop detected
}

// Function to create a loop in the linked list for testing
void createLoop(Node* head, int position) {
    if(position == 0) return;

    Node* temp = head;
    Node* loopNode = NULL;

    int count = 1;
    while(temp->next != NULL) {
        if(count == position) {
            loopNode = temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = loopNode; // Creating a loop
}

// Function to print the linked list (for testing)
void printList(Node* head) {
    Node* temp = head;
    for(int i = 0; i < 10 && temp != NULL; i++) { // Print only 10 nodes to avoid infinite loop
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test floydDetectLoop
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
    
    // Creating a loop in the linked list
    createLoop(head, 4); // Loop starting at node with data '4'

    Node* loopNode = floydDetectLoop(head);
    if(loopNode != NULL) {
        cout << "Loop detected at node with data: " << loopNode->data << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
