#include <vector>
#include <iostream>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size(); // Length of the input array
    int index = 0; // Position to write in the array
    
    for (int i = 0; i < n; ) {
        char current_char = chars[i]; // Current character
        int count = 0; // Count of current_char

        // Count occurrences of the current character
        while (i < n && chars[i] == current_char) {
            i++;
            count++;
        }
        
        // Write the character to the current position
        chars[index++] = current_char;
        
        // If count is more than 1, write it as string
        if (count > 1) {
            string count_str = to_string(count); // Convert count to string
            for (char c : count_str) { // Write each digit
                chars[index++] = c;
            }
        }
    }
    
    return index; // Return the new length of the compressed array
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
    int new_length = compress(chars);
    cout << "New length: " << new_length << endl;
    cout << "Compressed chars: ";
    for (int i = 0; i < new_length; ++i) {
        cout << chars[i];
    }
    cout << endl;
    return 0;
}
