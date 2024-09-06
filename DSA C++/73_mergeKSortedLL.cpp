#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for singly-linked list node.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Compare function for the min-heap (priority queue).
struct compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val; // Min-heap: smallest value at the top
    }
};

// Function to merge k sorted linked lists using a min-heap
ListNode* mergeKLists(vector<ListNode*>& lists) {
    // Min-heap to store the current smallest nodes
    priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

    // Step 1: Push the head of each linked list into the min-heap
    for (ListNode* list : lists) {
        if (list != nullptr) {  // Ensure the list is not empty
            minHeap.push(list);
        }
    }

    // Dummy node to help with linked list construction
    ListNode* dummyHead = new ListNode(0);
    ListNode* current = dummyHead;

    // Step 2: Process the heap
    while (!minHeap.empty()) {
        // Get the smallest node from the heap
        ListNode* smallest = minHeap.top();
        minHeap.pop();

        // Add the smallest node to the result list
        current->next = smallest;
        current = current->next;

        // If the extracted node has a next node, push it to the heap
        if (smallest->next != nullptr) {
            minHeap.push(smallest->next);
        }
    }

    // Return the head of the merged linked list (skip dummy node)
    return dummyHead->next;
}

// Function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create example linked lists
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(7);

    ListNode* l2 = new ListNode(2);
    l2->next = new ListNode(5);
    l2->next->next = new ListNode(8);

    ListNode* l3 = new ListNode(3);
    l3->next = new ListNode(6);
    l3->next->next = new ListNode(9);

    // Add lists to the vector
    vector<ListNode*> lists = {l1, l2, l3};

    // Merge the k sorted lists
    ListNode* mergedList = mergeKLists(lists);

    // Print the merged list
    cout << "Merged list: ";
    printList(mergedList);

    return 0;
}
