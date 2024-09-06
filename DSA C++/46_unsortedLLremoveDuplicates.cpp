#include<iostream>
#include<unordered_set>
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

Node* removeDuplicatesUsingMap(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete curr;
        } else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}


Node* removeDuplicatesUsingTwoPointers(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* curr = head;

    while (curr != NULL) {
        Node* runner = curr;
        while (runner->next != NULL) {
            if (runner->next->data == curr->data) {
                Node* nodeToDel = runner->next;
                runner->next = runner->next->next;
                delete nodeToDel;
            } else {
                runner = runner->next;
            }
        }
        curr = curr->next;
    }
    return head;
}


// Helper function to merge two sorted linked lists
Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;

    if (left->data <= right->data) {
        left->next = merge(left->next, right);
        return left;
    } else {
        right->next = merge(left, right->next);
        return right;
    }
}

// Merge Sort function for linked list
Node* mergeSort(Node* head) {
    if (!head || !head->next) {
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* mid = slow->next;
    slow->next = NULL;

    Node* left = mergeSort(head);
    Node* right = mergeSort(mid);

    return merge(left, right);
}

/*
Node* removeDuplicatesUsingSorting(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    head = mergeSort(head);
    return uniqueSortedLL(head); // Reuse the function from sorted list removal
}
*/


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

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

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

    // Insert some unsorted data into the linked list
    insertAtEnd(head, 4);
    insertAtEnd(head, 3);
    insertAtEnd(head, 3);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 2);
    insertAtEnd(head, 1);

    cout << "Original List: ";
    printList(head);

    // Uncomment the method you want to test

    // Method 1: Using Map (Hash Table)
    // head = removeDuplicatesUsingMap(head);

    // Method 2: Using Two Pointers
     head = removeDuplicatesUsingTwoPointers(head);

    // Method 3: Using Sorting
    //head = removeDuplicatesUsingSorting(head);

    cout << "List after removing duplicates: ";
    printList(head);

    // Deleting the linked list
    deleteList(head);

    return 0;
}
