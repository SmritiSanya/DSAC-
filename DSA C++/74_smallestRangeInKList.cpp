#include <iostream>
#include <queue>
#include <vector>
#include <limits.h>  // For INT_MAX and INT_MIN

using namespace std;

pair<int, int> findSmallestRange(vector<vector<int>>& arrays) {
    int k = arrays.size();  // Number of arrays
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    int maxElement = INT_MIN;
    int minRange = INT_MAX;
    int start = 0, end = 0;

    // Step 1: Push the first element of each array into the priority queue
    for (int i = 0; i < k; ++i) {
        int element = arrays[i][0];
        pq.push({element, {i, 0}});
        maxElement = max(maxElement, element);  // Track the maximum element
    }

    // Step 2: Process the priority queue
    while (!pq.empty()) {
        // Get the smallest element from the priority queue
        auto current = pq.top();
        pq.pop();
        int minElement = current.first;
        int row = current.second.first;
        int col = current.second.second;

        // Update the range if it's smaller than the previous range
        if (maxElement - minElement < minRange) {
            minRange = maxElement - minElement;
            start = minElement;
            end = maxElement;
        }

        // Move to the next element in the same row (same array)
        if (col + 1 < arrays[row].size()) {
            int nextElement = arrays[row][col + 1];
            pq.push({nextElement, {row, col + 1}});

            // Update the maximum element
            maxElement = max(maxElement, nextElement);
        } else {
            // If we reach the end of any array, we cannot form a complete range
            break;
        }
    }

    return {start, end};
}

int main() {
    vector<vector<int>> arrays = {
        {4, 10, 15, 24, 26},
        {0, 9, 12, 20},
        {5, 18, 22, 30}
    };

    pair<int, int> result = findSmallestRange(arrays);
    cout << "The smallest range is: [" << result.first << ", " << result.second << "]" << endl;

    return 0;
}
