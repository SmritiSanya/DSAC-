#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum rectangular area under given histogram
int getMaxArea(int hist[], int n) {
    // Create an empty stack to store indices of histogram bars
    stack<int> s;
    int max_area = 0; // Initialize max area
    int tp;           // To store top of stack
    int area_with_top; // To store area with top bar as the smallest bar

    // Iterate through all bars of the histogram
    for (int i = 0; i < n; i++) {
        // While the current bar is smaller than the bar at the top of the stack
        while (!s.empty() && hist[s.top()] > hist[i]) {
            tp = s.top(); // Get the top index
            s.pop(); // Remove the top

            // Calculate the area with hist[tp] as the smallest bar
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

            // Update max_area if needed
            max_area = max(max_area, area_with_top);
        }
        // Push the current index to the stack
        s.push(i);
    }

    // Now pop the remaining bars from the stack and calculate the area
    while (!s.empty()) {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? n : n - s.top() - 1);
        max_area = max(max_area, area_with_top);
    }

    return max_area;
}

// Driver code
int main() {
    int hist[] = { 6, 2, 5, 4, 5, 1, 6 };
    int n = sizeof(hist) / sizeof(hist[0]);

    // Function call to find the maximum area
    cout << "Maximum area is " << getMaxArea(hist, n);
    return 0;
}
