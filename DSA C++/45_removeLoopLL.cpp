#include <iostream>
using namespace std;

// Definition for singly-linked list node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to detect loop using Floyd's cycle-finding algorithm
Node* floydDetectLoop(Node* head) {
    if(head == NULL)
        return NULL;

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

// Function to find the starting node of the loop
Node* getStartingNode(Node* head) {
    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }  
    return slow; // This is the starting node of the loop
}

// Function to remove the loop from the linked list
Node *removeLoop(Node *head) {
    if(head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head; // No loop present
    
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop) {
        temp = temp->next;
    } 

    temp->next = NULL; // Break the loop
    return head;
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

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test the removeLoop function
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
    createLoop(head, 4); // Loop starts at node with data '4'

    //cout << "Original List (with loop): ";
    //printList(head); // This may not work correctly due to the loop
    //the above oriting will go on forever due to loop
    
    // Detect and remove the loop
    head = removeLoop(head);

    cout << "List after removing loop: ";
    printList(head); // The list should now be properly printed without any loop

    return 0;
}
