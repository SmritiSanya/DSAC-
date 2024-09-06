#include <iostream>
#include <vector>

using namespace std;

void RotateArray(vector<int>& arr, int k) { //k is the number of times array should be rotated
    vector<int> temp(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        temp[(i + k) % arr.size()] = arr[i];
    }
    arr = temp; // Copy rotated array back to original array
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    RotateArray(arr, 2); // Rotate array by 2 position
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; // Output values of the rotated array
    }
    cout << endl;
    return 0;
}
