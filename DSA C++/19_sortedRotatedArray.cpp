#include<iostream>
#include<vector>

using namespace std;

bool isSortedRotatedArray(vector<int> arr) {
    int count = 0;
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        if (arr[i-1] > arr[i]) {
            count++;
        }
    }
    if (arr[n-1] > arr[0]) {
        count++;
    }
    
    return count <= 1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    bool result = isSortedRotatedArray(arr);
    
    if (result) {
        cout << "It is a sorted or rotated array" << endl;
    } else {
        cout << "It is neither sorted nor rotated array" << endl;
    }
}
