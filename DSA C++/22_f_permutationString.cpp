#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if s2 contains a permutation of s1
bool checkInclusion(const string& s1, const string& s2) {
    int m = s1.length();  // Length of s1
    int n = s2.length();  // Length of s2
    
    if (m > n) return false;  // If s1 is longer than s2, it can't fit

    vector<int> s1_count(26, 0);  // Frequency count for characters in s1
    vector<int> window_count(26, 0);  // Frequency count for the current window

    // Count characters in s1
    for (char c : s1) {
        s1_count[c - 'a']++;
    }

    // Count characters in the first window of s2
    for (int i = 0; i < m; ++i) {
        window_count[s2[i] - 'a']++;
    }

    // Check if the initial window matches s1's frequency count
    if (s1_count == window_count) return true;

    // Slide the window across s2
    for (int i = m; i < n; ++i) {
        window_count[s2[i] - 'a']++;  // Add new character to the window
        window_count[s2[i - m] - 'a']--;  // Remove old character from the window

        // Check if the updated window matches s1's frequency count
        if (s1_count == window_count) return true;
    }

    return false;  // No permutation found
}

int main() {
    string s1, s2;
    cout << "Enter the first string (s1): ";
    cin >> s1;
    cout << "Enter the second string (s2): ";
    cin >> s2;
    
    if (checkInclusion(s1, s2)) {
        cout << "s2 contains a permutation of s1." << endl;
    } else {
        cout << "s2 does not contain a permutation of s1." << endl;
    }
    
    return 0;
}
