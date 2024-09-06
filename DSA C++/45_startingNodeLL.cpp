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

#include <iostream>
using namespace std;

// Node class, floydDetectLoop, and getStartingNode functions are defined above

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

// Main function to test getStartingNode
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

    Node* loopStart = getStartingNode(head);
    if(loopStart != NULL) {
        cout << "Loop starts at node with data: " << loopStart->data << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
