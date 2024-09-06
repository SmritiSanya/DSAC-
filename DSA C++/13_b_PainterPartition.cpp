#include <iostream>
using namespace std;

// Helper function to check if it's possible to paint all boards with k painters
bool isPossible(int boards[], int n, int k, int mid) {
    int painterCount = 1;
    int totalTime = 0;

    for (int i = 0; i < n; i++) {
        if (totalTime + boards[i] <= mid) {
            totalTime += boards[i];
        } else {
            painterCount++;
            if (painterCount > k || boards[i] > mid) {
                return false;
            }
            totalTime = boards[i];
        }
    }

    return true;
}

// Main function to find the minimum possible maximum time
int findLargestMinDistance(int boards[], int n, int k) {
    // Find the maximum board length and the total sum of all boards
    int maxBoardLength = boards[0];
    int totalSum = boards[0];
    
    for (int i = 1; i < n; i++) {
        if (boards[i] > maxBoardLength) {
            maxBoardLength = boards[i];
        }
        totalSum += boards[i];
    }

    int start = maxBoardLength;
    int end = totalSum;
    int ans = -1;

    // Binary search to find the minimum possible maximum time
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(boards, n, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

// Main function for testing
int main() {
    int boards1[] = {2, 1, 5, 6, 2, 3};
    int n1 = sizeof(boards1) / sizeof(boards1[0]);
    int k1 = 2;
    cout << "Minimum time for boards1: " << findLargestMinDistance(boards1, n1, k1) << endl;  // Output: 11

    return 0;
}
