#include <iostream>
#include <algorithm>
using namespace std;

// Helper function to check if it is possible to place cows with at least 'minDist' distance
bool isPossible(int stalls[], int n, int cows, int minDist) {//minDist is basically mid
    int count = 1; // Place the first cow in the first stall
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= minDist) {
            count++; // Place another cow
            lastPos = stalls[i]; // Update the position of the last placed cow

            if (count == cows) {
                return true; // All cows are placed with at least 'minDist' distance
            }
        }
    }
    return false;
}

// Main function to find the largest minimum distance
int findLargestMinDistance(int stalls[], int n, int cows) {
    sort(stalls, stalls + n); // Sort the stalls

    int start = 0;
    int end = stalls[n-1] - stalls[0];
    int ans = 0;

    // Binary search to find the maximum possible minimum distance
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(stalls, n, cows, mid)) {
            ans = mid; // Update the answer
            start = mid + 1; // Try for a larger minimum distance
        } else {
            end = mid - 1; // Try for a smaller minimum distance
        }
    }

    return ans;
}

// Main function for testing
int main() {
    int stalls[] = {1, 2, 8, 4, 9};
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int cows = 3;
    cout << "Largest minimum distance: " << findLargestMinDistance(stalls, n, cows) << endl;  // Output: 3

    return 0;
}
