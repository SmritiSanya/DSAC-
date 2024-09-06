#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

// Function to merge k sorted arrays
vector<int> mergeKSortedArrays(const vector<vector<int>>& arrays) {
    // Priority queue (min-heap) to keep track of the smallest element
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;

    // Vector to store the merged result
    vector<int> result;

    // Initialize the heap with the first element of each array
    for (int i = 0; i < arrays.size(); ++i) {
        if (!arrays[i].empty()) {
            // Push the first element of each array into the heap
            minHeap.push({arrays[i][0], {i, 0}});
        }
    }

    // Process the heap until it's empty
    while (!minHeap.empty()) {
        // Get the smallest element from the heap
        auto top = minHeap.top();
        minHeap.pop();

        // Extract the value and indices
        int value = top.first;
        int arrayIndex = top.second.first;
        int elementIndex = top.second.second;

        // Add the smallest value to the result
        result.push_back(value);

        // If there are more elements in the same array, push the next element into the heap
        if (elementIndex + 1 < arrays[arrayIndex].size()) {
            minHeap.push({arrays[arrayIndex][elementIndex + 1], {arrayIndex, elementIndex + 1}});
        }
    }

    return result;
}

int main() {
    // Define some example sorted arrays
    vector<vector<int>> arrays = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    // Merge the arrays
    vector<int> mergedArray = mergeKSortedArrays(arrays);

    // Print the merged array
    cout << "Merged array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
