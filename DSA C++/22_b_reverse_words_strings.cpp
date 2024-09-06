#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word;
    stringstream ss(s);

    // Split the string into words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of the words
    reverse(words.begin(), words.end());

    // Join the words back into a single string
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string s = "A man with a plan";
    string reversed = reverseWords(s);
    cout << reversed << endl; // Output: "Panama canal a plan a man A"

    return 0;
}
