#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Helper function to recursively generate subsequences
void generateSubsequences(const string& str, int index, string& current, vector<string>& result) {
    // Base case: if index reaches the end of the string, add the current subsequence to the result
    if (index == str.size()) {
        if (!current.empty()) {
            result.push_back(current); // Add non-empty subsequences only
        }
        return;
    }

    // Exclude the current character and move to the next
    generateSubsequences(str, index + 1, current, result);

    // Include the current character and move to the next
    current.push_back(str[index]);
    generateSubsequences(str, index + 1, current, result);

    // Backtrack to remove the current character before the next iteration
    current.pop_back();
}

// Function to return all non-empty subsequences
vector<string> findSubsequences(const string& str) {
    vector<string> result;
    string current;
    generateSubsequences(str, 0, current, result);
    return result;
}

int main() {
    string str = "abc";
    vector<string> result = findSubsequences(str);

    cout << "The non-empty subsequences are:" << endl;
    for (const auto& subsequence : result) {
        cout << "\"" << subsequence << "\"" << endl;
    }

    return 0;
}
