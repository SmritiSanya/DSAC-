#include<iostream>
#include<vector>
#include<algorithm> // For reverse function

using namespace std;

vector<int> addArrays(vector<int> a, int n, vector<int> b, int m){
    int i = n - 1;
    int j = m - 1;

    int carry = 0;
    vector<int> ans;

    while(i >= 0 && j >= 0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // First case: remaining elements of array a
    while(i >= 0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Second case: remaining elements of array b
    while(j >= 0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Third case: if there's any carry left
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // The result is currently in reverse order
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    vector<int> a = {9, 9, 9};
    vector<int> b = {1};
    vector<int> result = addArrays(a, a.size(), b, b.size());

    for(int num : result){
        cout << num;
    }

    return 0;
}
