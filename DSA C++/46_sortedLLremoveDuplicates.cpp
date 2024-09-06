#include<iostream>
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

Node* uniqueSortedLL(Node* head) {
    // Empty list
    if (head == NULL) {
        return NULL;
    }

    // Non-empty list
    Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node* next_next = curr->next->next;
            Node* nodeToDel = curr->next;
            delete nodeToDel;
            curr->next = next_next;
        } else {
            curr = curr->next;
        }
    }
    return head;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to delete the entire linked list to free memory
void deleteList(Node*& head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = NULL;

    // Inserting data into the linked list
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 3);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    cout << "Original List: ";
    printList(head);

    head = uniqueSortedLL(head);

    cout << "List after removing duplicates: ";
    printList(head);

    // Deleting the linked list
    deleteList(head);

    return 0;
}
