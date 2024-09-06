#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int minCostOfRopes(vector<int>& ropes) {
    // Create a min-heap (priority queue)
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Push all rope lengths into the min-heap
    for (int rope : ropes) {
        minHeap.push(rope);
    }

    int totalCost = 0;

    // Continue until there is only one rope left in the heap
    while (minHeap.size() > 1) {
        // Extract the two smallest ropes
        int first = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();

        // Connect the two ropes
        int cost = first + second;
        totalCost += cost;

        // Push the resulting rope back into the heap
        minHeap.push(cost);
    }

    return totalCost;
}

int main() {
    vector<int> ropes = {4, 3, 2, 6};
    int result = minCostOfRopes(ropes);
    cout << "The minimum cost to connect all ropes is: " << result << endl;
    return 0;
}
