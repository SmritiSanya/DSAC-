#include <bits/stdc++.h>
using namespace std;

int signum(int a, int b) {
    if (a == b)
        return 0;
    else if (a > b)
        return 1;
    else
        return -1;
}

void callMedian(int num, priority_queue<int>& maxHeap, priority_queue<int, vector<int>, greater<int>>& minHeap, int& median) {
    switch (signum(maxHeap.size(), minHeap.size())) {
        case 0: // Both heaps have the same number of elements
            if (num > median) {
                minHeap.push(num);
                median = minHeap.top();
            } else {
                maxHeap.push(num);
                median = maxHeap.top();
            }
            break;
        
        case 1: // maxHeap has more elements than minHeap
            if (num > median) {
                minHeap.push(num);
            } else {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(num);
            }
            median = (maxHeap.top() + minHeap.top()) / 2;
            break;
        
        case -1: // minHeap has more elements than maxHeap
            if (num > median) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(num);
            } else {
                maxHeap.push(num);
            }
            median = (maxHeap.top() + minHeap.top()) / 2;
            break;
    }
}

vector<int> findMedian(vector<int>& arr, int n) {
    vector<int> ans;
    priority_queue<int> maxHeap; // Max heap for the smaller half
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min heap for the larger half
    int median = -1;
    
    for (int i = 0; i < n; i++) {
        callMedian(arr[i], maxHeap, minHeap, median);
        ans.push_back(median);
    }
    
    return ans;
}

int main() {
    vector<int> arr = {5, 15, 1, 3};
    int n = arr.size();
    
    vector<int> result = findMedian(arr, n);
    
    for (int med : result) {
        cout << med << " ";
    }
    
    return 0;
}
