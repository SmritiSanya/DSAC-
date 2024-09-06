#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void permute(string str, int l, int r) {
    if (l == r) {
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);        // Swap current index with the first
            permute(str, l + 1, r);      // Recur for the rest of the string
            swap(str[l], str[i]);        // Backtrack
        }
    }
}

int main() {
    string str = "ABC";
    int n = str.size();
    permute(str, 0, n - 1);
    return 0;
}
