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
    
    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

Node* solve(Node* first, Node* second) {
    // if only one element is present in the first list
    if (first->next == NULL) {
        first->next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL) {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            // add node in between the first list
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // update
            curr1 = curr2;
            curr2 = next2;
        } else {
            // move curr1 and next1 forward
            curr1 = next1;
            next1 = next1->next;

            if (next1 == NULL) {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* sortTwoLists(Node* first, Node* second) {
    if (first == NULL)
        return second;

    if (second == NULL)
        return first;

    if (first->data <= second->data) {
        return solve(first, second);
    } else {
        return solve(second, first);
    }
}

int main() {
    // Example usage
    Node* first = new Node(1);
    first->next = new Node(3);
    first->next->next = new Node(5);

    Node* second = new Node(2);
    second->next = new Node(4);
    second->next->next = new Node(6);

    Node* result = sortTwoLists(first, second);

    // Print the sorted list
    Node* temp = result;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Clean up memory
    delete result;

    return 0;
}
