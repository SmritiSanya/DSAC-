#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *child;

    // Constructors to initialize the data, next, and child pointers
    Node() : data(0), next(nullptr), child(nullptr) {}
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node *nextNode, Node *childNode) : data(x), next(nextNode), child(childNode) {}
};

// Merge two sorted linked lists into one
Node* mergeLists(Node* first, Node* second) {
    if (!first) return second;
    if (!second) return first;

    if (first->data <= second->data) {
        first->child = mergeLists(first->child, second);
        return first;
    } else {
        second->child = mergeLists(first, second->child);
        return second;
    }
}

// Flatten the linked list
Node* flattenLinkedList(Node* head) {
    if (!head || !head->next)
        return head;

    // Recursively flatten the rest of the list
    head->next = flattenLinkedList(head->next);

    // Merge the current list with the flattened next list
    head = mergeLists(head, head->next);

    return head;
}

// Print the linked list by traversing through child pointers
void printFlattenedLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
}

// Print the original linked list in a grid-like structure
void printOriginalLinkedList(Node* head, int depth) {
    while (head != nullptr) {
        cout << head->data;

        // If child exists, recursively print it with indentation
        if (head->child) {
            cout << " -> ";
            printOriginalLinkedList(head->child, depth + 1);
        }

        // Add vertical bars for each level in the grid
        if (head->next) {
            cout << endl;
            for (int i = 0; i < depth; ++i) {
                cout << "| ";
            }
        }
        head = head->next;
    }
}

int main() {
    // Create a linked list with child pointers
    Node* head = new Node(5);
    head->child = new Node(14);
    
    head->next = new Node(10);
    head->next->child = new Node(4);
    
    head->next->next = new Node(12);
    head->next->next->child = new Node(20);
    head->next->next->child->child = new Node(13);
    
    head->next->next->next = new Node(7);
    head->next->next->next->child = new Node(17);

    // Print the original linked list structure
    cout << "Original linked list:" << endl;
    printOriginalLinkedList(head, 0);

    // Flatten the linked list and print the flattened list
    Node* flattened = flattenLinkedList(head);
    cout << "\nFlattened linked list: ";
    printFlattenedLinkedList(flattened);

    return 0;
}
