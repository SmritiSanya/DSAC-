#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
public:
    vector<int> heap;

    // Function to heapify a subtree with the root at given index
    void heapify(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        // If the left child is larger than the root
        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }

        // If the right child is larger than the largest so far
        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }

        // If the largest is not the root
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapify(largest);  // Recursively heapify the affected subtree
        }
    }

    // Function to build a max heap from an arbitrary array
    void buildHeap() {
        int n = heap.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(i);
        }
    }

    // Function to merge another heap into this heap
    void mergeHeaps(MaxHeap &otherHeap) {
        // Step 1: Combine the two heaps
        for (int val : otherHeap.heap) {
            heap.push_back(val);
        }

        // Step 2: Heapify the combined heap
        buildHeap();
    }

    // Function to print the heap
    void printHeap() {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    // First heap
    MaxHeap heap1;
    heap1.heap = {10, 5, 6, 2};

    // Second heap
    MaxHeap heap2;
    heap2.heap = {9, 7, 8, 3};

    // Build individual heaps (if not already heaps)
    heap1.buildHeap();
    heap2.buildHeap();

    // Merge heap2 into heap1
    heap1.mergeHeaps(heap2);

    // Print the merged heap
    cout << "Merged Heap: ";
    heap1.printHeap();

    return 0;
}
